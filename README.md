# my_paint

Nom binaire : my_paint\
Langage : C\
Compilation : makefile

- Tous les fichiers sources doivent être inclus dans le delivery, à l'exception de tous les fichiers inutiles (binaires, fichiers temporaires, fichiers obj, etc.).
- Les messages d'erreur doivent être écrits sur la sortie d'erreur et le programme doit alors quitter avec le code d'erreur 84 (0 s'il n'y a pas d'erreur).

## CONTEXTE

Projet de création d'une interface graphique utilisateur (GUI)\
Compétences : Événement, GUI, HUD, Menu

Jusqu'à présent, vous avez créé des projets en ligne de commande (bash). Mais, vous le savez, au quotidien, vous n'utilisez pas la ligne de commande, mais une interface graphique utilisateur.

Au cours de ce projet, vous développerez votre propre GUI en créant un logiciel similaire à un logiciel de peinture, comme celui de Microsoft.

L'objectif est de travailler sur la GUI. Menu déroulant, bouton (radio ou coche), utilisation et modification d'outils, etc.

## EXIGENCES
### OBLIGATOIRE
#### DOIT

- Une fenêtre que vous pouvez minimiser, agrandir et fermer
- Fournir au moins les outils crayon et gomme
- Les boutons doivent avoir différents états (au moins 3)
- Une barre de menu, avec au moins les options fichier, édition et aide
- Dans le menu fichier, les options nouveau fichier, ouvrir fichier, enregistrer fichier.
- Dans le menu édition, la sélection des outils crayon et gomme
- Dans le menu aide, les options à propos (qui donne votre identifiant) et aide (qui explique comment utiliser le logiciel)
- Un menu latéral qui vous permet d'utiliser et de modifier les outils
- Changer l'épaisseur de la ligne pour l'outil crayon
- Changer la forme (cercle ou carré) de l'outil gomme et sa taille
- Être en mesure de faire un dessin avec les outils en utilisant la souris
- Enregistrer l'image (au format .jpg par défaut)

#### DEVRAIT

- Gestion des couches
- Un menu latéral avec la palette de couleurs pour l'outil crayon
- Enregistrer l'image dans d'autres formats (.bmp et .png)
- Ajouter des formes de base (cercle, rectangle)
- Possibilité de zoomer sur l'image
- Ajouter l'outil de sélection (avec une forme de rectangle)
- Ajouter les options couper/copier/coller dans le menu Édition, utilisable sur une partie de l'image précédemment sélectionnée avec l'outil de sélection, ET coller à un autre endroit de l'image ou sur une autre couche.

#### PEUT

- Gestion des masques de couches
- Import d'images
- Gestion des brosses pour les outils crayon et gomme
- Ajouter des formes complexes (convexes)
- Gestion des transformations (translation, rotation) des entités

#### BONUS

S'inspirer de logiciels comme GIMP ou Photoshop.
