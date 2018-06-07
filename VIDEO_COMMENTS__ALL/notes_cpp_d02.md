# D02
## 1 Polymorphisme
Plusieurs fonctions portant le meme nom mais avec des parametres differents. La surcharge marche sur n'importe quelle fonction, pas seulement sur les fonctions membres.

Exemple: `polymorphisme.class.hpp`
``` Dans .hpp
class Sample1
{
public:
	Sample1(void);
	~Sample1(void);

	void const	bar(const char   c);
	void const	bar(const int      n);
	void const	bar(const float  z);
	void const	bar(const Sample1 & i);  // Reference de Sample1 const
};
```

## 2 Operateur overload

Vocabulaire
Trois facons de faire une operation arithmetique :

1. `+ 1 1` : **notation prefixe** ou notation fonctionnelle car cela peut s'ecrire comme une simple fonction:  `+( 1, 1 )`. Avec la notation **prefixe**, on a une notation dite *fonctionnelle* car on peut modifier la notation comme ceci: `+ 1 1` devient `+( 1, 1 )`. Pour se rapprocher de la syntaxe d'une *fonction membre*, on peut l'ecrire comme: `1.+( 1 )` qui peut se lire `1`comme une instance, `.` pour appeler la fonction membre `+` avec les parametres `( 1 )`. 

2. `1 + 1` : **notation unfixe**.

3. `1 1 +` : **notation postfixe**, aussi appellee polonaise inverse, utilisable pour des calculs sur pile.

####*Exemple:*
Voir Integer.class.hpp.
- Extrait 1:

      `Integer &	operator=(const Integer & rhs);`

    Surcharge de l'operateur d'affectation `=`. Le mot cle `operator` permet, a partir d'une simple fonction membre, de faire une *surcharge* de l'*operateur* `=`. L'argument visible `& rhs` (pour **r**ight **h**and **s**ide) est l'adresse d'une instance de type `Integer`.
    
    - const:
    On ne modifie pas `rhs` donc l'argument est ici `const`. Par contre, la fonction membre affecte la valeur `n` a `_n`, elle n'est donc `pas const`.
    
    - return:
    Le retour `Integer &` est une reference sur une instance de la classe *Integer*. Comme l'affectation modifie l'instance courante, on va renvoyer la reference pour pouvoir utiliser le resultat dans un autre calcul. On reactualise ainsi la valeur `_n` a chaque iteration, comme dans a = b = c = d.

- Extrait 2:

    `Integer 	operator+(const Integer & rhs) const;`

    Surcharge de l'operateur `+`. Ici le principe est le meme que pour `=`, sauf qu'une addition ne modifie pas les deux operandes, et que la fonction peut donc etre `const`.
    
    - return:
Ici on se contente de retourner une copie du resultat, donc une copie de l'instance courante.

- Extrait 3:

    `std::ostream & operator<<( std::ostream & o, Integer const & rhs );`
    
    Surcharge de l'operateur `<<`. 
    
    

Les *operateurs* peuvent etre *unaires* (un seul operande), *binaires* (deux operandes). Les *ternaires* ne peuvent pas etre surchargees. Le nombre de variables dans la parenthese varie en fonction du nombre.

Dans une fonction membre, c++ passe en tout premier argument  *l'instance courante **this*** mais de facon invisible pour le programmeur. Ici on ne voit qu'1 seul argument, mais il y en a bien 2 (l'instance courante `this` cachee et `const Integer & rhs`). Si l'operateur etait unaire, il n'y aurait pas eu d'arguments visibles. 


####*Utilisation:*
Permet de faire des choses puissantes, notamment avec des operations arithmetiques.
***Mais*** on peut vite faire ***n'importe quoi***.

Respecter ces trois regles:
1. Que ca paraisse naturel. Si ca parait bizarre, eviter.
2. Rapport avec la semantique naturelle de l'operateur (pas multiplier des matrices avec l'operateur `+`).
3. N'en faites pas ! Meme si ca semble une bonne idee, si c'est pas indispensable, **oubliez**.


## 3 CANONICAL FORM
La forme canonique est une bonne pratique et 'norme' pour que les sources soient homogenes.

Au moins:
1. Un Constructeur par defaut
2. Un Constructeur par copie : qui prend en parametre une instance de la classe en cours de declaration/en train de definir afin de pouvoir realiser une copie de cette classe
3. Une surcharge de l'operateur d'assignation `=` pour mettre a jour l'instance courante a partir d'une autre instance de la meme classe.
4. Un destructeur



En detail:


- Constructeur par defaut [I-A][1]:

    Le constructeur par défaut est un constructeur ***sans argument*** ou dont chacun des arguments possède une ***valeur par défaut***. Il est utilisé, par exemple, lorsque l'on crée des tableaux d'objet. En effet, il n'est pas possible de passer un constructeur à l'opérateur ***new[]*** responsable de la création des tableaux. 
    
    Noter si un Constructeur est defini, le compilateur considere que le programmeur a fait son boulot et du coup ne creera pas de Constructeur automatiquement. 
    
    
    
- Constructeur de copie [I-B][1]:

    Il est specialise dans la *création* d'un objet à partir d'un autre objet pris comme modèle.
    
    Si vous ne spécifiez pas de constructeur par recopie, le compilateur en crée un automatiquement. Celui-ci est très simple : il recopie bit à bit, de manière « optimisée » l'objet source dans l'objet destination. Ce comportement est absolument parfait pour les classes simples ne réalisant ni agrégation ni allocations dynamiques. Dans ce cas là, vous n'avez pas besoin de fournir un constructeur de recopie car vous ferez probablement moins bien que le compilateur lui même.
    
    Dans tous les autres cas, vous aurez besoin de définir un constructeur de recopie :
    
    ***Agrégation par valeur*** : il vous faudra recopier les objets agrégés par valeur, en appelant - leur constructeur par recopie !
    
    ***Agrégation par référence (ou pointeur) et allocation dynamique de mémoire*** : la copie optimisée ne générant que des copies de pointeurs, différents objets utiliseraient les même cases mémoire. D'une part, les modifications de l'un seraient répercutées sur l'autre, mais, plus grave, en l'absence de mécanismes de garde fou, les mêmes blocs de mémoire seraient libérés plusieurs fois par les destructeurs : il est nécessaire de faire une recopie des objets agrégés par référence (avec le constructeur de recopie -) ou des blocs de mémoire (***new -***).
    
    Prototype  d'un constructeur de recopie est la suivante :
    ```
    T::T(const T&)
    ```
    [1]: https://cpp.developpez.com/cours/cppavance/
    
    
    
    
- Operateur d'affectation [I-D][1]

    L'opérateur d'affectation est utilisé pour dupliquer un objet dans un autre en dehors des déclarations où ce rôle est dévolu au constructeur de recopie. De fait, il est nécessaire de créer un opérateur lorsqu'il est nécessaire de créer un opérateur de recopie : agrégation et allocation dynamique de mémoire ; dans tous les autres cas, le compilateur crée pour vous un opérateur d'affectation « par recopie bit à bit optimisée » qui frôle la perfection.

    Prototype de l'operateur d'affectation `=`

    ```
    T& T::operator=(const T&)
    ```
    Le paramètre `T&` est passé par référence constante.
    
    Cet opérateur renvoie une référence sur T afin de pouvoir le chaîner avec d'autres affectations. Rappelons que l'opérateur d'affectation est associatif à droite, en effet, l'expression a=b=c est évaluée comme : a=(b=c). Ainsi, la valeur renvoyée par une affectation doit être à son tour modifiable, aussi, il est naturel de renvoyer une référence.
    
    *Un constructeur travaille toujours sur un matériau vierge : en effet, il est toujours appelé juste après l'allocation de mémoire. Tout au contraire, l'opérateur d'affectation est appelé sur un objet totalement instancié et, bien souvent, ayant déjà un lourd passé derrière lui. Aussi, toute opération d'affectation devra commencer par rétablir un terrain favorable à la recopie en détruisant les blocs de mémoire déjà affectés ainsi que les objets agrégés*.
     
     *Pour résumer, l'opérateur d'affectation cumule des fonctionnalités limitées de destructeur et de constructeur par recopie.*
    
    
    
- Destructeur [I-C][1]

    Le destructeur est là pour rendre les ressources occupées par un objet lorsqu'il arrive en fin de vie, soit qu'il soit alloué statiquement et sorte de portée, soit qu'il ait été alloué dynamiquement à l'aide de ***new*** et qu'on lui applique ***delete*** pour le supprimer.
    
    Si un objet agrège statiquement d'autres objets, ceux-ci sont automatiquement détruits : il n'y a pas lieu de s'en soucier.
    
    En revanche, s'il agrège dynamiquement d'autres objets (en particulier par l'intermédiaire de pointeurs), il sera indispensable de les détruire (par un appel à ***delete***) sous peine de ne pouvoir disposer à nouveau de la mémoire avant le prochain reboot !
    
    *Pour conclure sur le destructeur, celui-ci sera nécessaire dès lors que votre classe réalise de l'agrégation par pointeur ou de l'allocation dynamique de mémoire*. 