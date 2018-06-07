#QUIZZ
##Difference entre *construction* et *affectation*

Décrivez les lignes de code suivantes
(mettant en jeu les classes T et U)
en séparant éventuellement les cas T=U et T/=8

```
1) T t;
2) U u;
3) T z(t);
4) T v();
5) T y=t;
6) z = t;
7) T a(u);
8) t = u;
```

Correction :

1. ***T t*** Construction d'un objet `t` de classe `T` avec appel du constructeur par défaut

2. ***U u*** Construction d'un objet `u` de classe `U` avec appel du constructeur par défaut

3. ***T z(t)*** Construction d'un objet `z` de classe `T` avec appel du constructeur de recopie sur l'objet `t`

4. ***T v()*** Déclaration d'une fonction `v` renvoyant un objet de classe `T` et ne prenant pas de paramètre.

5. ***T y=t*** Construction d'un d'objet `y` de classe `T` avec appel du constructeur de recopie sur l'objet `t`. Il ne peut en aucun cas s'agir d'une affectation car nous sommes dans une déclaration et l'objet `y` doit être construit ! En fait les lignes 3 et 5 sont équivalentes

6. ***z = t*** Affectation de l'objet `t` à l'objet `z` par l'opérateur d'affectation. Nous sommes bien ici dans le cadre d'une affectation : les objets `t` et `z` sont déjà construits et la ligne de code n'est pas une déclaration

7. ***T a(u)*** Dans le cas général (`T/=8`) il s'agit de la construction d'un object de classe `T` à partir d'un objet de classe `U` à l'aide d'un constructeur de la forme `T(const U&)`. Dans le cas dégénéré (`T=U`), il s'agit d'un appel au constructeur de recopie.

8. ***t = u*** Dans le cas général (`T/=8`) il s'agit de l'affectation d'un objet de classe `U` à un objet de classe `T` à l'aide d'un opérateur de la forme `T& operator=(const U&)`. Dans le cas dégénéré (`T=U`), il s'agit d'une affectation à l'aide de l'opérateur d'affectation de la forme canonique.