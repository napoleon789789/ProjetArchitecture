Sujet du projet

Liens :

    gluUnproject pour passer des coordonnées souris à des coordonnées dans la scène 3D : http://nehe.gamedev.net/article/using_gluunproject/16013/

Données :

    plan 100x100 points en format OFF (100x100points.off.zip) ;
    plan 100x100 points + pour chaque point la coordonnée de texture (100x100pointsUV.off.zip) (0 0 en xmin, ymin), avec l'extension OFF (attention cela change du format officiel, à vous de modifier la lecture) ;
    une texture (texture.jpg) pour essayer (500x500 pixels) et se défouler.


Il faut :

    charger un modèle 3D au format OFF et une texture à lui appliquer (dans l'exemple un simple plan), ce sera la cible, à mettre à la verticale, face à l'utilisateur;
    pouvoir tirer une sphère sur ce modèle. La visée se fait à la souris, par exemple en utilisant gluUnproject (https://www.opengl.org/sdk/docs/man2/xhtml/gluUnProject.xml) ou directement selon les coordonnées (x,y) de la souris dans la fenêtre;
    la sphère suit une ligne droite (ou non) entre la position de la caméra et la visée, il faut voir se déplacer ce projectile;
    la sphère transporte une déformation (VS) comme vue en TP, qui lui permet de déformer la cible;
    lorsque ce projectile touche la cible il disparaît, reste la "trace" dans la cible (due à la déformation). Les parties touchées de la cible doivent être grisées (FS);
    la cible se déplace aléatoirement (VS);
    la cible vibre lorsqu'elle est touchée (VS);
    il faut pouvoir (sur appui d'une touche) utiliser un mode "night vision" (FS) vert ou rouge (sur le principe de cette démo : http://www.geeks3d.com/20091009/shader-library-night-vision-post-processing-filter-glsl/), vous n'avez pas besoin du "scenebuffer" en agissant sur tous les "fragment", ni du masque des jumelles) ;


Améliorations possibles en bonus :

    pouvoir tenir compte de plusieurs zones touchées dans la cible ;
    vous pouvez rajouter vos effets...
 
