
DAUDIT
RUDDY
M1 INFORMATIQUE


INITIATION A LA RECHERCHE : Mr CABANES














La Blockchain est une effet de mode ou bien une prouesse technologique

















2021-2022                                                                   Université Paris Sorbonne Nord
I - INTRODUCTION

Mots-Clées

Cryptographie, Bitcoins, Hachage, Cryptage, Blockchain, Sécurité, Tranfert, Tiers de confiance.

Résumé

L’article nous présente le fonctionnement de la blockchain et pourquoi elle est autant plébiscitée.
Celui-ci nous plongera sur la capacité de la blockchain à sécuriser des informations.
Ainsi, nous allons découvrir ce qu’est une blockchain, son fonctionnement et dans quel domaine elle est utilisée.
Par ailleurs avec deux algorithmes de blockchain présenté nous verrons si aujourd'hui, si c’est le moyen le plus sûr de sécuriser et de transporter des données
Dans cette approche différents cas d’étude seront amenés à être étudiés (IBM, la banque Santander, etc. ) qui souligne l’utilisation de cette technologie par ces entreprises.


Présentation

Une banque, Airbnb, cryptomonnaie, cybersécurité, ces différents secteurs, portent-ils à croire qu’ils n’ont aucun lien ? En êtes-vous sûr ? Pourtant, ces secteurs, qui sont différents, visent à fonctionner sans autorité centrale ni d’administrateur unique.
Votre banque agit comme un chaperon, elle vous permet de régler vos achats par carte bancaire auprès de commerçants que vous ne connaissez peut-être pas et qui ne vous ont jamais rencontré auparavant, Airbnb rend possible la location de la maison d’une famille que vous ne verrez qu’en photo avant d’y entrer, mais alors qu’elle est cette autorité ?
Cette autorité appelée tiers de confiance est un acteur qui facilite la transaction entre deux parties en les rassurant. Airbnb demande des informations aux bailleurs et aux locataires et permet à chacun de noter l’autre de façon publique. Ainsi, Airbnb devient un tiers de confiance en plus d'une plateforme et s'auto-rémunère avec des commissions. Selon Thierry Boudes de la Blockchain, déchaîne les passions, ce tiers de confiance serait, il cite “un acteur qui facilite la transaction entre deux parties en les rassurant.”
Mais alors comment éliminer ce tiers de confiance et bien grâce à cette technologie numérique qui est désignée sous l’appellation “Blockchain”, cette technologie de stockage et de transmission qui a été créée il y a de cela 10 ans par les fondateurs de la monnaie virtuelle populaire de nos jours le bitcoin.
La blockchain permet au départ aux utilisateurs de faire des transactions de bitcoin sans passer par cet intermédiaire, avec la technologie de blockchain ce tiers de confiance devient le système lui-même. Dans “Comprendre, la blockchain : Quels impacts pour la comptabilité et ses métiers ?” Le domaine financier et bancaire sont des acteurs importants dans le développement de la technologie Blockchain. Ainsi, Le NASDAQ a développé une “ Blockchain innovation initiative “ qui permet d’ouvrir une possibilité aux entreprises de pouvoir digitaliser des certificats de transactions au format papiers, ce qui permet une traçabilité des identifiants.
Comment alors cet article va, il être découpé, premièrement, on va définir ce qu’est la blockchain, comment elle a été créée, comment et pourquoi elle est utilisée et dans quel domaine, nous verrons aussi d’anciens papiers de scientifiques ou d'experts qui se portent sur le sujet pour saisir leurs points de vue, exporter leurs données, leur méthodologie et ainsi avec un cas pratique que nous verrons à la fin de la partie pouvoir faire notre propre analyse.
La partie deux elle se concentrera sur ma proposition et ainsi ma problématique, je me pencherai donc sur l’idée de comprendre l’utilisation et la robustesse de la blockchain, puis dans la partie trois je présenterai mes expériences sur 2 types de codes l’un en #c et l’autre en Java qui ont pour but de créer une blockchain et de crypter et de créer des blocs et enfin la partie résultats qui répondra à la problématique soit de manière positive ou négative.
Et enfin une dernière partie qui conclura et répondra à cette problématique.

Définition
Avant de définir ce qu’est une blockchain, il faut rappeler les principes de hachage est de cryptographie.
Une fonction de hachage est une fonction particulière qui, à partir d'une donnée fournie en entrée, calcule une empreinte numérique servant à identifier rapidement la donnée initiale, au même titre qu'une signature pour identifier une personne. Les fonctions de hachage sont utilisées en informatique et en cryptographie notamment pour reconnaître rapidement des fichiers ou des mots de passe.
Une fonction de hachage cryptographique est une fonction de hachage qui, à une donnée de taille arbitraire, associe une image de taille fixe, et dont une propriété essentielle est qu'elle est pratiquement impossible d'inverser, c'est-à-dire que si l'image d'une donnée par la fonction se calcule très efficacement, le calcul inverse d'une donnée d'entrée ayant pour image une certaine valeur se révèle impossible sur le plan pratique. Pour cette raison, on dit d'une telle fonction qu'elle est à sens unique.
En raison de leur ubiquité, ces fonctions à sens unique ont été appelées les chevaux de trait de la cryptographie moderne. La donnée d'entrée de ces fonctions est souvent appelée message ; la valeur de sortie est souvent appelée valeur de hachage, empreinte numérique, empreinte, ou encore haché (en anglais, message digest ou digest, hash).
Une fonction de hachage cryptographique idéale possède six propriétés :

La fonction se doit d’être déterministe,un même message aura toujours la même valeur de hachage
La valeur de hachage d'un message se calcule “facilement”
Il est impossible pour une valeur de hachage donnée, de pouvoir construire un message ayant cette valeur
Il est impossible de trouver un doublon ayant la même valeur de hachage qu'un message donné 
Il est impossible de trouver deux messages différents ayant la même valeur de hachage 
Une modification d’un message modifie la valeur de hachage
 
Pourquoi parler de cryptographie et de hachage avant définir la blockchain et bien vérifier l'intégrité d’une donnée et donc créer une blockchain ?

S'il y a bien un mot à retenir, c’est celui de “Réaction”.

La blockchain est une base de données distribuée dont les informations envoyées par les utilisateurs et les liens internes à la base sont vérifiés et groupés à intervalles de temps réguliers, formant des blocs ainsi qu'une chaîne.
L’ensemble est sécurisé par cryptographie. Cette chaîne de blocs qui gère une liste d’enregistrements protégés contre la falsification ou la modification par des nœuds de stockage, c’est donc un répertoire distribué et sécurisé de toutes les transactions effectuées et depuis le démarrage du système.

Elle emploie des protocoles informatiques liés à une infrastructure décentralisée.
Là où Internet permet de transférer des paquets de données d’un serveur plus sûr à des clients distants, une blockchain permet à la confiance de s’établir entre utilisateurs du système.
Avec la technologie de blockchain, le tiers de confiance n’existe plus, chaque élément de la blockchain contient les éléments nécessaires pour garantir l’intégrité des données échangées par algorithme.

Souvenez-vous du mot Réaction, si un attaquant veut attaquer un bloc précis, le hachage va automatiquement changer pour toute la chaîne de bloc ainsi l'attaquant devra donc récupérer les données des précédents blocs pour seulement le bloc visé.

Le principe de la blockchain est qu’elle est pérenne, infalsifiable, distribuée.

La chaîne de bloc se construit via des portes logiques (NOTANDORXOR) , en récupérant le message crypté grâce au SHA 256.

Il suffit de choisir des données qui ne sont pas encore dans la blockchain et de les regrouper et de signer l’ensemble.

Pour que le nouveau bloc soit accepté, il faut lui ajouter une preuve de travail, c'est-à-dire le résultat d’un calcul très long.
Cette étape a pour but d'éviter que plusieurs blocs valide ne se répandent dans le réseau en même temps.

Ajout d’une preuve de travail qui va permettre le calcul, étape qui vise à éviter que plusieurs blocs valident ne se répandent dans le réseau en même temps.

II - LITTÉRATURES

Le domaine de la blockchain ne touche plus désormais au secteur des sciences et de l’informatique, certaines revues que nous allons exploiter concernant le droit, l'économie, la sécurité peuvent être utilisées et apporter un début de réponse à notre problématique.
 
Ce qui est surprenant et intéressant, c’est qu’avec seulement certains articles de n’importe quel domaine on peut déjà avoir un avis sur le sujet même sans être un connaisseur.
 
D’un côté un parti qui soutient la blockchain et de l’autre un parti qui pensent que ce n’est juste qu’un effet de mode.
 
Dans le papier de Karl Wüst chercheur au Swiss Federal Institute of Technology à Zurich, nous décrit la blockchain comme une utopie plutôt qu’une réelle révolution, pour lui domaine de la recherche comprend de nombreux acteurs centraux en qui l’on a confiance : des hautes écoles renommées, des revues réputées, des organisations scientifiques nationales, tant que ces institutions seront viables, la blockchain n’apporterais pas une si grande plus-value. Interviewé par Patrick Züst dans le magazine Horizon, Wüst déclare que ces nouvelles approches s’avèrent être complexes à gérer et énergivores rien qu’avec le réseau des bitcoins, celui-ci consomme environ autant d’électricité qu’un pays tel que l’Autriche.
De plus, dans son article West, nous montre via un schéma nous explique dans quelles circonstances nous pourrions utiliser la blockchain dans le meilleur des cas.
Un autre chercheur est aussi de l’avis de Wust, José Parra Moyano directeur du Blockchain Research Labs de l’Université de Zurich pour lui la blockchain ne serait qu’au début, elle serait à l'âge de pierre et que la majorité des entreprises utilise cette technologie comme un instrument de marketing. Mais il n’exclut pas qu’elle puisse apporter un jour des changements dans le monde scientifique.
”La blockchain possède un très grand potentiel. Il vaut la peine de suivre ses développements techniques et les différents projets.” Il cite par exemple le consortium international Bloxberg auquel participe la bibliothèque de l’ETH Zurich, qui développe un système permettant aux scientifiques d’enregistrer leurs travaux sans rendre leur contenu public. L’authenticité des données peut donc être prouvée après coup, sans publication.
 
“Si une fuite se produisait, tout deviendrait public. Avec la blockchain, nous pouvons documenter très précisément nos recherches avec la garantie que personne d’autre ne peut y accéder. ” Mindfire, chercheur russe, archive des travaux scientifiques et des esquisses ainsi que des conversations entières. “Il sera ainsi possible de prouver plus tard de manière indubitable qui a été le premier à formuler une idée précise.” Cette solution n’est pas encore parfaite, concède Pascal Kaufmann. Le système est encore trop lent et il y a encore de nombreuses incertitudes juridiques. En particulier, il n’est pas clair si une information enregistrée dans une blockchain a une quelconque valeur devant un tribunal ou lors d’une demande de brevet.
Olivier Desplebin, Gulliver Lux, Nicolas Petit possèdent la même réflexion, mais approuvent que le développement technologique, les réseaux de communication permettent de transférer des informations. Il s’agit d’un transfert de fichiers copié souvent par mail, alors que l’échange monétaire par mail n’a lui pas possible, une transaction de ce type exige l’usage d’un tiers de confiance qui confirmera l’identité des acteurs de la transaction et servira de caution de confiance, stockera la transaction et s'assure de la bonne réalisation. La technologie Blockchain rend possible cette transaction entre deux acteurs sans intermédiaire tout en assurant la confirmation de l’identité des acteurs et le suivi et la bonne réalisation de la transaction. La vérification continue des données empêchera toutes falsifications.
 
Pour eux la blockchain aurait plus à agir dans les domaines financiers ou d’en les entreprises que plutôt dans le secteur scientifiques,l’outil facilitation des paiements, des échanges d’informations, de l’insertion des partenaires d’affaires et des banques créer des partenariats autour de la comptabilité connectée, usant de “smart-contracts” afin de constituer un écosystème comptable digitalisé. Ces programmes informatiques peuvent être encodés afin de réaliser un ensemble d’opérations en fonction de conditions spécifiques. Ceux-ci peuvent ainsi être utilisés par exemple comme outil de contrôle automatisé, surveillant les opérations comptables à partir de procédures standardisées. Le programme vérifie alors que l’écriture comptable respecte les conditions et les standards qui ont été prédéfinis. Ils peuvent également être programmés afin d’enclencher des procédures comptables spécifiques lorsque certains critères sont atteints. Le Smart Accounting permet d'automatiser des opérations comptables, des procédures de contrôles et de sécuriser des procédures.
L’approche de leurs articles et ceux du monde scientifique en lui-même est assez tranché, la blockchain est certes reconnue comme une possibilité, mais n’a pas autant de fan que dans le monde “commercial”, tant qu’il y aura des tiers de confiance à qui nous pourront faire confiance la blockchain ne sera utilisé qu'en derniers recours.
 
 
 
III - MÉTHODOLOGIE
 
Comment allons nous définir notre cadre de recherche, tout d’abord nous allons étudier l'algorithme de Ivan en java pour avoir une idée de base de la création et du fonctionnement de la blockchain, son algorithme est assez court, nous utilisons principalement l'algorithme SutirthaDey car celui-ci permet de pouvoir étudier les blocs de plus près par leur signatures, de pouvoir vérifier tout changement, d’ajouter de nouveaux blocs à la chaîne.
De là, nous pourrons étudier toutes les variations des signatures et savoir si on peut accéder aux informations d’un bloc tel un utilisateur malveillant.
 
Les fichiers utilisés proviennent du GitHub de SutirthaDey et donc open-source.
Grâce au switch case dans le main du blockchain. Il sera possible de décomposer nos recherches et de catégoriser nos expériences et résultats.
 
 
EXPÉRIENCES
 
Création
 
Au lancement de notre programme, nous arrivons sur notre console principale avec les différents choix.
Figure 1

 
 
 
Commençons par créer un bloc qui sera notre tête de cette blockchain, la case numéro 1 utilise la fonction addBlock.
 
 
 
Figure 2

 
 
Cet algorithme va créer une structure de bloc “head”, pour ensuite le signer avec la méthode sha256, ce bloc sera ajouter à la chaîne si existante ou sinon en formera une nouvelle.
 
Vérification
Nous vérifions que le bloc à bien été créé avec le case 3 qui va permettre de nous afficher.
 
Figure 3

 
 
Grâce aux deux méthodes print il est maintenant possible d’avoir connaissance de l’adresse du bloc, sa signature, la donnée brute et la prochaine adresse du futur bloc.
Par la suite, nous recommençons l’opération pour avoir une chaîne de 2 blocs qui sera amplement suffisante.
 
Nous allons altérer les blocs avec la méthode alterNthBlock, cette méthode permet de créer une altération, mais avec des conditions de sécurité faible mais assez conséquentes pour qu’un débutant ne puisse compromettre des données dans la chaîne.
 
Figure 4

 
 
En effet, pour avoir accès à l’un des blocs, il faut ici connaître le bloc à altérer et sa valeur, dans ce cas ou nous avons 2 à 3 blocs, il est assez facile de pouvoir accéder aux informations, mais n’oublions pas qu’une chaîne est vivante en permanence, tant qu’il y aura des mineurs, il est donc difficile de se rappeler de la position exacte et de la valeur exacte du bloc. Si Altération, on reçoit un message de confirmation sinon un message d’erreur.
 
 
 
 
 
 
 
 
 
 
 
IV - RÉSULTATS 
 
Avec les différentes étapes, nous pouvons séparer en deux résultats nos recherches, l’un des résultats considérant l'échec de l'accès du bloc quant à l’autre à sa réussite.
 
Figure 5

 
La figure 5 reprend le parcours de la création de la chaîne, nous pouvons les découvrir sur le terminal l’adresse du bloc, sa signature, la donnée brute et la prochaine adresse du futur bloc.
Maintenant, en ayant un visuel, il sera plus clair de constater les changements effectués.
 
En cas d’échec de la manipulation nous nous retrouvons avec un message d’erreur
 
FIgure 6
 
 
En cas de réussite, nous avons aperçu un changement dans le bloc.
 
Figure 7

Nous avons réussi à pouvoir atteindre le bloc que nous recherchons et nous avons pu modifier sa valeur.
Analysons  les deux figures suivantes.
 
 
Figure 8

 
 
Figure 9

 
 
Sur la figure 8 qui ne porte aucune altération après vérification, nous pouvons continuer notre chemin sur la chaîne à contrario sur la figure 9 où la vérification de la chaîne a échouée, en effet, on remarque que la signature ou hash a été modifier pour le bloc 2 et 4, on ne peut donc pas continuer notre chemin (dans une branche dont nous ne connaissons pas les blocs) de cet échec tous les blocs qui suivent cette altération ont leurs signatures modifié.
À grande échelle, la blockchain pourrait donc permettre une sécurité conséquente et utilisable.
 
 
 
V - CONCLUSION
 
Discution
 
Dans cette étude, on peut se demander si le blockchain n’est pas réellement une technologie utile certes pas révolutionnaire, mais qui serait plus qu’un feu de paille. Les scientifiques, ne seraient-ils pas désintéressés de cette technologie mise en avant par un autre secteur, la blockchain est souvent plébiscitée par les économistes, les entreprises et surtout un moyen de créer des bitcoins aussi n’ont ils pas trop confiance dans ces tierces personnes.
Alors oui sur Google Drive, nous pouvons voir qui modifie vos données, mais êtes vous sûr de qui est derrière son ordinateur, que se passerait-il si les serveurs de Google brûlaient ou bien seraient en panne, auriez vous toujours envie de devoir payer votre tiers de confiance à chaque transaction.
Les résultats de cette étude montrent que si on triche, un bloc qui serait ciblé sa signature change et change l’ensemble des signatures après la sienne (effet dominos).
 
De plus, s'il y a assez de mineurs (utilisateurs), c’est presque impossible de réussir à attaquer une blockchain sachant :
 
Si on veut changer l’ordre d’une route, il est difficile que sa route soit acceptée, car si un mineur obtient une route plus longue, celle-ci sera acceptée à sa place.
 
Nous n’avons pas réussi à prouver que les tables de hachages soient résistantes aux collisions, comme en 2004 ou une équipe chinoise à réussir…
 
 
Chaque nouveau bloc est relié à tous les blocs qui le précèdent dans une chaîne cryptographique, de telle sorte qu'il est pratiquement impossible de l'altérer. Toutes les transactions dans les blocs sont validées et approuvées par un mécanisme de consensus, ce qui garantit que chaque transaction est vraie et correcte.
La technologie de blockchain permet la décentralisation grâce à la participation des membres à travers un réseau distribué. Il n'existe aucun point de défaillance unique, et un utilisateur unique ne peut pas modifier l'enregistrement des transactions. Cependant, les technologies de blockchain diffèrent sur certains aspects de la sécurité.
 
Mais malgré cela la blockchain à un contrecoup et qui est en faveur des gens contre, elle consomme énormément d’énergie, repose essentiellement sur le nombre de mineurs qui prolonge la blockchain s'il y a un nombre limité de mineurs la chaîne ne sera continue, une capacité de stockage qui a limité quadruplé en l’espace de 4 ans (2017 100 g)Des données médicales, allons nous faire confiance un organisme privé qui va collecter certaines de nos informations privées.), un anonymat des gens qui valident nos blocs comment peut on être sûr qu’ils ne les voleront pas.
Dans un sens, il est profitable d’utiliser la blockchain, mais celle-ci à un prix et une question de confiance.
 
Réponse à la problématique
 
Nous avons pu définir, créer et comprendre le fonctionnement de la blockchain, via nos résultats et les différentes études de cas que nous avons étudiés, pouvons nous répondre à la problématique.
 
Nos résultats prouvent que la blockchain est un excellent moyen de sécuriser nos informations, mais cette réponse n’est pas absolue, comme expliqué pour utiliser la blockchain, il faut une confiance dans le système, avoir un système informatique stable et une puissance énergétique sans compter qu’il faut une ligne de mineurs.
 
La blockchain en pâtit toujours de son image de "phénomène" auprès des experts scientifiques qui préféreront utiliser des technologies en quelles auront confiance même si elles ne sont pas autant sécurisées que la blockchain.
 
Pour mon cas, je ne pense pas utiliser la blockchain par manque de puissance matérielle, mais je suis convaincu que dans un futur proche celle-ci sera utilisée, mais il faudra que le monde scientifique l’accepte. 
 








VI - BIBLIOGRAPHIE

Article Scientifique

Karl Wüst, Department of Computer Science ETH Zurich et Arthur Gervais Department of Computing Imperial College London, Auteurs, “Do you need a Blockchain ?” Publication au Crypto Valley Conference on Blockchain Technology en 2018.


Article de Revues

Olivier Desplebin, Gulliver Lux et Nicolas Petit. Auteurs, “L’évolution de la comptabilité, du contrôle, de l’audit et de leurs métiers au prisme de la Blockchain : une réflexion prospective” dans Management & Avenir 2018/5 (N° 103), pages 137 à 157.
 
Olivier Desplebin, Gulliver Lux et Nicolas Petit. Auteurs, “Comprendre la blockchain : quels impacts pour la comptabilité et ses métiers ?” dans ACCRA 2019/2 (N° 5), pages 5 à 23.
 
Thierry Boudès. Auteur, ”La blockchain déchaîne les questions !” dans Annales des mines - Gérer et comprendre 2018/1 (N°131),page 83 à 85.
 
Patrick Züst. Auteur. “La blockchain peine encore à révolutionner la science” dans Horizon le 6 juin 2019.
 
SIte Internet
 
IBM,” Qu’est ce que la sécurité de la blockchain?”
 
Wikipédia, “Blockchain”.
 
Wikipédia, “Fonction de hachage et Fonction de Cryptographie”.
 
Geekflare, “Comment créer une blockchain avec Python”.
 
Vidéos
 
Université de LIlle - Maths adultes, “Blockchain : Comment ça marche ?”. YouTube.

Blockgeeks, “What is Hashing on the Blockchain ?”. YouTube.

Algorithmes

SutirthaDey, “blockchain_in_c/sha256.c”, GitHub.

Ivan on TechBuilding, “a Blockchain in Under 15 Minutes - Programmer explains”, YouTube.
