#include <immintrin.h>
void mySuperModelFuncAAD(__m256d v0,__m256d v1,__m256d& v2303,__m256d& d0,__m256d& d1,__m256d d2303) {
	__m256d tmp,v2,d2(_mm256_setzero_pd()),v3,d3(_mm256_setzero_pd()),v4,d4(_mm256_setzero_pd()),v5,d5(_mm256_setzero_pd()),v6,d6(_mm256_setzero_pd()),v7,d7(_mm256_setzero_pd()),v8,d8(_mm256_setzero_pd()),v9,d9(_mm256_setzero_pd()),v10,d10(_mm256_setzero_pd()),v11,d11(_mm256_setzero_pd()),v12,d12(_mm256_setzero_pd()),v13,d13(_mm256_setzero_pd()),v14,d14(_mm256_setzero_pd()),v15,d15(_mm256_setzero_pd()),v16,d16(_mm256_setzero_pd()),v17,d17(_mm256_setzero_pd()),v18,d18(_mm256_setzero_pd()),v19,d19(_mm256_setzero_pd()),v20,d20(_mm256_setzero_pd()),v21,d21(_mm256_setzero_pd()),v22,d22(_mm256_setzero_pd()),v23,d23(_mm256_setzero_pd()),v24,d24(_mm256_setzero_pd()),v25,d25(_mm256_setzero_pd()),v26,d26(_mm256_setzero_pd()),v27,d27(_mm256_setzero_pd()),v28,d28(_mm256_setzero_pd()),v29,d29(_mm256_setzero_pd()),v30,d30(_mm256_setzero_pd()),v31,d31(_mm256_setzero_pd()),v32,d32(_mm256_setzero_pd()),v33,d33(_mm256_setzero_pd()),v34,d34(_mm256_setzero_pd()),v35,d35(_mm256_setzero_pd()),v36,d36(_mm256_setzero_pd()),v37,d37(_mm256_setzero_pd()),v38,d38(_mm256_setzero_pd()),v39,d39(_mm256_setzero_pd()),v40,d40(_mm256_setzero_pd()),v41,d41(_mm256_setzero_pd()),v42,d42(_mm256_setzero_pd()),v43,d43(_mm256_setzero_pd()),v44,d44(_mm256_setzero_pd()),v45,d45(_mm256_setzero_pd()),v46,d46(_mm256_setzero_pd()),v47,d47(_mm256_setzero_pd()),v48,d48(_mm256_setzero_pd()),v49,d49(_mm256_setzero_pd()),v50,d50(_mm256_setzero_pd()),v51,d51(_mm256_setzero_pd()),v52,d52(_mm256_setzero_pd()),v53,d53(_mm256_setzero_pd()),v54,d54(_mm256_setzero_pd()),v55,d55(_mm256_setzero_pd()),v56,d56(_mm256_setzero_pd()),v57,d57(_mm256_setzero_pd()),v58,d58(_mm256_setzero_pd()),v59,d59(_mm256_setzero_pd()),v60,d60(_mm256_setzero_pd()),v61,d61(_mm256_setzero_pd()),v62,d62(_mm256_setzero_pd()),v63,d63(_mm256_setzero_pd()),v64,d64(_mm256_setzero_pd()),v65,d65(_mm256_setzero_pd()),v66,d66(_mm256_setzero_pd()),v67,d67(_mm256_setzero_pd()),v68,d68(_mm256_setzero_pd()),v69,d69(_mm256_setzero_pd()),v70,d70(_mm256_setzero_pd()),v71,d71(_mm256_setzero_pd()),v72,d72(_mm256_setzero_pd()),v73,d73(_mm256_setzero_pd()),v74,d74(_mm256_setzero_pd()),v75,d75(_mm256_setzero_pd()),v76,d76(_mm256_setzero_pd()),v77,d77(_mm256_setzero_pd()),v78,d78(_mm256_setzero_pd()),v79,d79(_mm256_setzero_pd()),v80,d80(_mm256_setzero_pd()),v81,d81(_mm256_setzero_pd()),v82,d82(_mm256_setzero_pd()),v83,d83(_mm256_setzero_pd()),v84,d84(_mm256_setzero_pd()),v85,d85(_mm256_setzero_pd()),v86,d86(_mm256_setzero_pd()),v87,d87(_mm256_setzero_pd()),v88,d88(_mm256_setzero_pd()),v89,d89(_mm256_setzero_pd()),v90,d90(_mm256_setzero_pd()),v91,d91(_mm256_setzero_pd()),v92,d92(_mm256_setzero_pd()),v93,d93(_mm256_setzero_pd()),v94,d94(_mm256_setzero_pd()),v95,d95(_mm256_setzero_pd()),v96,d96(_mm256_setzero_pd()),v97,d97(_mm256_setzero_pd()),v98,d98(_mm256_setzero_pd()),v99,d99(_mm256_setzero_pd()),v100,d100(_mm256_setzero_pd()),v101,d101(_mm256_setzero_pd()),v102,d102(_mm256_setzero_pd()),v103,d103(_mm256_setzero_pd()),v104,d104(_mm256_setzero_pd()),v105,d105(_mm256_setzero_pd()),v106,d106(_mm256_setzero_pd()),v107,d107(_mm256_setzero_pd()),v108,d108(_mm256_setzero_pd()),v109,d109(_mm256_setzero_pd()),v110,d110(_mm256_setzero_pd()),v111,d111(_mm256_setzero_pd()),v112,d112(_mm256_setzero_pd()),v113,d113(_mm256_setzero_pd()),v114,d114(_mm256_setzero_pd()),v115,d115(_mm256_setzero_pd()),v116,d116(_mm256_setzero_pd()),v117,d117(_mm256_setzero_pd()),v118,d118(_mm256_setzero_pd()),v119,d119(_mm256_setzero_pd()),v120,d120(_mm256_setzero_pd()),v121,d121(_mm256_setzero_pd()),v122,d122(_mm256_setzero_pd()),v123,d123(_mm256_setzero_pd()),v124,d124(_mm256_setzero_pd()),v125,d125(_mm256_setzero_pd()),v126,d126(_mm256_setzero_pd()),v127,d127(_mm256_setzero_pd()),v128,d128(_mm256_setzero_pd()),v129,d129(_mm256_setzero_pd()),v130,d130(_mm256_setzero_pd()),v131,d131(_mm256_setzero_pd()),v132,d132(_mm256_setzero_pd()),v133,d133(_mm256_setzero_pd()),v134,d134(_mm256_setzero_pd()),v135,d135(_mm256_setzero_pd()),v136,d136(_mm256_setzero_pd()),v137,d137(_mm256_setzero_pd()),v138,d138(_mm256_setzero_pd()),v139,d139(_mm256_setzero_pd()),v140,d140(_mm256_setzero_pd()),v141,d141(_mm256_setzero_pd()),v142,d142(_mm256_setzero_pd()),v143,d143(_mm256_setzero_pd()),v144,d144(_mm256_setzero_pd()),v145,d145(_mm256_setzero_pd()),v146,d146(_mm256_setzero_pd()),v147,d147(_mm256_setzero_pd()),v148,d148(_mm256_setzero_pd()),v149,d149(_mm256_setzero_pd()),v150,d150(_mm256_setzero_pd()),v151,d151(_mm256_setzero_pd()),v152,d152(_mm256_setzero_pd()),v153,d153(_mm256_setzero_pd()),v154,d154(_mm256_setzero_pd()),v155,d155(_mm256_setzero_pd()),v156,d156(_mm256_setzero_pd()),v157,d157(_mm256_setzero_pd()),v158,d158(_mm256_setzero_pd()),v159,d159(_mm256_setzero_pd()),v160,d160(_mm256_setzero_pd()),v161,d161(_mm256_setzero_pd()),v162,d162(_mm256_setzero_pd()),v163,d163(_mm256_setzero_pd()),v164,d164(_mm256_setzero_pd()),v165,d165(_mm256_setzero_pd()),v166,d166(_mm256_setzero_pd()),v167,d167(_mm256_setzero_pd()),v168,d168(_mm256_setzero_pd()),v169,d169(_mm256_setzero_pd()),v170,d170(_mm256_setzero_pd()),v171,d171(_mm256_setzero_pd()),v172,d172(_mm256_setzero_pd()),v173,d173(_mm256_setzero_pd()),v174,d174(_mm256_setzero_pd()),v175,d175(_mm256_setzero_pd()),v176,d176(_mm256_setzero_pd()),v177,d177(_mm256_setzero_pd()),v178,d178(_mm256_setzero_pd()),v179,d179(_mm256_setzero_pd()),v180,d180(_mm256_setzero_pd()),v181,d181(_mm256_setzero_pd()),v182,d182(_mm256_setzero_pd()),v183,d183(_mm256_setzero_pd()),v184,d184(_mm256_setzero_pd()),v185,d185(_mm256_setzero_pd()),v186,d186(_mm256_setzero_pd()),v187,d187(_mm256_setzero_pd()),v188,d188(_mm256_setzero_pd()),v189,d189(_mm256_setzero_pd()),v190,d190(_mm256_setzero_pd()),v191,d191(_mm256_setzero_pd()),v192,d192(_mm256_setzero_pd()),v193,d193(_mm256_setzero_pd()),v194,d194(_mm256_setzero_pd()),v195,d195(_mm256_setzero_pd()),v196,d196(_mm256_setzero_pd()),v197,d197(_mm256_setzero_pd()),v198,d198(_mm256_setzero_pd()),v199,d199(_mm256_setzero_pd()),v200,d200(_mm256_setzero_pd()),v201,d201(_mm256_setzero_pd()),v202,d202(_mm256_setzero_pd()),v203,d203(_mm256_setzero_pd()),v204,d204(_mm256_setzero_pd()),v205,d205(_mm256_setzero_pd()),v206,d206(_mm256_setzero_pd()),v207,d207(_mm256_setzero_pd()),v208,d208(_mm256_setzero_pd()),v209,d209(_mm256_setzero_pd()),v210,d210(_mm256_setzero_pd()),v211,d211(_mm256_setzero_pd()),v212,d212(_mm256_setzero_pd()),v213,d213(_mm256_setzero_pd()),v214,d214(_mm256_setzero_pd()),v215,d215(_mm256_setzero_pd()),v216,d216(_mm256_setzero_pd()),v217,d217(_mm256_setzero_pd()),v218,d218(_mm256_setzero_pd()),v219,d219(_mm256_setzero_pd()),v220,d220(_mm256_setzero_pd()),v221,d221(_mm256_setzero_pd()),v222,d222(_mm256_setzero_pd()),v223,d223(_mm256_setzero_pd()),v224,d224(_mm256_setzero_pd()),v225,d225(_mm256_setzero_pd()),v226,d226(_mm256_setzero_pd()),v227,d227(_mm256_setzero_pd()),v228,d228(_mm256_setzero_pd()),v229,d229(_mm256_setzero_pd()),v230,d230(_mm256_setzero_pd()),v231,d231(_mm256_setzero_pd()),v232,d232(_mm256_setzero_pd()),v233,d233(_mm256_setzero_pd()),v234,d234(_mm256_setzero_pd()),v235,d235(_mm256_setzero_pd()),v236,d236(_mm256_setzero_pd()),v237,d237(_mm256_setzero_pd()),v238,d238(_mm256_setzero_pd()),v239,d239(_mm256_setzero_pd()),v240,d240(_mm256_setzero_pd()),v241,d241(_mm256_setzero_pd()),v242,d242(_mm256_setzero_pd()),v243,d243(_mm256_setzero_pd()),v244,d244(_mm256_setzero_pd()),v245,d245(_mm256_setzero_pd()),v246,d246(_mm256_setzero_pd()),v247,d247(_mm256_setzero_pd()),v248,d248(_mm256_setzero_pd()),v249,d249(_mm256_setzero_pd()),v250,d250(_mm256_setzero_pd()),v251,d251(_mm256_setzero_pd()),v252,d252(_mm256_setzero_pd()),v253,d253(_mm256_setzero_pd()),v254,d254(_mm256_setzero_pd()),v255,d255(_mm256_setzero_pd()),v256,d256(_mm256_setzero_pd()),v257,d257(_mm256_setzero_pd()),v258,d258(_mm256_setzero_pd()),v259,d259(_mm256_setzero_pd()),v260,d260(_mm256_setzero_pd()),v261,d261(_mm256_setzero_pd()),v262,d262(_mm256_setzero_pd()),v263,d263(_mm256_setzero_pd()),v264,d264(_mm256_setzero_pd()),v265,d265(_mm256_setzero_pd()),v266,d266(_mm256_setzero_pd()),v267,d267(_mm256_setzero_pd()),v268,d268(_mm256_setzero_pd()),v269,d269(_mm256_setzero_pd()),v270,d270(_mm256_setzero_pd()),v271,d271(_mm256_setzero_pd()),v272,d272(_mm256_setzero_pd()),v273,d273(_mm256_setzero_pd()),v274,d274(_mm256_setzero_pd()),v275,d275(_mm256_setzero_pd()),v276,d276(_mm256_setzero_pd()),v277,d277(_mm256_setzero_pd()),v278,d278(_mm256_setzero_pd()),v279,d279(_mm256_setzero_pd()),v280,d280(_mm256_setzero_pd()),v281,d281(_mm256_setzero_pd()),v282,d282(_mm256_setzero_pd()),v283,d283(_mm256_setzero_pd()),v284,d284(_mm256_setzero_pd()),v285,d285(_mm256_setzero_pd()),v286,d286(_mm256_setzero_pd()),v287,d287(_mm256_setzero_pd()),v288,d288(_mm256_setzero_pd()),v289,d289(_mm256_setzero_pd()),v290,d290(_mm256_setzero_pd()),v291,d291(_mm256_setzero_pd()),v292,d292(_mm256_setzero_pd()),v293,d293(_mm256_setzero_pd()),v294,d294(_mm256_setzero_pd()),v295,d295(_mm256_setzero_pd()),v296,d296(_mm256_setzero_pd()),v297,d297(_mm256_setzero_pd()),v298,d298(_mm256_setzero_pd()),v299,d299(_mm256_setzero_pd()),v300,d300(_mm256_setzero_pd()),v301,d301(_mm256_setzero_pd()),v302,d302(_mm256_setzero_pd()),v303,d303(_mm256_setzero_pd()),v304,d304(_mm256_setzero_pd()),v305,d305(_mm256_setzero_pd()),v306,d306(_mm256_setzero_pd()),v307,d307(_mm256_setzero_pd()),v308,d308(_mm256_setzero_pd()),v309,d309(_mm256_setzero_pd()),v310,d310(_mm256_setzero_pd()),v311,d311(_mm256_setzero_pd()),v312,d312(_mm256_setzero_pd()),v313,d313(_mm256_setzero_pd()),v314,d314(_mm256_setzero_pd()),v315,d315(_mm256_setzero_pd()),v316,d316(_mm256_setzero_pd()),v317,d317(_mm256_setzero_pd()),v318,d318(_mm256_setzero_pd()),v319,d319(_mm256_setzero_pd()),v320,d320(_mm256_setzero_pd()),v321,d321(_mm256_setzero_pd()),v322,d322(_mm256_setzero_pd()),v323,d323(_mm256_setzero_pd()),v324,d324(_mm256_setzero_pd()),v325,d325(_mm256_setzero_pd()),v326,d326(_mm256_setzero_pd()),v327,d327(_mm256_setzero_pd()),v328,d328(_mm256_setzero_pd()),v329,d329(_mm256_setzero_pd()),v330,d330(_mm256_setzero_pd()),v331,d331(_mm256_setzero_pd()),v332,d332(_mm256_setzero_pd()),v333,d333(_mm256_setzero_pd()),v334,d334(_mm256_setzero_pd()),v335,d335(_mm256_setzero_pd()),v336,d336(_mm256_setzero_pd()),v337,d337(_mm256_setzero_pd()),v338,d338(_mm256_setzero_pd()),v339,d339(_mm256_setzero_pd()),v340,d340(_mm256_setzero_pd()),v341,d341(_mm256_setzero_pd()),v342,d342(_mm256_setzero_pd()),v343,d343(_mm256_setzero_pd()),v344,d344(_mm256_setzero_pd()),v345,d345(_mm256_setzero_pd()),v346,d346(_mm256_setzero_pd()),v347,d347(_mm256_setzero_pd()),v348,d348(_mm256_setzero_pd()),v349,d349(_mm256_setzero_pd()),v350,d350(_mm256_setzero_pd()),v351,d351(_mm256_setzero_pd()),v352,d352(_mm256_setzero_pd()),v353,d353(_mm256_setzero_pd()),v354,d354(_mm256_setzero_pd()),v355,d355(_mm256_setzero_pd()),v356,d356(_mm256_setzero_pd()),v357,d357(_mm256_setzero_pd()),v358,d358(_mm256_setzero_pd()),v359,d359(_mm256_setzero_pd()),v360,d360(_mm256_setzero_pd()),v361,d361(_mm256_setzero_pd()),v362,d362(_mm256_setzero_pd()),v363,d363(_mm256_setzero_pd()),v364,d364(_mm256_setzero_pd()),v365,d365(_mm256_setzero_pd()),v366,d366(_mm256_setzero_pd()),v367,d367(_mm256_setzero_pd()),v368,d368(_mm256_setzero_pd()),v369,d369(_mm256_setzero_pd()),v370,d370(_mm256_setzero_pd()),v371,d371(_mm256_setzero_pd()),v372,d372(_mm256_setzero_pd()),v373,d373(_mm256_setzero_pd()),v374,d374(_mm256_setzero_pd()),v375,d375(_mm256_setzero_pd()),v376,d376(_mm256_setzero_pd()),v377,d377(_mm256_setzero_pd()),v378,d378(_mm256_setzero_pd()),v379,d379(_mm256_setzero_pd()),v380,d380(_mm256_setzero_pd()),v381,d381(_mm256_setzero_pd()),v382,d382(_mm256_setzero_pd()),v383,d383(_mm256_setzero_pd()),v384,d384(_mm256_setzero_pd()),v385,d385(_mm256_setzero_pd()),v386,d386(_mm256_setzero_pd()),v387,d387(_mm256_setzero_pd()),v388,d388(_mm256_setzero_pd()),v389,d389(_mm256_setzero_pd()),v390,d390(_mm256_setzero_pd()),v391,d391(_mm256_setzero_pd()),v392,d392(_mm256_setzero_pd()),v393,d393(_mm256_setzero_pd()),v394,d394(_mm256_setzero_pd()),v395,d395(_mm256_setzero_pd()),v396,d396(_mm256_setzero_pd()),v397,d397(_mm256_setzero_pd()),v398,d398(_mm256_setzero_pd()),v399,d399(_mm256_setzero_pd()),v400,d400(_mm256_setzero_pd()),v401,d401(_mm256_setzero_pd()),v402,d402(_mm256_setzero_pd()),v403,d403(_mm256_setzero_pd()),v404,d404(_mm256_setzero_pd()),v405,d405(_mm256_setzero_pd()),v406,d406(_mm256_setzero_pd()),v407,d407(_mm256_setzero_pd()),v408,d408(_mm256_setzero_pd()),v409,d409(_mm256_setzero_pd()),v410,d410(_mm256_setzero_pd()),v411,d411(_mm256_setzero_pd()),v412,d412(_mm256_setzero_pd()),v413,d413(_mm256_setzero_pd()),v414,d414(_mm256_setzero_pd()),v415,d415(_mm256_setzero_pd()),v416,d416(_mm256_setzero_pd()),v417,d417(_mm256_setzero_pd()),v418,d418(_mm256_setzero_pd()),v419,d419(_mm256_setzero_pd()),v420,d420(_mm256_setzero_pd()),v421,d421(_mm256_setzero_pd()),v422,d422(_mm256_setzero_pd()),v423,d423(_mm256_setzero_pd()),v424,d424(_mm256_setzero_pd()),v425,d425(_mm256_setzero_pd()),v426,d426(_mm256_setzero_pd()),v427,d427(_mm256_setzero_pd()),v428,d428(_mm256_setzero_pd()),v429,d429(_mm256_setzero_pd()),v430,d430(_mm256_setzero_pd()),v431,d431(_mm256_setzero_pd()),v432,d432(_mm256_setzero_pd()),v433,d433(_mm256_setzero_pd()),v434,d434(_mm256_setzero_pd()),v435,d435(_mm256_setzero_pd()),v436,d436(_mm256_setzero_pd()),v437,d437(_mm256_setzero_pd()),v438,d438(_mm256_setzero_pd()),v439,d439(_mm256_setzero_pd()),v440,d440(_mm256_setzero_pd()),v441,d441(_mm256_setzero_pd()),v442,d442(_mm256_setzero_pd()),v443,d443(_mm256_setzero_pd()),v444,d444(_mm256_setzero_pd()),v445,d445(_mm256_setzero_pd()),v446,d446(_mm256_setzero_pd()),v447,d447(_mm256_setzero_pd()),v448,d448(_mm256_setzero_pd()),v449,d449(_mm256_setzero_pd()),v450,d450(_mm256_setzero_pd()),v451,d451(_mm256_setzero_pd()),v452,d452(_mm256_setzero_pd()),v453,d453(_mm256_setzero_pd()),v454,d454(_mm256_setzero_pd()),v455,d455(_mm256_setzero_pd()),v456,d456(_mm256_setzero_pd()),v457,d457(_mm256_setzero_pd()),v458,d458(_mm256_setzero_pd()),v459,d459(_mm256_setzero_pd()),v460,d460(_mm256_setzero_pd()),v461,d461(_mm256_setzero_pd()),v462,d462(_mm256_setzero_pd()),v463,d463(_mm256_setzero_pd()),v464,d464(_mm256_setzero_pd()),v465,d465(_mm256_setzero_pd()),v466,d466(_mm256_setzero_pd()),v467,d467(_mm256_setzero_pd()),v468,d468(_mm256_setzero_pd()),v469,d469(_mm256_setzero_pd()),v470,d470(_mm256_setzero_pd()),v471,d471(_mm256_setzero_pd()),v472,d472(_mm256_setzero_pd()),v473,d473(_mm256_setzero_pd()),v474,d474(_mm256_setzero_pd()),v475,d475(_mm256_setzero_pd()),v476,d476(_mm256_setzero_pd()),v477,d477(_mm256_setzero_pd()),v478,d478(_mm256_setzero_pd()),v479,d479(_mm256_setzero_pd()),v480,d480(_mm256_setzero_pd()),v481,d481(_mm256_setzero_pd()),v482,d482(_mm256_setzero_pd()),v483,d483(_mm256_setzero_pd()),v484,d484(_mm256_setzero_pd()),v485,d485(_mm256_setzero_pd()),v486,d486(_mm256_setzero_pd()),v487,d487(_mm256_setzero_pd()),v488,d488(_mm256_setzero_pd()),v489,d489(_mm256_setzero_pd()),v490,d490(_mm256_setzero_pd()),v491,d491(_mm256_setzero_pd()),v492,d492(_mm256_setzero_pd()),v493,d493(_mm256_setzero_pd()),v494,d494(_mm256_setzero_pd()),v495,d495(_mm256_setzero_pd()),v496,d496(_mm256_setzero_pd()),v497,d497(_mm256_setzero_pd()),v498,d498(_mm256_setzero_pd()),v499,d499(_mm256_setzero_pd()),v500,d500(_mm256_setzero_pd()),v501,d501(_mm256_setzero_pd()),v502,d502(_mm256_setzero_pd()),v503,d503(_mm256_setzero_pd()),v504,d504(_mm256_setzero_pd()),v505,d505(_mm256_setzero_pd()),v506,d506(_mm256_setzero_pd()),v507,d507(_mm256_setzero_pd()),v508,d508(_mm256_setzero_pd()),v509,d509(_mm256_setzero_pd()),v510,d510(_mm256_setzero_pd()),v511,d511(_mm256_setzero_pd()),v512,d512(_mm256_setzero_pd()),v513,d513(_mm256_setzero_pd()),v514,d514(_mm256_setzero_pd()),v515,d515(_mm256_setzero_pd()),v516,d516(_mm256_setzero_pd()),v517,d517(_mm256_setzero_pd()),v518,d518(_mm256_setzero_pd()),v519,d519(_mm256_setzero_pd()),v520,d520(_mm256_setzero_pd()),v521,d521(_mm256_setzero_pd()),v522,d522(_mm256_setzero_pd()),v523,d523(_mm256_setzero_pd()),v524,d524(_mm256_setzero_pd()),v525,d525(_mm256_setzero_pd()),v526,d526(_mm256_setzero_pd()),v527,d527(_mm256_setzero_pd()),v528,d528(_mm256_setzero_pd()),v529,d529(_mm256_setzero_pd()),v530,d530(_mm256_setzero_pd()),v531,d531(_mm256_setzero_pd()),v532,d532(_mm256_setzero_pd()),v533,d533(_mm256_setzero_pd()),v534,d534(_mm256_setzero_pd()),v535,d535(_mm256_setzero_pd()),v536,d536(_mm256_setzero_pd()),v537,d537(_mm256_setzero_pd()),v538,d538(_mm256_setzero_pd()),v539,d539(_mm256_setzero_pd()),v540,d540(_mm256_setzero_pd()),v541,d541(_mm256_setzero_pd()),v542,d542(_mm256_setzero_pd()),v543,d543(_mm256_setzero_pd()),v544,d544(_mm256_setzero_pd()),v545,d545(_mm256_setzero_pd()),v546,d546(_mm256_setzero_pd()),v547,d547(_mm256_setzero_pd()),v548,d548(_mm256_setzero_pd()),v549,d549(_mm256_setzero_pd()),v550,d550(_mm256_setzero_pd()),v551,d551(_mm256_setzero_pd()),v552,d552(_mm256_setzero_pd()),v553,d553(_mm256_setzero_pd()),v554,d554(_mm256_setzero_pd()),v555,d555(_mm256_setzero_pd()),v556,d556(_mm256_setzero_pd()),v557,d557(_mm256_setzero_pd()),v558,d558(_mm256_setzero_pd()),v559,d559(_mm256_setzero_pd()),v560,d560(_mm256_setzero_pd()),v561,d561(_mm256_setzero_pd()),v562,d562(_mm256_setzero_pd()),v563,d563(_mm256_setzero_pd()),v564,d564(_mm256_setzero_pd()),v565,d565(_mm256_setzero_pd()),v566,d566(_mm256_setzero_pd()),v567,d567(_mm256_setzero_pd()),v568,d568(_mm256_setzero_pd()),v569,d569(_mm256_setzero_pd()),v570,d570(_mm256_setzero_pd()),v571,d571(_mm256_setzero_pd()),v572,d572(_mm256_setzero_pd()),v573,d573(_mm256_setzero_pd()),v574,d574(_mm256_setzero_pd()),v575,d575(_mm256_setzero_pd()),v576,d576(_mm256_setzero_pd()),v577,d577(_mm256_setzero_pd()),v578,d578(_mm256_setzero_pd()),v579,d579(_mm256_setzero_pd()),v580,d580(_mm256_setzero_pd()),v581,d581(_mm256_setzero_pd()),v582,d582(_mm256_setzero_pd()),v583,d583(_mm256_setzero_pd()),v584,d584(_mm256_setzero_pd()),v585,d585(_mm256_setzero_pd()),v586,d586(_mm256_setzero_pd()),v587,d587(_mm256_setzero_pd()),v588,d588(_mm256_setzero_pd()),v589,d589(_mm256_setzero_pd()),v590,d590(_mm256_setzero_pd()),v591,d591(_mm256_setzero_pd()),v592,d592(_mm256_setzero_pd()),v593,d593(_mm256_setzero_pd()),v594,d594(_mm256_setzero_pd()),v595,d595(_mm256_setzero_pd()),v596,d596(_mm256_setzero_pd()),v597,d597(_mm256_setzero_pd()),v598,d598(_mm256_setzero_pd()),v599,d599(_mm256_setzero_pd()),v600,d600(_mm256_setzero_pd()),v601,d601(_mm256_setzero_pd()),v602,d602(_mm256_setzero_pd()),v603,d603(_mm256_setzero_pd()),v604,d604(_mm256_setzero_pd()),v605,d605(_mm256_setzero_pd()),v606,d606(_mm256_setzero_pd()),v607,d607(_mm256_setzero_pd()),v608,d608(_mm256_setzero_pd()),v609,d609(_mm256_setzero_pd()),v610,d610(_mm256_setzero_pd()),v611,d611(_mm256_setzero_pd()),v612,d612(_mm256_setzero_pd()),v613,d613(_mm256_setzero_pd()),v614,d614(_mm256_setzero_pd()),v615,d615(_mm256_setzero_pd()),v616,d616(_mm256_setzero_pd()),v617,d617(_mm256_setzero_pd()),v618,d618(_mm256_setzero_pd()),v619,d619(_mm256_setzero_pd()),v620,d620(_mm256_setzero_pd()),v621,d621(_mm256_setzero_pd()),v622,d622(_mm256_setzero_pd()),v623,d623(_mm256_setzero_pd()),v624,d624(_mm256_setzero_pd()),v625,d625(_mm256_setzero_pd()),v626,d626(_mm256_setzero_pd()),v627,d627(_mm256_setzero_pd()),v628,d628(_mm256_setzero_pd()),v629,d629(_mm256_setzero_pd()),v630,d630(_mm256_setzero_pd()),v631,d631(_mm256_setzero_pd()),v632,d632(_mm256_setzero_pd()),v633,d633(_mm256_setzero_pd()),v634,d634(_mm256_setzero_pd()),v635,d635(_mm256_setzero_pd()),v636,d636(_mm256_setzero_pd()),v637,d637(_mm256_setzero_pd()),v638,d638(_mm256_setzero_pd()),v639,d639(_mm256_setzero_pd()),v640,d640(_mm256_setzero_pd()),v641,d641(_mm256_setzero_pd()),v642,d642(_mm256_setzero_pd()),v643,d643(_mm256_setzero_pd()),v644,d644(_mm256_setzero_pd()),v645,d645(_mm256_setzero_pd()),v646,d646(_mm256_setzero_pd()),v647,d647(_mm256_setzero_pd()),v648,d648(_mm256_setzero_pd()),v649,d649(_mm256_setzero_pd()),v650,d650(_mm256_setzero_pd()),v651,d651(_mm256_setzero_pd()),v652,d652(_mm256_setzero_pd()),v653,d653(_mm256_setzero_pd()),v654,d654(_mm256_setzero_pd()),v655,d655(_mm256_setzero_pd()),v656,d656(_mm256_setzero_pd()),v657,d657(_mm256_setzero_pd()),v658,d658(_mm256_setzero_pd()),v659,d659(_mm256_setzero_pd()),v660,d660(_mm256_setzero_pd()),v661,d661(_mm256_setzero_pd()),v662,d662(_mm256_setzero_pd()),v663,d663(_mm256_setzero_pd()),v664,d664(_mm256_setzero_pd()),v665,d665(_mm256_setzero_pd()),v666,d666(_mm256_setzero_pd()),v667,d667(_mm256_setzero_pd()),v668,d668(_mm256_setzero_pd()),v669,d669(_mm256_setzero_pd()),v670,d670(_mm256_setzero_pd()),v671,d671(_mm256_setzero_pd()),v672,d672(_mm256_setzero_pd()),v673,d673(_mm256_setzero_pd()),v674,d674(_mm256_setzero_pd()),v675,d675(_mm256_setzero_pd()),v676,d676(_mm256_setzero_pd()),v677,d677(_mm256_setzero_pd()),v678,d678(_mm256_setzero_pd()),v679,d679(_mm256_setzero_pd()),v680,d680(_mm256_setzero_pd()),v681,d681(_mm256_setzero_pd()),v682,d682(_mm256_setzero_pd()),v683,d683(_mm256_setzero_pd()),v684,d684(_mm256_setzero_pd()),v685,d685(_mm256_setzero_pd()),v686,d686(_mm256_setzero_pd()),v687,d687(_mm256_setzero_pd()),v688,d688(_mm256_setzero_pd()),v689,d689(_mm256_setzero_pd()),v690,d690(_mm256_setzero_pd()),v691,d691(_mm256_setzero_pd()),v692,d692(_mm256_setzero_pd()),v693,d693(_mm256_setzero_pd()),v694,d694(_mm256_setzero_pd()),v695,d695(_mm256_setzero_pd()),v696,d696(_mm256_setzero_pd()),v697,d697(_mm256_setzero_pd()),v698,d698(_mm256_setzero_pd()),v699,d699(_mm256_setzero_pd()),v700,d700(_mm256_setzero_pd()),v701,d701(_mm256_setzero_pd()),v702,d702(_mm256_setzero_pd()),v703,d703(_mm256_setzero_pd()),v704,d704(_mm256_setzero_pd()),v705,d705(_mm256_setzero_pd()),v706,d706(_mm256_setzero_pd()),v707,d707(_mm256_setzero_pd()),v708,d708(_mm256_setzero_pd()),v709,d709(_mm256_setzero_pd()),v710,d710(_mm256_setzero_pd()),v711,d711(_mm256_setzero_pd()),v712,d712(_mm256_setzero_pd()),v713,d713(_mm256_setzero_pd()),v714,d714(_mm256_setzero_pd()),v715,d715(_mm256_setzero_pd()),v716,d716(_mm256_setzero_pd()),v717,d717(_mm256_setzero_pd()),v718,d718(_mm256_setzero_pd()),v719,d719(_mm256_setzero_pd()),v720,d720(_mm256_setzero_pd()),v721,d721(_mm256_setzero_pd()),v722,d722(_mm256_setzero_pd()),v723,d723(_mm256_setzero_pd()),v724,d724(_mm256_setzero_pd()),v725,d725(_mm256_setzero_pd()),v726,d726(_mm256_setzero_pd()),v727,d727(_mm256_setzero_pd()),v728,d728(_mm256_setzero_pd()),v729,d729(_mm256_setzero_pd()),v730,d730(_mm256_setzero_pd()),v731,d731(_mm256_setzero_pd()),v732,d732(_mm256_setzero_pd()),v733,d733(_mm256_setzero_pd()),v734,d734(_mm256_setzero_pd()),v735,d735(_mm256_setzero_pd()),v736,d736(_mm256_setzero_pd()),v737,d737(_mm256_setzero_pd()),v738,d738(_mm256_setzero_pd()),v739,d739(_mm256_setzero_pd()),v740,d740(_mm256_setzero_pd()),v741,d741(_mm256_setzero_pd()),v742,d742(_mm256_setzero_pd()),v743,d743(_mm256_setzero_pd()),v744,d744(_mm256_setzero_pd()),v745,d745(_mm256_setzero_pd()),v746,d746(_mm256_setzero_pd()),v747,d747(_mm256_setzero_pd()),v748,d748(_mm256_setzero_pd()),v749,d749(_mm256_setzero_pd()),v750,d750(_mm256_setzero_pd()),v751,d751(_mm256_setzero_pd()),v752,d752(_mm256_setzero_pd()),v753,d753(_mm256_setzero_pd()),v754,d754(_mm256_setzero_pd()),v755,d755(_mm256_setzero_pd()),v756,d756(_mm256_setzero_pd()),v757,d757(_mm256_setzero_pd()),v758,d758(_mm256_setzero_pd()),v759,d759(_mm256_setzero_pd()),v760,d760(_mm256_setzero_pd()),v761,d761(_mm256_setzero_pd()),v762,d762(_mm256_setzero_pd()),v763,d763(_mm256_setzero_pd()),v764,d764(_mm256_setzero_pd()),v765,d765(_mm256_setzero_pd()),v766,d766(_mm256_setzero_pd()),v767,d767(_mm256_setzero_pd()),v768,d768(_mm256_setzero_pd()),v769,d769(_mm256_setzero_pd()),v770,d770(_mm256_setzero_pd()),v771,d771(_mm256_setzero_pd()),v772,d772(_mm256_setzero_pd()),v773,d773(_mm256_setzero_pd()),v774,d774(_mm256_setzero_pd()),v775,d775(_mm256_setzero_pd()),v776,d776(_mm256_setzero_pd()),v777,d777(_mm256_setzero_pd()),v778,d778(_mm256_setzero_pd()),v779,d779(_mm256_setzero_pd()),v780,d780(_mm256_setzero_pd()),v781,d781(_mm256_setzero_pd()),v782,d782(_mm256_setzero_pd()),v783,d783(_mm256_setzero_pd()),v784,d784(_mm256_setzero_pd()),v785,d785(_mm256_setzero_pd()),v786,d786(_mm256_setzero_pd()),v787,d787(_mm256_setzero_pd()),v788,d788(_mm256_setzero_pd()),v789,d789(_mm256_setzero_pd()),v790,d790(_mm256_setzero_pd()),v791,d791(_mm256_setzero_pd()),v792,d792(_mm256_setzero_pd()),v793,d793(_mm256_setzero_pd()),v794,d794(_mm256_setzero_pd()),v795,d795(_mm256_setzero_pd()),v796,d796(_mm256_setzero_pd()),v797,d797(_mm256_setzero_pd()),v798,d798(_mm256_setzero_pd()),v799,d799(_mm256_setzero_pd()),v800,d800(_mm256_setzero_pd()),v801,d801(_mm256_setzero_pd()),v802,d802(_mm256_setzero_pd()),v803,d803(_mm256_setzero_pd()),v804,d804(_mm256_setzero_pd()),v805,d805(_mm256_setzero_pd()),v806,d806(_mm256_setzero_pd()),v807,d807(_mm256_setzero_pd()),v808,d808(_mm256_setzero_pd()),v809,d809(_mm256_setzero_pd()),v810,d810(_mm256_setzero_pd()),v811,d811(_mm256_setzero_pd()),v812,d812(_mm256_setzero_pd()),v813,d813(_mm256_setzero_pd()),v814,d814(_mm256_setzero_pd()),v815,d815(_mm256_setzero_pd()),v816,d816(_mm256_setzero_pd()),v817,d817(_mm256_setzero_pd()),v818,d818(_mm256_setzero_pd()),v819,d819(_mm256_setzero_pd()),v820,d820(_mm256_setzero_pd()),v821,d821(_mm256_setzero_pd()),v822,d822(_mm256_setzero_pd()),v823,d823(_mm256_setzero_pd()),v824,d824(_mm256_setzero_pd()),v825,d825(_mm256_setzero_pd()),v826,d826(_mm256_setzero_pd()),v827,d827(_mm256_setzero_pd()),v828,d828(_mm256_setzero_pd()),v829,d829(_mm256_setzero_pd()),v830,d830(_mm256_setzero_pd()),v831,d831(_mm256_setzero_pd()),v832,d832(_mm256_setzero_pd()),v833,d833(_mm256_setzero_pd()),v834,d834(_mm256_setzero_pd()),v835,d835(_mm256_setzero_pd()),v836,d836(_mm256_setzero_pd()),v837,d837(_mm256_setzero_pd()),v838,d838(_mm256_setzero_pd()),v839,d839(_mm256_setzero_pd()),v840,d840(_mm256_setzero_pd()),v841,d841(_mm256_setzero_pd()),v842,d842(_mm256_setzero_pd()),v843,d843(_mm256_setzero_pd()),v844,d844(_mm256_setzero_pd()),v845,d845(_mm256_setzero_pd()),v846,d846(_mm256_setzero_pd()),v847,d847(_mm256_setzero_pd()),v848,d848(_mm256_setzero_pd()),v849,d849(_mm256_setzero_pd()),v850,d850(_mm256_setzero_pd()),v851,d851(_mm256_setzero_pd()),v852,d852(_mm256_setzero_pd()),v853,d853(_mm256_setzero_pd()),v854,d854(_mm256_setzero_pd()),v855,d855(_mm256_setzero_pd()),v856,d856(_mm256_setzero_pd()),v857,d857(_mm256_setzero_pd()),v858,d858(_mm256_setzero_pd()),v859,d859(_mm256_setzero_pd()),v860,d860(_mm256_setzero_pd()),v861,d861(_mm256_setzero_pd()),v862,d862(_mm256_setzero_pd()),v863,d863(_mm256_setzero_pd()),v864,d864(_mm256_setzero_pd()),v865,d865(_mm256_setzero_pd()),v866,d866(_mm256_setzero_pd()),v867,d867(_mm256_setzero_pd()),v868,d868(_mm256_setzero_pd()),v869,d869(_mm256_setzero_pd()),v870,d870(_mm256_setzero_pd()),v871,d871(_mm256_setzero_pd()),v872,d872(_mm256_setzero_pd()),v873,d873(_mm256_setzero_pd()),v874,d874(_mm256_setzero_pd()),v875,d875(_mm256_setzero_pd()),v876,d876(_mm256_setzero_pd()),v877,d877(_mm256_setzero_pd()),v878,d878(_mm256_setzero_pd()),v879,d879(_mm256_setzero_pd()),v880,d880(_mm256_setzero_pd()),v881,d881(_mm256_setzero_pd()),v882,d882(_mm256_setzero_pd()),v883,d883(_mm256_setzero_pd()),v884,d884(_mm256_setzero_pd()),v885,d885(_mm256_setzero_pd()),v886,d886(_mm256_setzero_pd()),v887,d887(_mm256_setzero_pd()),v888,d888(_mm256_setzero_pd()),v889,d889(_mm256_setzero_pd()),v890,d890(_mm256_setzero_pd()),v891,d891(_mm256_setzero_pd()),v892,d892(_mm256_setzero_pd()),v893,d893(_mm256_setzero_pd()),v894,d894(_mm256_setzero_pd()),v895,d895(_mm256_setzero_pd()),v896,d896(_mm256_setzero_pd()),v897,d897(_mm256_setzero_pd()),v898,d898(_mm256_setzero_pd()),v899,d899(_mm256_setzero_pd()),v900,d900(_mm256_setzero_pd()),v901,d901(_mm256_setzero_pd()),v902,d902(_mm256_setzero_pd()),v903,d903(_mm256_setzero_pd()),v904,d904(_mm256_setzero_pd()),v905,d905(_mm256_setzero_pd()),v906,d906(_mm256_setzero_pd()),v907,d907(_mm256_setzero_pd()),v908,d908(_mm256_setzero_pd()),v909,d909(_mm256_setzero_pd()),v910,d910(_mm256_setzero_pd()),v911,d911(_mm256_setzero_pd()),v912,d912(_mm256_setzero_pd()),v913,d913(_mm256_setzero_pd()),v914,d914(_mm256_setzero_pd()),v915,d915(_mm256_setzero_pd()),v916,d916(_mm256_setzero_pd()),v917,d917(_mm256_setzero_pd()),v918,d918(_mm256_setzero_pd()),v919,d919(_mm256_setzero_pd()),v920,d920(_mm256_setzero_pd()),v921,d921(_mm256_setzero_pd()),v922,d922(_mm256_setzero_pd()),v923,d923(_mm256_setzero_pd()),v924,d924(_mm256_setzero_pd()),v925,d925(_mm256_setzero_pd()),v926,d926(_mm256_setzero_pd()),v927,d927(_mm256_setzero_pd()),v928,d928(_mm256_setzero_pd()),v929,d929(_mm256_setzero_pd()),v930,d930(_mm256_setzero_pd()),v931,d931(_mm256_setzero_pd()),v932,d932(_mm256_setzero_pd()),v933,d933(_mm256_setzero_pd()),v934,d934(_mm256_setzero_pd()),v935,d935(_mm256_setzero_pd()),v936,d936(_mm256_setzero_pd()),v937,d937(_mm256_setzero_pd()),v938,d938(_mm256_setzero_pd()),v939,d939(_mm256_setzero_pd()),v940,d940(_mm256_setzero_pd()),v941,d941(_mm256_setzero_pd()),v942,d942(_mm256_setzero_pd()),v943,d943(_mm256_setzero_pd()),v944,d944(_mm256_setzero_pd()),v945,d945(_mm256_setzero_pd()),v946,d946(_mm256_setzero_pd()),v947,d947(_mm256_setzero_pd()),v948,d948(_mm256_setzero_pd()),v949,d949(_mm256_setzero_pd()),v950,d950(_mm256_setzero_pd()),v951,d951(_mm256_setzero_pd()),v952,d952(_mm256_setzero_pd()),v953,d953(_mm256_setzero_pd()),v954,d954(_mm256_setzero_pd()),v955,d955(_mm256_setzero_pd()),v956,d956(_mm256_setzero_pd()),v957,d957(_mm256_setzero_pd()),v958,d958(_mm256_setzero_pd()),v959,d959(_mm256_setzero_pd()),v960,d960(_mm256_setzero_pd()),v961,d961(_mm256_setzero_pd()),v962,d962(_mm256_setzero_pd()),v963,d963(_mm256_setzero_pd()),v964,d964(_mm256_setzero_pd()),v965,d965(_mm256_setzero_pd()),v966,d966(_mm256_setzero_pd()),v967,d967(_mm256_setzero_pd()),v968,d968(_mm256_setzero_pd()),v969,d969(_mm256_setzero_pd()),v970,d970(_mm256_setzero_pd()),v971,d971(_mm256_setzero_pd()),v972,d972(_mm256_setzero_pd()),v973,d973(_mm256_setzero_pd()),v974,d974(_mm256_setzero_pd()),v975,d975(_mm256_setzero_pd()),v976,d976(_mm256_setzero_pd()),v977,d977(_mm256_setzero_pd()),v978,d978(_mm256_setzero_pd()),v979,d979(_mm256_setzero_pd()),v980,d980(_mm256_setzero_pd()),v981,d981(_mm256_setzero_pd()),v982,d982(_mm256_setzero_pd()),v983,d983(_mm256_setzero_pd()),v984,d984(_mm256_setzero_pd()),v985,d985(_mm256_setzero_pd()),v986,d986(_mm256_setzero_pd()),v987,d987(_mm256_setzero_pd()),v988,d988(_mm256_setzero_pd()),v989,d989(_mm256_setzero_pd()),v990,d990(_mm256_setzero_pd()),v991,d991(_mm256_setzero_pd()),v992,d992(_mm256_setzero_pd()),v993,d993(_mm256_setzero_pd()),v994,d994(_mm256_setzero_pd()),v995,d995(_mm256_setzero_pd()),v996,d996(_mm256_setzero_pd()),v997,d997(_mm256_setzero_pd()),v998,d998(_mm256_setzero_pd()),v999,d999(_mm256_setzero_pd()),v1000,d1000(_mm256_setzero_pd()),v1001,d1001(_mm256_setzero_pd()),v1002,d1002(_mm256_setzero_pd()),v1003,d1003(_mm256_setzero_pd()),v1004,d1004(_mm256_setzero_pd()),v1005,d1005(_mm256_setzero_pd()),v1006,d1006(_mm256_setzero_pd()),v1007,d1007(_mm256_setzero_pd()),v1008,d1008(_mm256_setzero_pd()),v1009,d1009(_mm256_setzero_pd()),v1010,d1010(_mm256_setzero_pd()),v1011,d1011(_mm256_setzero_pd()),v1012,d1012(_mm256_setzero_pd()),v1013,d1013(_mm256_setzero_pd()),v1014,d1014(_mm256_setzero_pd()),v1015,d1015(_mm256_setzero_pd()),v1016,d1016(_mm256_setzero_pd()),v1017,d1017(_mm256_setzero_pd()),v1018,d1018(_mm256_setzero_pd()),v1019,d1019(_mm256_setzero_pd()),v1020,d1020(_mm256_setzero_pd()),v1021,d1021(_mm256_setzero_pd()),v1022,d1022(_mm256_setzero_pd()),v1023,d1023(_mm256_setzero_pd()),v1024,d1024(_mm256_setzero_pd()),v1025,d1025(_mm256_setzero_pd()),v1026,d1026(_mm256_setzero_pd()),v1027,d1027(_mm256_setzero_pd()),v1028,d1028(_mm256_setzero_pd()),v1029,d1029(_mm256_setzero_pd()),v1030,d1030(_mm256_setzero_pd()),v1031,d1031(_mm256_setzero_pd()),v1032,d1032(_mm256_setzero_pd()),v1033,d1033(_mm256_setzero_pd()),v1034,d1034(_mm256_setzero_pd()),v1035,d1035(_mm256_setzero_pd()),v1036,d1036(_mm256_setzero_pd()),v1037,d1037(_mm256_setzero_pd()),v1038,d1038(_mm256_setzero_pd()),v1039,d1039(_mm256_setzero_pd()),v1040,d1040(_mm256_setzero_pd()),v1041,d1041(_mm256_setzero_pd()),v1042,d1042(_mm256_setzero_pd()),v1043,d1043(_mm256_setzero_pd()),v1044,d1044(_mm256_setzero_pd()),v1045,d1045(_mm256_setzero_pd()),v1046,d1046(_mm256_setzero_pd()),v1047,d1047(_mm256_setzero_pd()),v1048,d1048(_mm256_setzero_pd()),v1049,d1049(_mm256_setzero_pd()),v1050,d1050(_mm256_setzero_pd()),v1051,d1051(_mm256_setzero_pd()),v1052,d1052(_mm256_setzero_pd()),v1053,d1053(_mm256_setzero_pd()),v1054,d1054(_mm256_setzero_pd()),v1055,d1055(_mm256_setzero_pd()),v1056,d1056(_mm256_setzero_pd()),v1057,d1057(_mm256_setzero_pd()),v1058,d1058(_mm256_setzero_pd()),v1059,d1059(_mm256_setzero_pd()),v1060,d1060(_mm256_setzero_pd()),v1061,d1061(_mm256_setzero_pd()),v1062,d1062(_mm256_setzero_pd()),v1063,d1063(_mm256_setzero_pd()),v1064,d1064(_mm256_setzero_pd()),v1065,d1065(_mm256_setzero_pd()),v1066,d1066(_mm256_setzero_pd()),v1067,d1067(_mm256_setzero_pd()),v1068,d1068(_mm256_setzero_pd()),v1069,d1069(_mm256_setzero_pd()),v1070,d1070(_mm256_setzero_pd()),v1071,d1071(_mm256_setzero_pd()),v1072,d1072(_mm256_setzero_pd()),v1073,d1073(_mm256_setzero_pd()),v1074,d1074(_mm256_setzero_pd()),v1075,d1075(_mm256_setzero_pd()),v1076,d1076(_mm256_setzero_pd()),v1077,d1077(_mm256_setzero_pd()),v1078,d1078(_mm256_setzero_pd()),v1079,d1079(_mm256_setzero_pd()),v1080,d1080(_mm256_setzero_pd()),v1081,d1081(_mm256_setzero_pd()),v1082,d1082(_mm256_setzero_pd()),v1083,d1083(_mm256_setzero_pd()),v1084,d1084(_mm256_setzero_pd()),v1085,d1085(_mm256_setzero_pd()),v1086,d1086(_mm256_setzero_pd()),v1087,d1087(_mm256_setzero_pd()),v1088,d1088(_mm256_setzero_pd()),v1089,d1089(_mm256_setzero_pd()),v1090,d1090(_mm256_setzero_pd()),v1091,d1091(_mm256_setzero_pd()),v1092,d1092(_mm256_setzero_pd()),v1093,d1093(_mm256_setzero_pd()),v1094,d1094(_mm256_setzero_pd()),v1095,d1095(_mm256_setzero_pd()),v1096,d1096(_mm256_setzero_pd()),v1097,d1097(_mm256_setzero_pd()),v1098,d1098(_mm256_setzero_pd()),v1099,d1099(_mm256_setzero_pd()),v1100,d1100(_mm256_setzero_pd()),v1101,d1101(_mm256_setzero_pd()),v1102,d1102(_mm256_setzero_pd()),v1103,d1103(_mm256_setzero_pd()),v1104,d1104(_mm256_setzero_pd()),v1105,d1105(_mm256_setzero_pd()),v1106,d1106(_mm256_setzero_pd()),v1107,d1107(_mm256_setzero_pd()),v1108,d1108(_mm256_setzero_pd()),v1109,d1109(_mm256_setzero_pd()),v1110,d1110(_mm256_setzero_pd()),v1111,d1111(_mm256_setzero_pd()),v1112,d1112(_mm256_setzero_pd()),v1113,d1113(_mm256_setzero_pd()),v1114,d1114(_mm256_setzero_pd()),v1115,d1115(_mm256_setzero_pd()),v1116,d1116(_mm256_setzero_pd()),v1117,d1117(_mm256_setzero_pd()),v1118,d1118(_mm256_setzero_pd()),v1119,d1119(_mm256_setzero_pd()),v1120,d1120(_mm256_setzero_pd()),v1121,d1121(_mm256_setzero_pd()),v1122,d1122(_mm256_setzero_pd()),v1123,d1123(_mm256_setzero_pd()),v1124,d1124(_mm256_setzero_pd()),v1125,d1125(_mm256_setzero_pd()),v1126,d1126(_mm256_setzero_pd()),v1127,d1127(_mm256_setzero_pd()),v1128,d1128(_mm256_setzero_pd()),v1129,d1129(_mm256_setzero_pd()),v1130,d1130(_mm256_setzero_pd()),v1131,d1131(_mm256_setzero_pd()),v1132,d1132(_mm256_setzero_pd()),v1133,d1133(_mm256_setzero_pd()),v1134,d1134(_mm256_setzero_pd()),v1135,d1135(_mm256_setzero_pd()),v1136,d1136(_mm256_setzero_pd()),v1137,d1137(_mm256_setzero_pd()),v1138,d1138(_mm256_setzero_pd()),v1139,d1139(_mm256_setzero_pd()),v1140,d1140(_mm256_setzero_pd()),v1141,d1141(_mm256_setzero_pd()),v1142,d1142(_mm256_setzero_pd()),v1143,d1143(_mm256_setzero_pd()),v1144,d1144(_mm256_setzero_pd()),v1145,d1145(_mm256_setzero_pd()),v1146,d1146(_mm256_setzero_pd()),v1147,d1147(_mm256_setzero_pd()),v1148,d1148(_mm256_setzero_pd()),v1149,d1149(_mm256_setzero_pd()),v1150,d1150(_mm256_setzero_pd()),v1151,d1151(_mm256_setzero_pd()),v1152,d1152(_mm256_setzero_pd()),v1153,d1153(_mm256_setzero_pd()),v1154,d1154(_mm256_setzero_pd()),v1155,d1155(_mm256_setzero_pd()),v1156,d1156(_mm256_setzero_pd()),v1157,d1157(_mm256_setzero_pd()),v1158,d1158(_mm256_setzero_pd()),v1159,d1159(_mm256_setzero_pd()),v1160,d1160(_mm256_setzero_pd()),v1161,d1161(_mm256_setzero_pd()),v1162,d1162(_mm256_setzero_pd()),v1163,d1163(_mm256_setzero_pd()),v1164,d1164(_mm256_setzero_pd()),v1165,d1165(_mm256_setzero_pd()),v1166,d1166(_mm256_setzero_pd()),v1167,d1167(_mm256_setzero_pd()),v1168,d1168(_mm256_setzero_pd()),v1169,d1169(_mm256_setzero_pd()),v1170,d1170(_mm256_setzero_pd()),v1171,d1171(_mm256_setzero_pd()),v1172,d1172(_mm256_setzero_pd()),v1173,d1173(_mm256_setzero_pd()),v1174,d1174(_mm256_setzero_pd()),v1175,d1175(_mm256_setzero_pd()),v1176,d1176(_mm256_setzero_pd()),v1177,d1177(_mm256_setzero_pd()),v1178,d1178(_mm256_setzero_pd()),v1179,d1179(_mm256_setzero_pd()),v1180,d1180(_mm256_setzero_pd()),v1181,d1181(_mm256_setzero_pd()),v1182,d1182(_mm256_setzero_pd()),v1183,d1183(_mm256_setzero_pd()),v1184,d1184(_mm256_setzero_pd()),v1185,d1185(_mm256_setzero_pd()),v1186,d1186(_mm256_setzero_pd()),v1187,d1187(_mm256_setzero_pd()),v1188,d1188(_mm256_setzero_pd()),v1189,d1189(_mm256_setzero_pd()),v1190,d1190(_mm256_setzero_pd()),v1191,d1191(_mm256_setzero_pd()),v1192,d1192(_mm256_setzero_pd()),v1193,d1193(_mm256_setzero_pd()),v1194,d1194(_mm256_setzero_pd()),v1195,d1195(_mm256_setzero_pd()),v1196,d1196(_mm256_setzero_pd()),v1197,d1197(_mm256_setzero_pd()),v1198,d1198(_mm256_setzero_pd()),v1199,d1199(_mm256_setzero_pd()),v1200,d1200(_mm256_setzero_pd()),v1201,d1201(_mm256_setzero_pd()),v1202,d1202(_mm256_setzero_pd()),v1203,d1203(_mm256_setzero_pd()),v1204,d1204(_mm256_setzero_pd()),v1205,d1205(_mm256_setzero_pd()),v1206,d1206(_mm256_setzero_pd()),v1207,d1207(_mm256_setzero_pd()),v1208,d1208(_mm256_setzero_pd()),v1209,d1209(_mm256_setzero_pd()),v1210,d1210(_mm256_setzero_pd()),v1211,d1211(_mm256_setzero_pd()),v1212,d1212(_mm256_setzero_pd()),v1213,d1213(_mm256_setzero_pd()),v1214,d1214(_mm256_setzero_pd()),v1215,d1215(_mm256_setzero_pd()),v1216,d1216(_mm256_setzero_pd()),v1217,d1217(_mm256_setzero_pd()),v1218,d1218(_mm256_setzero_pd()),v1219,d1219(_mm256_setzero_pd()),v1220,d1220(_mm256_setzero_pd()),v1221,d1221(_mm256_setzero_pd()),v1222,d1222(_mm256_setzero_pd()),v1223,d1223(_mm256_setzero_pd()),v1224,d1224(_mm256_setzero_pd()),v1225,d1225(_mm256_setzero_pd()),v1226,d1226(_mm256_setzero_pd()),v1227,d1227(_mm256_setzero_pd()),v1228,d1228(_mm256_setzero_pd()),v1229,d1229(_mm256_setzero_pd()),v1230,d1230(_mm256_setzero_pd()),v1231,d1231(_mm256_setzero_pd()),v1232,d1232(_mm256_setzero_pd()),v1233,d1233(_mm256_setzero_pd()),v1234,d1234(_mm256_setzero_pd()),v1235,d1235(_mm256_setzero_pd()),v1236,d1236(_mm256_setzero_pd()),v1237,d1237(_mm256_setzero_pd()),v1238,d1238(_mm256_setzero_pd()),v1239,d1239(_mm256_setzero_pd()),v1240,d1240(_mm256_setzero_pd()),v1241,d1241(_mm256_setzero_pd()),v1242,d1242(_mm256_setzero_pd()),v1243,d1243(_mm256_setzero_pd()),v1244,d1244(_mm256_setzero_pd()),v1245,d1245(_mm256_setzero_pd()),v1246,d1246(_mm256_setzero_pd()),v1247,d1247(_mm256_setzero_pd()),v1248,d1248(_mm256_setzero_pd()),v1249,d1249(_mm256_setzero_pd()),v1250,d1250(_mm256_setzero_pd()),v1251,d1251(_mm256_setzero_pd()),v1252,d1252(_mm256_setzero_pd()),v1253,d1253(_mm256_setzero_pd()),v1254,d1254(_mm256_setzero_pd()),v1255,d1255(_mm256_setzero_pd()),v1256,d1256(_mm256_setzero_pd()),v1257,d1257(_mm256_setzero_pd()),v1258,d1258(_mm256_setzero_pd()),v1259,d1259(_mm256_setzero_pd()),v1260,d1260(_mm256_setzero_pd()),v1261,d1261(_mm256_setzero_pd()),v1262,d1262(_mm256_setzero_pd()),v1263,d1263(_mm256_setzero_pd()),v1264,d1264(_mm256_setzero_pd()),v1265,d1265(_mm256_setzero_pd()),v1266,d1266(_mm256_setzero_pd()),v1267,d1267(_mm256_setzero_pd()),v1268,d1268(_mm256_setzero_pd()),v1269,d1269(_mm256_setzero_pd()),v1270,d1270(_mm256_setzero_pd()),v1271,d1271(_mm256_setzero_pd()),v1272,d1272(_mm256_setzero_pd()),v1273,d1273(_mm256_setzero_pd()),v1274,d1274(_mm256_setzero_pd()),v1275,d1275(_mm256_setzero_pd()),v1276,d1276(_mm256_setzero_pd()),v1277,d1277(_mm256_setzero_pd()),v1278,d1278(_mm256_setzero_pd()),v1279,d1279(_mm256_setzero_pd()),v1280,d1280(_mm256_setzero_pd()),v1281,d1281(_mm256_setzero_pd()),v1282,d1282(_mm256_setzero_pd()),v1283,d1283(_mm256_setzero_pd()),v1284,d1284(_mm256_setzero_pd()),v1285,d1285(_mm256_setzero_pd()),v1286,d1286(_mm256_setzero_pd()),v1287,d1287(_mm256_setzero_pd()),v1288,d1288(_mm256_setzero_pd()),v1289,d1289(_mm256_setzero_pd()),v1290,d1290(_mm256_setzero_pd()),v1291,d1291(_mm256_setzero_pd()),v1292,d1292(_mm256_setzero_pd()),v1293,d1293(_mm256_setzero_pd()),v1294,d1294(_mm256_setzero_pd()),v1295,d1295(_mm256_setzero_pd()),v1296,d1296(_mm256_setzero_pd()),v1297,d1297(_mm256_setzero_pd()),v1298,d1298(_mm256_setzero_pd()),v1299,d1299(_mm256_setzero_pd()),v1300,d1300(_mm256_setzero_pd()),v1301,d1301(_mm256_setzero_pd()),v1302,d1302(_mm256_setzero_pd()),v1303,d1303(_mm256_setzero_pd()),v1304,d1304(_mm256_setzero_pd()),v1305,d1305(_mm256_setzero_pd()),v1306,d1306(_mm256_setzero_pd()),v1307,d1307(_mm256_setzero_pd()),v1308,d1308(_mm256_setzero_pd()),v1309,d1309(_mm256_setzero_pd()),v1310,d1310(_mm256_setzero_pd()),v1311,d1311(_mm256_setzero_pd()),v1312,d1312(_mm256_setzero_pd()),v1313,d1313(_mm256_setzero_pd()),v1314,d1314(_mm256_setzero_pd()),v1315,d1315(_mm256_setzero_pd()),v1316,d1316(_mm256_setzero_pd()),v1317,d1317(_mm256_setzero_pd()),v1318,d1318(_mm256_setzero_pd()),v1319,d1319(_mm256_setzero_pd()),v1320,d1320(_mm256_setzero_pd()),v1321,d1321(_mm256_setzero_pd()),v1322,d1322(_mm256_setzero_pd()),v1323,d1323(_mm256_setzero_pd()),v1324,d1324(_mm256_setzero_pd()),v1325,d1325(_mm256_setzero_pd()),v1326,d1326(_mm256_setzero_pd()),v1327,d1327(_mm256_setzero_pd()),v1328,d1328(_mm256_setzero_pd()),v1329,d1329(_mm256_setzero_pd()),v1330,d1330(_mm256_setzero_pd()),v1331,d1331(_mm256_setzero_pd()),v1332,d1332(_mm256_setzero_pd()),v1333,d1333(_mm256_setzero_pd()),v1334,d1334(_mm256_setzero_pd()),v1335,d1335(_mm256_setzero_pd()),v1336,d1336(_mm256_setzero_pd()),v1337,d1337(_mm256_setzero_pd()),v1338,d1338(_mm256_setzero_pd()),v1339,d1339(_mm256_setzero_pd()),v1340,d1340(_mm256_setzero_pd()),v1341,d1341(_mm256_setzero_pd()),v1342,d1342(_mm256_setzero_pd()),v1343,d1343(_mm256_setzero_pd()),v1344,d1344(_mm256_setzero_pd()),v1345,d1345(_mm256_setzero_pd()),v1346,d1346(_mm256_setzero_pd()),v1347,d1347(_mm256_setzero_pd()),v1348,d1348(_mm256_setzero_pd()),v1349,d1349(_mm256_setzero_pd()),v1350,d1350(_mm256_setzero_pd()),v1351,d1351(_mm256_setzero_pd()),v1352,d1352(_mm256_setzero_pd()),v1353,d1353(_mm256_setzero_pd()),v1354,d1354(_mm256_setzero_pd()),v1355,d1355(_mm256_setzero_pd()),v1356,d1356(_mm256_setzero_pd()),v1357,d1357(_mm256_setzero_pd()),v1358,d1358(_mm256_setzero_pd()),v1359,d1359(_mm256_setzero_pd()),v1360,d1360(_mm256_setzero_pd()),v1361,d1361(_mm256_setzero_pd()),v1362,d1362(_mm256_setzero_pd()),v1363,d1363(_mm256_setzero_pd()),v1364,d1364(_mm256_setzero_pd()),v1365,d1365(_mm256_setzero_pd()),v1366,d1366(_mm256_setzero_pd()),v1367,d1367(_mm256_setzero_pd()),v1368,d1368(_mm256_setzero_pd()),v1369,d1369(_mm256_setzero_pd()),v1370,d1370(_mm256_setzero_pd()),v1371,d1371(_mm256_setzero_pd()),v1372,d1372(_mm256_setzero_pd()),v1373,d1373(_mm256_setzero_pd()),v1374,d1374(_mm256_setzero_pd()),v1375,d1375(_mm256_setzero_pd()),v1376,d1376(_mm256_setzero_pd()),v1377,d1377(_mm256_setzero_pd()),v1378,d1378(_mm256_setzero_pd()),v1379,d1379(_mm256_setzero_pd()),v1380,d1380(_mm256_setzero_pd()),v1381,d1381(_mm256_setzero_pd()),v1382,d1382(_mm256_setzero_pd()),v1383,d1383(_mm256_setzero_pd()),v1384,d1384(_mm256_setzero_pd()),v1385,d1385(_mm256_setzero_pd()),v1386,d1386(_mm256_setzero_pd()),v1387,d1387(_mm256_setzero_pd()),v1388,d1388(_mm256_setzero_pd()),v1389,d1389(_mm256_setzero_pd()),v1390,d1390(_mm256_setzero_pd()),v1391,d1391(_mm256_setzero_pd()),v1392,d1392(_mm256_setzero_pd()),v1393,d1393(_mm256_setzero_pd()),v1394,d1394(_mm256_setzero_pd()),v1395,d1395(_mm256_setzero_pd()),v1396,d1396(_mm256_setzero_pd()),v1397,d1397(_mm256_setzero_pd()),v1398,d1398(_mm256_setzero_pd()),v1399,d1399(_mm256_setzero_pd()),v1400,d1400(_mm256_setzero_pd()),v1401,d1401(_mm256_setzero_pd()),v1402,d1402(_mm256_setzero_pd()),v1403,d1403(_mm256_setzero_pd()),v1404,d1404(_mm256_setzero_pd()),v1405,d1405(_mm256_setzero_pd()),v1406,d1406(_mm256_setzero_pd()),v1407,d1407(_mm256_setzero_pd()),v1408,d1408(_mm256_setzero_pd()),v1409,d1409(_mm256_setzero_pd()),v1410,d1410(_mm256_setzero_pd()),v1411,d1411(_mm256_setzero_pd()),v1412,d1412(_mm256_setzero_pd()),v1413,d1413(_mm256_setzero_pd()),v1414,d1414(_mm256_setzero_pd()),v1415,d1415(_mm256_setzero_pd()),v1416,d1416(_mm256_setzero_pd()),v1417,d1417(_mm256_setzero_pd()),v1418,d1418(_mm256_setzero_pd()),v1419,d1419(_mm256_setzero_pd()),v1420,d1420(_mm256_setzero_pd()),v1421,d1421(_mm256_setzero_pd()),v1422,d1422(_mm256_setzero_pd()),v1423,d1423(_mm256_setzero_pd()),v1424,d1424(_mm256_setzero_pd()),v1425,d1425(_mm256_setzero_pd()),v1426,d1426(_mm256_setzero_pd()),v1427,d1427(_mm256_setzero_pd()),v1428,d1428(_mm256_setzero_pd()),v1429,d1429(_mm256_setzero_pd()),v1430,d1430(_mm256_setzero_pd()),v1431,d1431(_mm256_setzero_pd()),v1432,d1432(_mm256_setzero_pd()),v1433,d1433(_mm256_setzero_pd()),v1434,d1434(_mm256_setzero_pd()),v1435,d1435(_mm256_setzero_pd()),v1436,d1436(_mm256_setzero_pd()),v1437,d1437(_mm256_setzero_pd()),v1438,d1438(_mm256_setzero_pd()),v1439,d1439(_mm256_setzero_pd()),v1440,d1440(_mm256_setzero_pd()),v1441,d1441(_mm256_setzero_pd()),v1442,d1442(_mm256_setzero_pd()),v1443,d1443(_mm256_setzero_pd()),v1444,d1444(_mm256_setzero_pd()),v1445,d1445(_mm256_setzero_pd()),v1446,d1446(_mm256_setzero_pd()),v1447,d1447(_mm256_setzero_pd()),v1448,d1448(_mm256_setzero_pd()),v1449,d1449(_mm256_setzero_pd()),v1450,d1450(_mm256_setzero_pd()),v1451,d1451(_mm256_setzero_pd()),v1452,d1452(_mm256_setzero_pd()),v1453,d1453(_mm256_setzero_pd()),v1454,d1454(_mm256_setzero_pd()),v1455,d1455(_mm256_setzero_pd()),v1456,d1456(_mm256_setzero_pd()),v1457,d1457(_mm256_setzero_pd()),v1458,d1458(_mm256_setzero_pd()),v1459,d1459(_mm256_setzero_pd()),v1460,d1460(_mm256_setzero_pd()),v1461,d1461(_mm256_setzero_pd()),v1462,d1462(_mm256_setzero_pd()),v1463,d1463(_mm256_setzero_pd()),v1464,d1464(_mm256_setzero_pd()),v1465,d1465(_mm256_setzero_pd()),v1466,d1466(_mm256_setzero_pd()),v1467,d1467(_mm256_setzero_pd()),v1468,d1468(_mm256_setzero_pd()),v1469,d1469(_mm256_setzero_pd()),v1470,d1470(_mm256_setzero_pd()),v1471,d1471(_mm256_setzero_pd()),v1472,d1472(_mm256_setzero_pd()),v1473,d1473(_mm256_setzero_pd()),v1474,d1474(_mm256_setzero_pd()),v1475,d1475(_mm256_setzero_pd()),v1476,d1476(_mm256_setzero_pd()),v1477,d1477(_mm256_setzero_pd()),v1478,d1478(_mm256_setzero_pd()),v1479,d1479(_mm256_setzero_pd()),v1480,d1480(_mm256_setzero_pd()),v1481,d1481(_mm256_setzero_pd()),v1482,d1482(_mm256_setzero_pd()),v1483,d1483(_mm256_setzero_pd()),v1484,d1484(_mm256_setzero_pd()),v1485,d1485(_mm256_setzero_pd()),v1486,d1486(_mm256_setzero_pd()),v1487,d1487(_mm256_setzero_pd()),v1488,d1488(_mm256_setzero_pd()),v1489,d1489(_mm256_setzero_pd()),v1490,d1490(_mm256_setzero_pd()),v1491,d1491(_mm256_setzero_pd()),v1492,d1492(_mm256_setzero_pd()),v1493,d1493(_mm256_setzero_pd()),v1494,d1494(_mm256_setzero_pd()),v1495,d1495(_mm256_setzero_pd()),v1496,d1496(_mm256_setzero_pd()),v1497,d1497(_mm256_setzero_pd()),v1498,d1498(_mm256_setzero_pd()),v1499,d1499(_mm256_setzero_pd()),v1500,d1500(_mm256_setzero_pd()),v1501,d1501(_mm256_setzero_pd()),v1502,d1502(_mm256_setzero_pd()),v1503,d1503(_mm256_setzero_pd()),v1504,d1504(_mm256_setzero_pd()),v1505,d1505(_mm256_setzero_pd()),v1506,d1506(_mm256_setzero_pd()),v1507,d1507(_mm256_setzero_pd()),v1508,d1508(_mm256_setzero_pd()),v1509,d1509(_mm256_setzero_pd()),v1510,d1510(_mm256_setzero_pd()),v1511,d1511(_mm256_setzero_pd()),v1512,d1512(_mm256_setzero_pd()),v1513,d1513(_mm256_setzero_pd()),v1514,d1514(_mm256_setzero_pd()),v1515,d1515(_mm256_setzero_pd()),v1516,d1516(_mm256_setzero_pd()),v1517,d1517(_mm256_setzero_pd()),v1518,d1518(_mm256_setzero_pd()),v1519,d1519(_mm256_setzero_pd()),v1520,d1520(_mm256_setzero_pd()),v1521,d1521(_mm256_setzero_pd()),v1522,d1522(_mm256_setzero_pd()),v1523,d1523(_mm256_setzero_pd()),v1524,d1524(_mm256_setzero_pd()),v1525,d1525(_mm256_setzero_pd()),v1526,d1526(_mm256_setzero_pd()),v1527,d1527(_mm256_setzero_pd()),v1528,d1528(_mm256_setzero_pd()),v1529,d1529(_mm256_setzero_pd()),v1530,d1530(_mm256_setzero_pd()),v1531,d1531(_mm256_setzero_pd()),v1532,d1532(_mm256_setzero_pd()),v1533,d1533(_mm256_setzero_pd()),v1534,d1534(_mm256_setzero_pd()),v1535,d1535(_mm256_setzero_pd()),v1536,d1536(_mm256_setzero_pd()),v1537,d1537(_mm256_setzero_pd()),v1538,d1538(_mm256_setzero_pd()),v1539,d1539(_mm256_setzero_pd()),v1540,d1540(_mm256_setzero_pd()),v1541,d1541(_mm256_setzero_pd()),v1542,d1542(_mm256_setzero_pd()),v1543,d1543(_mm256_setzero_pd()),v1544,d1544(_mm256_setzero_pd()),v1545,d1545(_mm256_setzero_pd()),v1546,d1546(_mm256_setzero_pd()),v1547,d1547(_mm256_setzero_pd()),v1548,d1548(_mm256_setzero_pd()),v1549,d1549(_mm256_setzero_pd()),v1550,d1550(_mm256_setzero_pd()),v1551,d1551(_mm256_setzero_pd()),v1552,d1552(_mm256_setzero_pd()),v1553,d1553(_mm256_setzero_pd()),v1554,d1554(_mm256_setzero_pd()),v1555,d1555(_mm256_setzero_pd()),v1556,d1556(_mm256_setzero_pd()),v1557,d1557(_mm256_setzero_pd()),v1558,d1558(_mm256_setzero_pd()),v1559,d1559(_mm256_setzero_pd()),v1560,d1560(_mm256_setzero_pd()),v1561,d1561(_mm256_setzero_pd()),v1562,d1562(_mm256_setzero_pd()),v1563,d1563(_mm256_setzero_pd()),v1564,d1564(_mm256_setzero_pd()),v1565,d1565(_mm256_setzero_pd()),v1566,d1566(_mm256_setzero_pd()),v1567,d1567(_mm256_setzero_pd()),v1568,d1568(_mm256_setzero_pd()),v1569,d1569(_mm256_setzero_pd()),v1570,d1570(_mm256_setzero_pd()),v1571,d1571(_mm256_setzero_pd()),v1572,d1572(_mm256_setzero_pd()),v1573,d1573(_mm256_setzero_pd()),v1574,d1574(_mm256_setzero_pd()),v1575,d1575(_mm256_setzero_pd()),v1576,d1576(_mm256_setzero_pd()),v1577,d1577(_mm256_setzero_pd()),v1578,d1578(_mm256_setzero_pd()),v1579,d1579(_mm256_setzero_pd()),v1580,d1580(_mm256_setzero_pd()),v1581,d1581(_mm256_setzero_pd()),v1582,d1582(_mm256_setzero_pd()),v1583,d1583(_mm256_setzero_pd()),v1584,d1584(_mm256_setzero_pd()),v1585,d1585(_mm256_setzero_pd()),v1586,d1586(_mm256_setzero_pd()),v1587,d1587(_mm256_setzero_pd()),v1588,d1588(_mm256_setzero_pd()),v1589,d1589(_mm256_setzero_pd()),v1590,d1590(_mm256_setzero_pd()),v1591,d1591(_mm256_setzero_pd()),v1592,d1592(_mm256_setzero_pd()),v1593,d1593(_mm256_setzero_pd()),v1594,d1594(_mm256_setzero_pd()),v1595,d1595(_mm256_setzero_pd()),v1596,d1596(_mm256_setzero_pd()),v1597,d1597(_mm256_setzero_pd()),v1598,d1598(_mm256_setzero_pd()),v1599,d1599(_mm256_setzero_pd()),v1600,d1600(_mm256_setzero_pd()),v1601,d1601(_mm256_setzero_pd()),v1602,d1602(_mm256_setzero_pd()),v1603,d1603(_mm256_setzero_pd()),v1604,d1604(_mm256_setzero_pd()),v1605,d1605(_mm256_setzero_pd()),v1606,d1606(_mm256_setzero_pd()),v1607,d1607(_mm256_setzero_pd()),v1608,d1608(_mm256_setzero_pd()),v1609,d1609(_mm256_setzero_pd()),v1610,d1610(_mm256_setzero_pd()),v1611,d1611(_mm256_setzero_pd()),v1612,d1612(_mm256_setzero_pd()),v1613,d1613(_mm256_setzero_pd()),v1614,d1614(_mm256_setzero_pd()),v1615,d1615(_mm256_setzero_pd()),v1616,d1616(_mm256_setzero_pd()),v1617,d1617(_mm256_setzero_pd()),v1618,d1618(_mm256_setzero_pd()),v1619,d1619(_mm256_setzero_pd()),v1620,d1620(_mm256_setzero_pd()),v1621,d1621(_mm256_setzero_pd()),v1622,d1622(_mm256_setzero_pd()),v1623,d1623(_mm256_setzero_pd()),v1624,d1624(_mm256_setzero_pd()),v1625,d1625(_mm256_setzero_pd()),v1626,d1626(_mm256_setzero_pd()),v1627,d1627(_mm256_setzero_pd()),v1628,d1628(_mm256_setzero_pd()),v1629,d1629(_mm256_setzero_pd()),v1630,d1630(_mm256_setzero_pd()),v1631,d1631(_mm256_setzero_pd()),v1632,d1632(_mm256_setzero_pd()),v1633,d1633(_mm256_setzero_pd()),v1634,d1634(_mm256_setzero_pd()),v1635,d1635(_mm256_setzero_pd()),v1636,d1636(_mm256_setzero_pd()),v1637,d1637(_mm256_setzero_pd()),v1638,d1638(_mm256_setzero_pd()),v1639,d1639(_mm256_setzero_pd()),v1640,d1640(_mm256_setzero_pd()),v1641,d1641(_mm256_setzero_pd()),v1642,d1642(_mm256_setzero_pd()),v1643,d1643(_mm256_setzero_pd()),v1644,d1644(_mm256_setzero_pd()),v1645,d1645(_mm256_setzero_pd()),v1646,d1646(_mm256_setzero_pd()),v1647,d1647(_mm256_setzero_pd()),v1648,d1648(_mm256_setzero_pd()),v1649,d1649(_mm256_setzero_pd()),v1650,d1650(_mm256_setzero_pd()),v1651,d1651(_mm256_setzero_pd()),v1652,d1652(_mm256_setzero_pd()),v1653,d1653(_mm256_setzero_pd()),v1654,d1654(_mm256_setzero_pd()),v1655,d1655(_mm256_setzero_pd()),v1656,d1656(_mm256_setzero_pd()),v1657,d1657(_mm256_setzero_pd()),v1658,d1658(_mm256_setzero_pd()),v1659,d1659(_mm256_setzero_pd()),v1660,d1660(_mm256_setzero_pd()),v1661,d1661(_mm256_setzero_pd()),v1662,d1662(_mm256_setzero_pd()),v1663,d1663(_mm256_setzero_pd()),v1664,d1664(_mm256_setzero_pd()),v1665,d1665(_mm256_setzero_pd()),v1666,d1666(_mm256_setzero_pd()),v1667,d1667(_mm256_setzero_pd()),v1668,d1668(_mm256_setzero_pd()),v1669,d1669(_mm256_setzero_pd()),v1670,d1670(_mm256_setzero_pd()),v1671,d1671(_mm256_setzero_pd()),v1672,d1672(_mm256_setzero_pd()),v1673,d1673(_mm256_setzero_pd()),v1674,d1674(_mm256_setzero_pd()),v1675,d1675(_mm256_setzero_pd()),v1676,d1676(_mm256_setzero_pd()),v1677,d1677(_mm256_setzero_pd()),v1678,d1678(_mm256_setzero_pd()),v1679,d1679(_mm256_setzero_pd()),v1680,d1680(_mm256_setzero_pd()),v1681,d1681(_mm256_setzero_pd()),v1682,d1682(_mm256_setzero_pd()),v1683,d1683(_mm256_setzero_pd()),v1684,d1684(_mm256_setzero_pd()),v1685,d1685(_mm256_setzero_pd()),v1686,d1686(_mm256_setzero_pd()),v1687,d1687(_mm256_setzero_pd()),v1688,d1688(_mm256_setzero_pd()),v1689,d1689(_mm256_setzero_pd()),v1690,d1690(_mm256_setzero_pd()),v1691,d1691(_mm256_setzero_pd()),v1692,d1692(_mm256_setzero_pd()),v1693,d1693(_mm256_setzero_pd()),v1694,d1694(_mm256_setzero_pd()),v1695,d1695(_mm256_setzero_pd()),v1696,d1696(_mm256_setzero_pd()),v1697,d1697(_mm256_setzero_pd()),v1698,d1698(_mm256_setzero_pd()),v1699,d1699(_mm256_setzero_pd()),v1700,d1700(_mm256_setzero_pd()),v1701,d1701(_mm256_setzero_pd()),v1702,d1702(_mm256_setzero_pd()),v1703,d1703(_mm256_setzero_pd()),v1704,d1704(_mm256_setzero_pd()),v1705,d1705(_mm256_setzero_pd()),v1706,d1706(_mm256_setzero_pd()),v1707,d1707(_mm256_setzero_pd()),v1708,d1708(_mm256_setzero_pd()),v1709,d1709(_mm256_setzero_pd()),v1710,d1710(_mm256_setzero_pd()),v1711,d1711(_mm256_setzero_pd()),v1712,d1712(_mm256_setzero_pd()),v1713,d1713(_mm256_setzero_pd()),v1714,d1714(_mm256_setzero_pd()),v1715,d1715(_mm256_setzero_pd()),v1716,d1716(_mm256_setzero_pd()),v1717,d1717(_mm256_setzero_pd()),v1718,d1718(_mm256_setzero_pd()),v1719,d1719(_mm256_setzero_pd()),v1720,d1720(_mm256_setzero_pd()),v1721,d1721(_mm256_setzero_pd()),v1722,d1722(_mm256_setzero_pd()),v1723,d1723(_mm256_setzero_pd()),v1724,d1724(_mm256_setzero_pd()),v1725,d1725(_mm256_setzero_pd()),v1726,d1726(_mm256_setzero_pd()),v1727,d1727(_mm256_setzero_pd()),v1728,d1728(_mm256_setzero_pd()),v1729,d1729(_mm256_setzero_pd()),v1730,d1730(_mm256_setzero_pd()),v1731,d1731(_mm256_setzero_pd()),v1732,d1732(_mm256_setzero_pd()),v1733,d1733(_mm256_setzero_pd()),v1734,d1734(_mm256_setzero_pd()),v1735,d1735(_mm256_setzero_pd()),v1736,d1736(_mm256_setzero_pd()),v1737,d1737(_mm256_setzero_pd()),v1738,d1738(_mm256_setzero_pd()),v1739,d1739(_mm256_setzero_pd()),v1740,d1740(_mm256_setzero_pd()),v1741,d1741(_mm256_setzero_pd()),v1742,d1742(_mm256_setzero_pd()),v1743,d1743(_mm256_setzero_pd()),v1744,d1744(_mm256_setzero_pd()),v1745,d1745(_mm256_setzero_pd()),v1746,d1746(_mm256_setzero_pd()),v1747,d1747(_mm256_setzero_pd()),v1748,d1748(_mm256_setzero_pd()),v1749,d1749(_mm256_setzero_pd()),v1750,d1750(_mm256_setzero_pd()),v1751,d1751(_mm256_setzero_pd()),v1752,d1752(_mm256_setzero_pd()),v1753,d1753(_mm256_setzero_pd()),v1754,d1754(_mm256_setzero_pd()),v1755,d1755(_mm256_setzero_pd()),v1756,d1756(_mm256_setzero_pd()),v1757,d1757(_mm256_setzero_pd()),v1758,d1758(_mm256_setzero_pd()),v1759,d1759(_mm256_setzero_pd()),v1760,d1760(_mm256_setzero_pd()),v1761,d1761(_mm256_setzero_pd()),v1762,d1762(_mm256_setzero_pd()),v1763,d1763(_mm256_setzero_pd()),v1764,d1764(_mm256_setzero_pd()),v1765,d1765(_mm256_setzero_pd()),v1766,d1766(_mm256_setzero_pd()),v1767,d1767(_mm256_setzero_pd()),v1768,d1768(_mm256_setzero_pd()),v1769,d1769(_mm256_setzero_pd()),v1770,d1770(_mm256_setzero_pd()),v1771,d1771(_mm256_setzero_pd()),v1772,d1772(_mm256_setzero_pd()),v1773,d1773(_mm256_setzero_pd()),v1774,d1774(_mm256_setzero_pd()),v1775,d1775(_mm256_setzero_pd()),v1776,d1776(_mm256_setzero_pd()),v1777,d1777(_mm256_setzero_pd()),v1778,d1778(_mm256_setzero_pd()),v1779,d1779(_mm256_setzero_pd()),v1780,d1780(_mm256_setzero_pd()),v1781,d1781(_mm256_setzero_pd()),v1782,d1782(_mm256_setzero_pd()),v1783,d1783(_mm256_setzero_pd()),v1784,d1784(_mm256_setzero_pd()),v1785,d1785(_mm256_setzero_pd()),v1786,d1786(_mm256_setzero_pd()),v1787,d1787(_mm256_setzero_pd()),v1788,d1788(_mm256_setzero_pd()),v1789,d1789(_mm256_setzero_pd()),v1790,d1790(_mm256_setzero_pd()),v1791,d1791(_mm256_setzero_pd()),v1792,d1792(_mm256_setzero_pd()),v1793,d1793(_mm256_setzero_pd()),v1794,d1794(_mm256_setzero_pd()),v1795,d1795(_mm256_setzero_pd()),v1796,d1796(_mm256_setzero_pd()),v1797,d1797(_mm256_setzero_pd()),v1798,d1798(_mm256_setzero_pd()),v1799,d1799(_mm256_setzero_pd()),v1800,d1800(_mm256_setzero_pd()),v1801,d1801(_mm256_setzero_pd()),v1802,d1802(_mm256_setzero_pd()),v1803,d1803(_mm256_setzero_pd()),v1804,d1804(_mm256_setzero_pd()),v1805,d1805(_mm256_setzero_pd()),v1806,d1806(_mm256_setzero_pd()),v1807,d1807(_mm256_setzero_pd()),v1808,d1808(_mm256_setzero_pd()),v1809,d1809(_mm256_setzero_pd()),v1810,d1810(_mm256_setzero_pd()),v1811,d1811(_mm256_setzero_pd()),v1812,d1812(_mm256_setzero_pd()),v1813,d1813(_mm256_setzero_pd()),v1814,d1814(_mm256_setzero_pd()),v1815,d1815(_mm256_setzero_pd()),v1816,d1816(_mm256_setzero_pd()),v1817,d1817(_mm256_setzero_pd()),v1818,d1818(_mm256_setzero_pd()),v1819,d1819(_mm256_setzero_pd()),v1820,d1820(_mm256_setzero_pd()),v1821,d1821(_mm256_setzero_pd()),v1822,d1822(_mm256_setzero_pd()),v1823,d1823(_mm256_setzero_pd()),v1824,d1824(_mm256_setzero_pd()),v1825,d1825(_mm256_setzero_pd()),v1826,d1826(_mm256_setzero_pd()),v1827,d1827(_mm256_setzero_pd()),v1828,d1828(_mm256_setzero_pd()),v1829,d1829(_mm256_setzero_pd()),v1830,d1830(_mm256_setzero_pd()),v1831,d1831(_mm256_setzero_pd()),v1832,d1832(_mm256_setzero_pd()),v1833,d1833(_mm256_setzero_pd()),v1834,d1834(_mm256_setzero_pd()),v1835,d1835(_mm256_setzero_pd()),v1836,d1836(_mm256_setzero_pd()),v1837,d1837(_mm256_setzero_pd()),v1838,d1838(_mm256_setzero_pd()),v1839,d1839(_mm256_setzero_pd()),v1840,d1840(_mm256_setzero_pd()),v1841,d1841(_mm256_setzero_pd()),v1842,d1842(_mm256_setzero_pd()),v1843,d1843(_mm256_setzero_pd()),v1844,d1844(_mm256_setzero_pd()),v1845,d1845(_mm256_setzero_pd()),v1846,d1846(_mm256_setzero_pd()),v1847,d1847(_mm256_setzero_pd()),v1848,d1848(_mm256_setzero_pd()),v1849,d1849(_mm256_setzero_pd()),v1850,d1850(_mm256_setzero_pd()),v1851,d1851(_mm256_setzero_pd()),v1852,d1852(_mm256_setzero_pd()),v1853,d1853(_mm256_setzero_pd()),v1854,d1854(_mm256_setzero_pd()),v1855,d1855(_mm256_setzero_pd()),v1856,d1856(_mm256_setzero_pd()),v1857,d1857(_mm256_setzero_pd()),v1858,d1858(_mm256_setzero_pd()),v1859,d1859(_mm256_setzero_pd()),v1860,d1860(_mm256_setzero_pd()),v1861,d1861(_mm256_setzero_pd()),v1862,d1862(_mm256_setzero_pd()),v1863,d1863(_mm256_setzero_pd()),v1864,d1864(_mm256_setzero_pd()),v1865,d1865(_mm256_setzero_pd()),v1866,d1866(_mm256_setzero_pd()),v1867,d1867(_mm256_setzero_pd()),v1868,d1868(_mm256_setzero_pd()),v1869,d1869(_mm256_setzero_pd()),v1870,d1870(_mm256_setzero_pd()),v1871,d1871(_mm256_setzero_pd()),v1872,d1872(_mm256_setzero_pd()),v1873,d1873(_mm256_setzero_pd()),v1874,d1874(_mm256_setzero_pd()),v1875,d1875(_mm256_setzero_pd()),v1876,d1876(_mm256_setzero_pd()),v1877,d1877(_mm256_setzero_pd()),v1878,d1878(_mm256_setzero_pd()),v1879,d1879(_mm256_setzero_pd()),v1880,d1880(_mm256_setzero_pd()),v1881,d1881(_mm256_setzero_pd()),v1882,d1882(_mm256_setzero_pd()),v1883,d1883(_mm256_setzero_pd()),v1884,d1884(_mm256_setzero_pd()),v1885,d1885(_mm256_setzero_pd()),v1886,d1886(_mm256_setzero_pd()),v1887,d1887(_mm256_setzero_pd()),v1888,d1888(_mm256_setzero_pd()),v1889,d1889(_mm256_setzero_pd()),v1890,d1890(_mm256_setzero_pd()),v1891,d1891(_mm256_setzero_pd()),v1892,d1892(_mm256_setzero_pd()),v1893,d1893(_mm256_setzero_pd()),v1894,d1894(_mm256_setzero_pd()),v1895,d1895(_mm256_setzero_pd()),v1896,d1896(_mm256_setzero_pd()),v1897,d1897(_mm256_setzero_pd()),v1898,d1898(_mm256_setzero_pd()),v1899,d1899(_mm256_setzero_pd()),v1900,d1900(_mm256_setzero_pd()),v1901,d1901(_mm256_setzero_pd()),v1902,d1902(_mm256_setzero_pd()),v1903,d1903(_mm256_setzero_pd()),v1904,d1904(_mm256_setzero_pd()),v1905,d1905(_mm256_setzero_pd()),v1906,d1906(_mm256_setzero_pd()),v1907,d1907(_mm256_setzero_pd()),v1908,d1908(_mm256_setzero_pd()),v1909,d1909(_mm256_setzero_pd()),v1910,d1910(_mm256_setzero_pd()),v1911,d1911(_mm256_setzero_pd()),v1912,d1912(_mm256_setzero_pd()),v1913,d1913(_mm256_setzero_pd()),v1914,d1914(_mm256_setzero_pd()),v1915,d1915(_mm256_setzero_pd()),v1916,d1916(_mm256_setzero_pd()),v1917,d1917(_mm256_setzero_pd()),v1918,d1918(_mm256_setzero_pd()),v1919,d1919(_mm256_setzero_pd()),v1920,d1920(_mm256_setzero_pd()),v1921,d1921(_mm256_setzero_pd()),v1922,d1922(_mm256_setzero_pd()),v1923,d1923(_mm256_setzero_pd()),v1924,d1924(_mm256_setzero_pd()),v1925,d1925(_mm256_setzero_pd()),v1926,d1926(_mm256_setzero_pd()),v1927,d1927(_mm256_setzero_pd()),v1928,d1928(_mm256_setzero_pd()),v1929,d1929(_mm256_setzero_pd()),v1930,d1930(_mm256_setzero_pd()),v1931,d1931(_mm256_setzero_pd()),v1932,d1932(_mm256_setzero_pd()),v1933,d1933(_mm256_setzero_pd()),v1934,d1934(_mm256_setzero_pd()),v1935,d1935(_mm256_setzero_pd()),v1936,d1936(_mm256_setzero_pd()),v1937,d1937(_mm256_setzero_pd()),v1938,d1938(_mm256_setzero_pd()),v1939,d1939(_mm256_setzero_pd()),v1940,d1940(_mm256_setzero_pd()),v1941,d1941(_mm256_setzero_pd()),v1942,d1942(_mm256_setzero_pd()),v1943,d1943(_mm256_setzero_pd()),v1944,d1944(_mm256_setzero_pd()),v1945,d1945(_mm256_setzero_pd()),v1946,d1946(_mm256_setzero_pd()),v1947,d1947(_mm256_setzero_pd()),v1948,d1948(_mm256_setzero_pd()),v1949,d1949(_mm256_setzero_pd()),v1950,d1950(_mm256_setzero_pd()),v1951,d1951(_mm256_setzero_pd()),v1952,d1952(_mm256_setzero_pd()),v1953,d1953(_mm256_setzero_pd()),v1954,d1954(_mm256_setzero_pd()),v1955,d1955(_mm256_setzero_pd()),v1956,d1956(_mm256_setzero_pd()),v1957,d1957(_mm256_setzero_pd()),v1958,d1958(_mm256_setzero_pd()),v1959,d1959(_mm256_setzero_pd()),v1960,d1960(_mm256_setzero_pd()),v1961,d1961(_mm256_setzero_pd()),v1962,d1962(_mm256_setzero_pd()),v1963,d1963(_mm256_setzero_pd()),v1964,d1964(_mm256_setzero_pd()),v1965,d1965(_mm256_setzero_pd()),v1966,d1966(_mm256_setzero_pd()),v1967,d1967(_mm256_setzero_pd()),v1968,d1968(_mm256_setzero_pd()),v1969,d1969(_mm256_setzero_pd()),v1970,d1970(_mm256_setzero_pd()),v1971,d1971(_mm256_setzero_pd()),v1972,d1972(_mm256_setzero_pd()),v1973,d1973(_mm256_setzero_pd()),v1974,d1974(_mm256_setzero_pd()),v1975,d1975(_mm256_setzero_pd()),v1976,d1976(_mm256_setzero_pd()),v1977,d1977(_mm256_setzero_pd()),v1978,d1978(_mm256_setzero_pd()),v1979,d1979(_mm256_setzero_pd()),v1980,d1980(_mm256_setzero_pd()),v1981,d1981(_mm256_setzero_pd()),v1982,d1982(_mm256_setzero_pd()),v1983,d1983(_mm256_setzero_pd()),v1984,d1984(_mm256_setzero_pd()),v1985,d1985(_mm256_setzero_pd()),v1986,d1986(_mm256_setzero_pd()),v1987,d1987(_mm256_setzero_pd()),v1988,d1988(_mm256_setzero_pd()),v1989,d1989(_mm256_setzero_pd()),v1990,d1990(_mm256_setzero_pd()),v1991,d1991(_mm256_setzero_pd()),v1992,d1992(_mm256_setzero_pd()),v1993,d1993(_mm256_setzero_pd()),v1994,d1994(_mm256_setzero_pd()),v1995,d1995(_mm256_setzero_pd()),v1996,d1996(_mm256_setzero_pd()),v1997,d1997(_mm256_setzero_pd()),v1998,d1998(_mm256_setzero_pd()),v1999,d1999(_mm256_setzero_pd()),v2000,d2000(_mm256_setzero_pd()),v2001,d2001(_mm256_setzero_pd()),v2002,d2002(_mm256_setzero_pd()),v2003,d2003(_mm256_setzero_pd()),v2004,d2004(_mm256_setzero_pd()),v2005,d2005(_mm256_setzero_pd()),v2006,d2006(_mm256_setzero_pd()),v2007,d2007(_mm256_setzero_pd()),v2008,d2008(_mm256_setzero_pd()),v2009,d2009(_mm256_setzero_pd()),v2010,d2010(_mm256_setzero_pd()),v2011,d2011(_mm256_setzero_pd()),v2012,d2012(_mm256_setzero_pd()),v2013,d2013(_mm256_setzero_pd()),v2014,d2014(_mm256_setzero_pd()),v2015,d2015(_mm256_setzero_pd()),v2016,d2016(_mm256_setzero_pd()),v2017,d2017(_mm256_setzero_pd()),v2018,d2018(_mm256_setzero_pd()),v2019,d2019(_mm256_setzero_pd()),v2020,d2020(_mm256_setzero_pd()),v2021,d2021(_mm256_setzero_pd()),v2022,d2022(_mm256_setzero_pd()),v2023,d2023(_mm256_setzero_pd()),v2024,d2024(_mm256_setzero_pd()),v2025,d2025(_mm256_setzero_pd()),v2026,d2026(_mm256_setzero_pd()),v2027,d2027(_mm256_setzero_pd()),v2028,d2028(_mm256_setzero_pd()),v2029,d2029(_mm256_setzero_pd()),v2030,d2030(_mm256_setzero_pd()),v2031,d2031(_mm256_setzero_pd()),v2032,d2032(_mm256_setzero_pd()),v2033,d2033(_mm256_setzero_pd()),v2034,d2034(_mm256_setzero_pd()),v2035,d2035(_mm256_setzero_pd()),v2036,d2036(_mm256_setzero_pd()),v2037,d2037(_mm256_setzero_pd()),v2038,d2038(_mm256_setzero_pd()),v2039,d2039(_mm256_setzero_pd()),v2040,d2040(_mm256_setzero_pd()),v2041,d2041(_mm256_setzero_pd()),v2042,d2042(_mm256_setzero_pd()),v2043,d2043(_mm256_setzero_pd()),v2044,d2044(_mm256_setzero_pd()),v2045,d2045(_mm256_setzero_pd()),v2046,d2046(_mm256_setzero_pd()),v2047,d2047(_mm256_setzero_pd()),v2048,d2048(_mm256_setzero_pd()),v2049,d2049(_mm256_setzero_pd()),v2050,d2050(_mm256_setzero_pd()),v2051,d2051(_mm256_setzero_pd()),v2052,d2052(_mm256_setzero_pd()),v2053,d2053(_mm256_setzero_pd()),v2054,d2054(_mm256_setzero_pd()),v2055,d2055(_mm256_setzero_pd()),v2056,d2056(_mm256_setzero_pd()),v2057,d2057(_mm256_setzero_pd()),v2058,d2058(_mm256_setzero_pd()),v2059,d2059(_mm256_setzero_pd()),v2060,d2060(_mm256_setzero_pd()),v2061,d2061(_mm256_setzero_pd()),v2062,d2062(_mm256_setzero_pd()),v2063,d2063(_mm256_setzero_pd()),v2064,d2064(_mm256_setzero_pd()),v2065,d2065(_mm256_setzero_pd()),v2066,d2066(_mm256_setzero_pd()),v2067,d2067(_mm256_setzero_pd()),v2068,d2068(_mm256_setzero_pd()),v2069,d2069(_mm256_setzero_pd()),v2070,d2070(_mm256_setzero_pd()),v2071,d2071(_mm256_setzero_pd()),v2072,d2072(_mm256_setzero_pd()),v2073,d2073(_mm256_setzero_pd()),v2074,d2074(_mm256_setzero_pd()),v2075,d2075(_mm256_setzero_pd()),v2076,d2076(_mm256_setzero_pd()),v2077,d2077(_mm256_setzero_pd()),v2078,d2078(_mm256_setzero_pd()),v2079,d2079(_mm256_setzero_pd()),v2080,d2080(_mm256_setzero_pd()),v2081,d2081(_mm256_setzero_pd()),v2082,d2082(_mm256_setzero_pd()),v2083,d2083(_mm256_setzero_pd()),v2084,d2084(_mm256_setzero_pd()),v2085,d2085(_mm256_setzero_pd()),v2086,d2086(_mm256_setzero_pd()),v2087,d2087(_mm256_setzero_pd()),v2088,d2088(_mm256_setzero_pd()),v2089,d2089(_mm256_setzero_pd()),v2090,d2090(_mm256_setzero_pd()),v2091,d2091(_mm256_setzero_pd()),v2092,d2092(_mm256_setzero_pd()),v2093,d2093(_mm256_setzero_pd()),v2094,d2094(_mm256_setzero_pd()),v2095,d2095(_mm256_setzero_pd()),v2096,d2096(_mm256_setzero_pd()),v2097,d2097(_mm256_setzero_pd()),v2098,d2098(_mm256_setzero_pd()),v2099,d2099(_mm256_setzero_pd()),v2100,d2100(_mm256_setzero_pd()),v2101,d2101(_mm256_setzero_pd()),v2102,d2102(_mm256_setzero_pd()),v2103,d2103(_mm256_setzero_pd()),v2104,d2104(_mm256_setzero_pd()),v2105,d2105(_mm256_setzero_pd()),v2106,d2106(_mm256_setzero_pd()),v2107,d2107(_mm256_setzero_pd()),v2108,d2108(_mm256_setzero_pd()),v2109,d2109(_mm256_setzero_pd()),v2110,d2110(_mm256_setzero_pd()),v2111,d2111(_mm256_setzero_pd()),v2112,d2112(_mm256_setzero_pd()),v2113,d2113(_mm256_setzero_pd()),v2114,d2114(_mm256_setzero_pd()),v2115,d2115(_mm256_setzero_pd()),v2116,d2116(_mm256_setzero_pd()),v2117,d2117(_mm256_setzero_pd()),v2118,d2118(_mm256_setzero_pd()),v2119,d2119(_mm256_setzero_pd()),v2120,d2120(_mm256_setzero_pd()),v2121,d2121(_mm256_setzero_pd()),v2122,d2122(_mm256_setzero_pd()),v2123,d2123(_mm256_setzero_pd()),v2124,d2124(_mm256_setzero_pd()),v2125,d2125(_mm256_setzero_pd()),v2126,d2126(_mm256_setzero_pd()),v2127,d2127(_mm256_setzero_pd()),v2128,d2128(_mm256_setzero_pd()),v2129,d2129(_mm256_setzero_pd()),v2130,d2130(_mm256_setzero_pd()),v2131,d2131(_mm256_setzero_pd()),v2132,d2132(_mm256_setzero_pd()),v2133,d2133(_mm256_setzero_pd()),v2134,d2134(_mm256_setzero_pd()),v2135,d2135(_mm256_setzero_pd()),v2136,d2136(_mm256_setzero_pd()),v2137,d2137(_mm256_setzero_pd()),v2138,d2138(_mm256_setzero_pd()),v2139,d2139(_mm256_setzero_pd()),v2140,d2140(_mm256_setzero_pd()),v2141,d2141(_mm256_setzero_pd()),v2142,d2142(_mm256_setzero_pd()),v2143,d2143(_mm256_setzero_pd()),v2144,d2144(_mm256_setzero_pd()),v2145,d2145(_mm256_setzero_pd()),v2146,d2146(_mm256_setzero_pd()),v2147,d2147(_mm256_setzero_pd()),v2148,d2148(_mm256_setzero_pd()),v2149,d2149(_mm256_setzero_pd()),v2150,d2150(_mm256_setzero_pd()),v2151,d2151(_mm256_setzero_pd()),v2152,d2152(_mm256_setzero_pd()),v2153,d2153(_mm256_setzero_pd()),v2154,d2154(_mm256_setzero_pd()),v2155,d2155(_mm256_setzero_pd()),v2156,d2156(_mm256_setzero_pd()),v2157,d2157(_mm256_setzero_pd()),v2158,d2158(_mm256_setzero_pd()),v2159,d2159(_mm256_setzero_pd()),v2160,d2160(_mm256_setzero_pd()),v2161,d2161(_mm256_setzero_pd()),v2162,d2162(_mm256_setzero_pd()),v2163,d2163(_mm256_setzero_pd()),v2164,d2164(_mm256_setzero_pd()),v2165,d2165(_mm256_setzero_pd()),v2166,d2166(_mm256_setzero_pd()),v2167,d2167(_mm256_setzero_pd()),v2168,d2168(_mm256_setzero_pd()),v2169,d2169(_mm256_setzero_pd()),v2170,d2170(_mm256_setzero_pd()),v2171,d2171(_mm256_setzero_pd()),v2172,d2172(_mm256_setzero_pd()),v2173,d2173(_mm256_setzero_pd()),v2174,d2174(_mm256_setzero_pd()),v2175,d2175(_mm256_setzero_pd()),v2176,d2176(_mm256_setzero_pd()),v2177,d2177(_mm256_setzero_pd()),v2178,d2178(_mm256_setzero_pd()),v2179,d2179(_mm256_setzero_pd()),v2180,d2180(_mm256_setzero_pd()),v2181,d2181(_mm256_setzero_pd()),v2182,d2182(_mm256_setzero_pd()),v2183,d2183(_mm256_setzero_pd()),v2184,d2184(_mm256_setzero_pd()),v2185,d2185(_mm256_setzero_pd()),v2186,d2186(_mm256_setzero_pd()),v2187,d2187(_mm256_setzero_pd()),v2188,d2188(_mm256_setzero_pd()),v2189,d2189(_mm256_setzero_pd()),v2190,d2190(_mm256_setzero_pd()),v2191,d2191(_mm256_setzero_pd()),v2192,d2192(_mm256_setzero_pd()),v2193,d2193(_mm256_setzero_pd()),v2194,d2194(_mm256_setzero_pd()),v2195,d2195(_mm256_setzero_pd()),v2196,d2196(_mm256_setzero_pd()),v2197,d2197(_mm256_setzero_pd()),v2198,d2198(_mm256_setzero_pd()),v2199,d2199(_mm256_setzero_pd()),v2200,d2200(_mm256_setzero_pd()),v2201,d2201(_mm256_setzero_pd()),v2202,d2202(_mm256_setzero_pd()),v2203,d2203(_mm256_setzero_pd()),v2204,d2204(_mm256_setzero_pd()),v2205,d2205(_mm256_setzero_pd()),v2206,d2206(_mm256_setzero_pd()),v2207,d2207(_mm256_setzero_pd()),v2208,d2208(_mm256_setzero_pd()),v2209,d2209(_mm256_setzero_pd()),v2210,d2210(_mm256_setzero_pd()),v2211,d2211(_mm256_setzero_pd()),v2212,d2212(_mm256_setzero_pd()),v2213,d2213(_mm256_setzero_pd()),v2214,d2214(_mm256_setzero_pd()),v2215,d2215(_mm256_setzero_pd()),v2216,d2216(_mm256_setzero_pd()),v2217,d2217(_mm256_setzero_pd()),v2218,d2218(_mm256_setzero_pd()),v2219,d2219(_mm256_setzero_pd()),v2220,d2220(_mm256_setzero_pd()),v2221,d2221(_mm256_setzero_pd()),v2222,d2222(_mm256_setzero_pd()),v2223,d2223(_mm256_setzero_pd()),v2224,d2224(_mm256_setzero_pd()),v2225,d2225(_mm256_setzero_pd()),v2226,d2226(_mm256_setzero_pd()),v2227,d2227(_mm256_setzero_pd()),v2228,d2228(_mm256_setzero_pd()),v2229,d2229(_mm256_setzero_pd()),v2230,d2230(_mm256_setzero_pd()),v2231,d2231(_mm256_setzero_pd()),v2232,d2232(_mm256_setzero_pd()),v2233,d2233(_mm256_setzero_pd()),v2234,d2234(_mm256_setzero_pd()),v2235,d2235(_mm256_setzero_pd()),v2236,d2236(_mm256_setzero_pd()),v2237,d2237(_mm256_setzero_pd()),v2238,d2238(_mm256_setzero_pd()),v2239,d2239(_mm256_setzero_pd()),v2240,d2240(_mm256_setzero_pd()),v2241,d2241(_mm256_setzero_pd()),v2242,d2242(_mm256_setzero_pd()),v2243,d2243(_mm256_setzero_pd()),v2244,d2244(_mm256_setzero_pd()),v2245,d2245(_mm256_setzero_pd()),v2246,d2246(_mm256_setzero_pd()),v2247,d2247(_mm256_setzero_pd()),v2248,d2248(_mm256_setzero_pd()),v2249,d2249(_mm256_setzero_pd()),v2250,d2250(_mm256_setzero_pd()),v2251,d2251(_mm256_setzero_pd()),v2252,d2252(_mm256_setzero_pd()),v2253,d2253(_mm256_setzero_pd()),v2254,d2254(_mm256_setzero_pd()),v2255,d2255(_mm256_setzero_pd()),v2256,d2256(_mm256_setzero_pd()),v2257,d2257(_mm256_setzero_pd()),v2258,d2258(_mm256_setzero_pd()),v2259,d2259(_mm256_setzero_pd()),v2260,d2260(_mm256_setzero_pd()),v2261,d2261(_mm256_setzero_pd()),v2262,d2262(_mm256_setzero_pd()),v2263,d2263(_mm256_setzero_pd()),v2264,d2264(_mm256_setzero_pd()),v2265,d2265(_mm256_setzero_pd()),v2266,d2266(_mm256_setzero_pd()),v2267,d2267(_mm256_setzero_pd()),v2268,d2268(_mm256_setzero_pd()),v2269,d2269(_mm256_setzero_pd()),v2270,d2270(_mm256_setzero_pd()),v2271,d2271(_mm256_setzero_pd()),v2272,d2272(_mm256_setzero_pd()),v2273,d2273(_mm256_setzero_pd()),v2274,d2274(_mm256_setzero_pd()),v2275,d2275(_mm256_setzero_pd()),v2276,d2276(_mm256_setzero_pd()),v2277,d2277(_mm256_setzero_pd()),v2278,d2278(_mm256_setzero_pd()),v2279,d2279(_mm256_setzero_pd()),v2280,d2280(_mm256_setzero_pd()),v2281,d2281(_mm256_setzero_pd()),v2282,d2282(_mm256_setzero_pd()),v2283,d2283(_mm256_setzero_pd()),v2284,d2284(_mm256_setzero_pd()),v2285,d2285(_mm256_setzero_pd()),v2286,d2286(_mm256_setzero_pd()),v2287,d2287(_mm256_setzero_pd()),v2288,d2288(_mm256_setzero_pd()),v2289,d2289(_mm256_setzero_pd()),v2290,d2290(_mm256_setzero_pd()),v2291,d2291(_mm256_setzero_pd()),v2292,d2292(_mm256_setzero_pd()),v2293,d2293(_mm256_setzero_pd()),v2294,d2294(_mm256_setzero_pd()),v2295,d2295(_mm256_setzero_pd()),v2296,d2296(_mm256_setzero_pd()),v2297,d2297(_mm256_setzero_pd()),v2298,d2298(_mm256_setzero_pd()),v2299,d2299(_mm256_setzero_pd()),v2300,d2300(_mm256_setzero_pd()),v2301,d2301(_mm256_setzero_pd()),v2302,d2302(_mm256_setzero_pd()),v2304,d2304(_mm256_setzero_pd()),v2305,d2305(_mm256_setzero_pd()),v2306,d2306(_mm256_setzero_pd());
// forward function : 
	v2=v0;
	v3=v1;
	v4=v2;
	v5=v2;
	v6=_mm256_set1_pd(1);
	v7=_mm256_add_pd(v4,v5);
	v8=_mm256_add_pd(v4,v5);
	v9=_mm256_add_pd(v8,v3);
	v10=_mm256_div_pd(v7,v9);

	v11=_mm256_add_pd(v6,v10);
	v12=_mm256_set1_pd(1);
	v13=_mm256_add_pd(v4,v12);
	v14=_mm256_div_pd(v13,v4);

	v15=_mm256_add_pd(v11,v14);
	v16=_mm256_set1_pd(1);
	v17=_mm256_add_pd(v5,v16);
	v18=_mm256_div_pd(v17,v5);

	v19=_mm256_add_pd(v15,v18);
	v20=_mm256_mul_pd(v4,v5);
	v21=_mm256_mul_pd(v4,v5);
	v22=_mm256_set1_pd(1);
	v23=_mm256_add_pd(v21,v22);
	v24=_mm256_div_pd(v20,v23);

	v25=_mm256_add_pd(v19,v24);
	v26=v25;
	v27=v5;
	v28=_mm256_add_pd(v26,v3);
	v29=v28;
	v30=_mm256_add_pd(v27,v29);
	v31=_mm256_add_pd(v27,v29);
	v32=_mm256_add_pd(v31,v3);
	v33=_mm256_div_pd(v30,v32);

	v34=_mm256_add_pd(v26,v33);
	v35=_mm256_set1_pd(1);
	v36=_mm256_add_pd(v27,v35);
	v37=_mm256_div_pd(v36,v27);

	v38=_mm256_add_pd(v34,v37);
	v39=_mm256_set1_pd(1);
	v40=_mm256_add_pd(v29,v39);
	v41=_mm256_div_pd(v40,v29);

	v42=_mm256_add_pd(v38,v41);
	v43=_mm256_mul_pd(v27,v29);
	v44=_mm256_mul_pd(v27,v29);
	v45=_mm256_set1_pd(1);
	v46=_mm256_add_pd(v44,v45);
	v47=_mm256_div_pd(v43,v46);

	v48=_mm256_add_pd(v42,v47);
	v49=v48;
	v50=v29;
	v51=_mm256_add_pd(v49,v3);
	v52=v51;
	v53=_mm256_add_pd(v50,v52);
	v54=_mm256_add_pd(v50,v52);
	v55=_mm256_add_pd(v54,v3);
	v56=_mm256_div_pd(v53,v55);

	v57=_mm256_add_pd(v49,v56);
	v58=_mm256_set1_pd(1);
	v59=_mm256_add_pd(v50,v58);
	v60=_mm256_div_pd(v59,v50);

	v61=_mm256_add_pd(v57,v60);
	v62=_mm256_set1_pd(1);
	v63=_mm256_add_pd(v52,v62);
	v64=_mm256_div_pd(v63,v52);

	v65=_mm256_add_pd(v61,v64);
	v66=_mm256_mul_pd(v50,v52);
	v67=_mm256_mul_pd(v50,v52);
	v68=_mm256_set1_pd(1);
	v69=_mm256_add_pd(v67,v68);
	v70=_mm256_div_pd(v66,v69);

	v71=_mm256_add_pd(v65,v70);
	v72=v71;
	v73=v52;
	v74=_mm256_add_pd(v72,v3);
	v75=v74;
	v76=_mm256_add_pd(v73,v75);
	v77=_mm256_add_pd(v73,v75);
	v78=_mm256_add_pd(v77,v3);
	v79=_mm256_div_pd(v76,v78);

	v80=_mm256_add_pd(v72,v79);
	v81=_mm256_set1_pd(1);
	v82=_mm256_add_pd(v73,v81);
	v83=_mm256_div_pd(v82,v73);

	v84=_mm256_add_pd(v80,v83);
	v85=_mm256_set1_pd(1);
	v86=_mm256_add_pd(v75,v85);
	v87=_mm256_div_pd(v86,v75);

	v88=_mm256_add_pd(v84,v87);
	v89=_mm256_mul_pd(v73,v75);
	v90=_mm256_mul_pd(v73,v75);
	v91=_mm256_set1_pd(1);
	v92=_mm256_add_pd(v90,v91);
	v93=_mm256_div_pd(v89,v92);

	v94=_mm256_add_pd(v88,v93);
	v95=v94;
	v96=v75;
	v97=_mm256_add_pd(v95,v3);
	v98=v97;
	v99=_mm256_add_pd(v96,v98);
	v100=_mm256_add_pd(v96,v98);
	v101=_mm256_add_pd(v100,v3);
	v102=_mm256_div_pd(v99,v101);

	v103=_mm256_add_pd(v95,v102);
	v104=_mm256_set1_pd(1);
	v105=_mm256_add_pd(v96,v104);
	v106=_mm256_div_pd(v105,v96);

	v107=_mm256_add_pd(v103,v106);
	v108=_mm256_set1_pd(1);
	v109=_mm256_add_pd(v98,v108);
	v110=_mm256_div_pd(v109,v98);

	v111=_mm256_add_pd(v107,v110);
	v112=_mm256_mul_pd(v96,v98);
	v113=_mm256_mul_pd(v96,v98);
	v114=_mm256_set1_pd(1);
	v115=_mm256_add_pd(v113,v114);
	v116=_mm256_div_pd(v112,v115);

	v117=_mm256_add_pd(v111,v116);
	v118=v117;
	v119=v98;
	v120=_mm256_add_pd(v118,v3);
	v121=v120;
	v122=_mm256_add_pd(v119,v121);
	v123=_mm256_add_pd(v119,v121);
	v124=_mm256_add_pd(v123,v3);
	v125=_mm256_div_pd(v122,v124);

	v126=_mm256_add_pd(v118,v125);
	v127=_mm256_set1_pd(1);
	v128=_mm256_add_pd(v119,v127);
	v129=_mm256_div_pd(v128,v119);

	v130=_mm256_add_pd(v126,v129);
	v131=_mm256_set1_pd(1);
	v132=_mm256_add_pd(v121,v131);
	v133=_mm256_div_pd(v132,v121);

	v134=_mm256_add_pd(v130,v133);
	v135=_mm256_mul_pd(v119,v121);
	v136=_mm256_mul_pd(v119,v121);
	v137=_mm256_set1_pd(1);
	v138=_mm256_add_pd(v136,v137);
	v139=_mm256_div_pd(v135,v138);

	v140=_mm256_add_pd(v134,v139);
	v141=v140;
	v142=v121;
	v143=_mm256_add_pd(v141,v3);
	v144=v143;
	v145=_mm256_add_pd(v142,v144);
	v146=_mm256_add_pd(v142,v144);
	v147=_mm256_add_pd(v146,v3);
	v148=_mm256_div_pd(v145,v147);

	v149=_mm256_add_pd(v141,v148);
	v150=_mm256_set1_pd(1);
	v151=_mm256_add_pd(v142,v150);
	v152=_mm256_div_pd(v151,v142);

	v153=_mm256_add_pd(v149,v152);
	v154=_mm256_set1_pd(1);
	v155=_mm256_add_pd(v144,v154);
	v156=_mm256_div_pd(v155,v144);

	v157=_mm256_add_pd(v153,v156);
	v158=_mm256_mul_pd(v142,v144);
	v159=_mm256_mul_pd(v142,v144);
	v160=_mm256_set1_pd(1);
	v161=_mm256_add_pd(v159,v160);
	v162=_mm256_div_pd(v158,v161);

	v163=_mm256_add_pd(v157,v162);
	v164=v163;
	v165=v144;
	v166=_mm256_add_pd(v164,v3);
	v167=v166;
	v168=_mm256_add_pd(v165,v167);
	v169=_mm256_add_pd(v165,v167);
	v170=_mm256_add_pd(v169,v3);
	v171=_mm256_div_pd(v168,v170);

	v172=_mm256_add_pd(v164,v171);
	v173=_mm256_set1_pd(1);
	v174=_mm256_add_pd(v165,v173);
	v175=_mm256_div_pd(v174,v165);

	v176=_mm256_add_pd(v172,v175);
	v177=_mm256_set1_pd(1);
	v178=_mm256_add_pd(v167,v177);
	v179=_mm256_div_pd(v178,v167);

	v180=_mm256_add_pd(v176,v179);
	v181=_mm256_mul_pd(v165,v167);
	v182=_mm256_mul_pd(v165,v167);
	v183=_mm256_set1_pd(1);
	v184=_mm256_add_pd(v182,v183);
	v185=_mm256_div_pd(v181,v184);

	v186=_mm256_add_pd(v180,v185);
	v187=v186;
	v188=v167;
	v189=_mm256_add_pd(v187,v3);
	v190=v189;
	v191=_mm256_add_pd(v188,v190);
	v192=_mm256_add_pd(v188,v190);
	v193=_mm256_add_pd(v192,v3);
	v194=_mm256_div_pd(v191,v193);

	v195=_mm256_add_pd(v187,v194);
	v196=_mm256_set1_pd(1);
	v197=_mm256_add_pd(v188,v196);
	v198=_mm256_div_pd(v197,v188);

	v199=_mm256_add_pd(v195,v198);
	v200=_mm256_set1_pd(1);
	v201=_mm256_add_pd(v190,v200);
	v202=_mm256_div_pd(v201,v190);

	v203=_mm256_add_pd(v199,v202);
	v204=_mm256_mul_pd(v188,v190);
	v205=_mm256_mul_pd(v188,v190);
	v206=_mm256_set1_pd(1);
	v207=_mm256_add_pd(v205,v206);
	v208=_mm256_div_pd(v204,v207);

	v209=_mm256_add_pd(v203,v208);
	v210=v209;
	v211=v190;
	v212=_mm256_add_pd(v210,v3);
	v213=v212;
	v214=_mm256_add_pd(v211,v213);
	v215=_mm256_add_pd(v211,v213);
	v216=_mm256_add_pd(v215,v3);
	v217=_mm256_div_pd(v214,v216);

	v218=_mm256_add_pd(v210,v217);
	v219=_mm256_set1_pd(1);
	v220=_mm256_add_pd(v211,v219);
	v221=_mm256_div_pd(v220,v211);

	v222=_mm256_add_pd(v218,v221);
	v223=_mm256_set1_pd(1);
	v224=_mm256_add_pd(v213,v223);
	v225=_mm256_div_pd(v224,v213);

	v226=_mm256_add_pd(v222,v225);
	v227=_mm256_mul_pd(v211,v213);
	v228=_mm256_mul_pd(v211,v213);
	v229=_mm256_set1_pd(1);
	v230=_mm256_add_pd(v228,v229);
	v231=_mm256_div_pd(v227,v230);

	v232=_mm256_add_pd(v226,v231);
	v233=v232;
	v234=v213;
	v235=_mm256_add_pd(v233,v3);
	v236=v235;
	v237=_mm256_add_pd(v234,v236);
	v238=_mm256_add_pd(v234,v236);
	v239=_mm256_add_pd(v238,v3);
	v240=_mm256_div_pd(v237,v239);

	v241=_mm256_add_pd(v233,v240);
	v242=_mm256_set1_pd(1);
	v243=_mm256_add_pd(v234,v242);
	v244=_mm256_div_pd(v243,v234);

	v245=_mm256_add_pd(v241,v244);
	v246=_mm256_set1_pd(1);
	v247=_mm256_add_pd(v236,v246);
	v248=_mm256_div_pd(v247,v236);

	v249=_mm256_add_pd(v245,v248);
	v250=_mm256_mul_pd(v234,v236);
	v251=_mm256_mul_pd(v234,v236);
	v252=_mm256_set1_pd(1);
	v253=_mm256_add_pd(v251,v252);
	v254=_mm256_div_pd(v250,v253);

	v255=_mm256_add_pd(v249,v254);
	v256=v255;
	v257=v236;
	v258=_mm256_add_pd(v256,v3);
	v259=v258;
	v260=_mm256_add_pd(v257,v259);
	v261=_mm256_add_pd(v257,v259);
	v262=_mm256_add_pd(v261,v3);
	v263=_mm256_div_pd(v260,v262);

	v264=_mm256_add_pd(v256,v263);
	v265=_mm256_set1_pd(1);
	v266=_mm256_add_pd(v257,v265);
	v267=_mm256_div_pd(v266,v257);

	v268=_mm256_add_pd(v264,v267);
	v269=_mm256_set1_pd(1);
	v270=_mm256_add_pd(v259,v269);
	v271=_mm256_div_pd(v270,v259);

	v272=_mm256_add_pd(v268,v271);
	v273=_mm256_mul_pd(v257,v259);
	v274=_mm256_mul_pd(v257,v259);
	v275=_mm256_set1_pd(1);
	v276=_mm256_add_pd(v274,v275);
	v277=_mm256_div_pd(v273,v276);

	v278=_mm256_add_pd(v272,v277);
	v279=v278;
	v280=v259;
	v281=_mm256_add_pd(v279,v3);
	v282=v281;
	v283=_mm256_add_pd(v280,v282);
	v284=_mm256_add_pd(v280,v282);
	v285=_mm256_add_pd(v284,v3);
	v286=_mm256_div_pd(v283,v285);

	v287=_mm256_add_pd(v279,v286);
	v288=_mm256_set1_pd(1);
	v289=_mm256_add_pd(v280,v288);
	v290=_mm256_div_pd(v289,v280);

	v291=_mm256_add_pd(v287,v290);
	v292=_mm256_set1_pd(1);
	v293=_mm256_add_pd(v282,v292);
	v294=_mm256_div_pd(v293,v282);

	v295=_mm256_add_pd(v291,v294);
	v296=_mm256_mul_pd(v280,v282);
	v297=_mm256_mul_pd(v280,v282);
	v298=_mm256_set1_pd(1);
	v299=_mm256_add_pd(v297,v298);
	v300=_mm256_div_pd(v296,v299);

	v301=_mm256_add_pd(v295,v300);
	v302=v301;
	v303=v282;
	v304=_mm256_add_pd(v302,v3);
	v305=v304;
	v306=_mm256_add_pd(v303,v305);
	v307=_mm256_add_pd(v303,v305);
	v308=_mm256_add_pd(v307,v3);
	v309=_mm256_div_pd(v306,v308);

	v310=_mm256_add_pd(v302,v309);
	v311=_mm256_set1_pd(1);
	v312=_mm256_add_pd(v303,v311);
	v313=_mm256_div_pd(v312,v303);

	v314=_mm256_add_pd(v310,v313);
	v315=_mm256_set1_pd(1);
	v316=_mm256_add_pd(v305,v315);
	v317=_mm256_div_pd(v316,v305);

	v318=_mm256_add_pd(v314,v317);
	v319=_mm256_mul_pd(v303,v305);
	v320=_mm256_mul_pd(v303,v305);
	v321=_mm256_set1_pd(1);
	v322=_mm256_add_pd(v320,v321);
	v323=_mm256_div_pd(v319,v322);

	v324=_mm256_add_pd(v318,v323);
	v325=v324;
	v326=v305;
	v327=_mm256_add_pd(v325,v3);
	v328=v327;
	v329=_mm256_add_pd(v326,v328);
	v330=_mm256_add_pd(v326,v328);
	v331=_mm256_add_pd(v330,v3);
	v332=_mm256_div_pd(v329,v331);

	v333=_mm256_add_pd(v325,v332);
	v334=_mm256_set1_pd(1);
	v335=_mm256_add_pd(v326,v334);
	v336=_mm256_div_pd(v335,v326);

	v337=_mm256_add_pd(v333,v336);
	v338=_mm256_set1_pd(1);
	v339=_mm256_add_pd(v328,v338);
	v340=_mm256_div_pd(v339,v328);

	v341=_mm256_add_pd(v337,v340);
	v342=_mm256_mul_pd(v326,v328);
	v343=_mm256_mul_pd(v326,v328);
	v344=_mm256_set1_pd(1);
	v345=_mm256_add_pd(v343,v344);
	v346=_mm256_div_pd(v342,v345);

	v347=_mm256_add_pd(v341,v346);
	v348=v347;
	v349=v328;
	v350=_mm256_add_pd(v348,v3);
	v351=v350;
	v352=_mm256_add_pd(v349,v351);
	v353=_mm256_add_pd(v349,v351);
	v354=_mm256_add_pd(v353,v3);
	v355=_mm256_div_pd(v352,v354);

	v356=_mm256_add_pd(v348,v355);
	v357=_mm256_set1_pd(1);
	v358=_mm256_add_pd(v349,v357);
	v359=_mm256_div_pd(v358,v349);

	v360=_mm256_add_pd(v356,v359);
	v361=_mm256_set1_pd(1);
	v362=_mm256_add_pd(v351,v361);
	v363=_mm256_div_pd(v362,v351);

	v364=_mm256_add_pd(v360,v363);
	v365=_mm256_mul_pd(v349,v351);
	v366=_mm256_mul_pd(v349,v351);
	v367=_mm256_set1_pd(1);
	v368=_mm256_add_pd(v366,v367);
	v369=_mm256_div_pd(v365,v368);

	v370=_mm256_add_pd(v364,v369);
	v371=v370;
	v372=v351;
	v373=_mm256_add_pd(v371,v3);
	v374=v373;
	v375=_mm256_add_pd(v372,v374);
	v376=_mm256_add_pd(v372,v374);
	v377=_mm256_add_pd(v376,v3);
	v378=_mm256_div_pd(v375,v377);

	v379=_mm256_add_pd(v371,v378);
	v380=_mm256_set1_pd(1);
	v381=_mm256_add_pd(v372,v380);
	v382=_mm256_div_pd(v381,v372);

	v383=_mm256_add_pd(v379,v382);
	v384=_mm256_set1_pd(1);
	v385=_mm256_add_pd(v374,v384);
	v386=_mm256_div_pd(v385,v374);

	v387=_mm256_add_pd(v383,v386);
	v388=_mm256_mul_pd(v372,v374);
	v389=_mm256_mul_pd(v372,v374);
	v390=_mm256_set1_pd(1);
	v391=_mm256_add_pd(v389,v390);
	v392=_mm256_div_pd(v388,v391);

	v393=_mm256_add_pd(v387,v392);
	v394=v393;
	v395=v374;
	v396=_mm256_add_pd(v394,v3);
	v397=v396;
	v398=_mm256_add_pd(v395,v397);
	v399=_mm256_add_pd(v395,v397);
	v400=_mm256_add_pd(v399,v3);
	v401=_mm256_div_pd(v398,v400);

	v402=_mm256_add_pd(v394,v401);
	v403=_mm256_set1_pd(1);
	v404=_mm256_add_pd(v395,v403);
	v405=_mm256_div_pd(v404,v395);

	v406=_mm256_add_pd(v402,v405);
	v407=_mm256_set1_pd(1);
	v408=_mm256_add_pd(v397,v407);
	v409=_mm256_div_pd(v408,v397);

	v410=_mm256_add_pd(v406,v409);
	v411=_mm256_mul_pd(v395,v397);
	v412=_mm256_mul_pd(v395,v397);
	v413=_mm256_set1_pd(1);
	v414=_mm256_add_pd(v412,v413);
	v415=_mm256_div_pd(v411,v414);

	v416=_mm256_add_pd(v410,v415);
	v417=v416;
	v418=v397;
	v419=_mm256_add_pd(v417,v3);
	v420=v419;
	v421=_mm256_add_pd(v418,v420);
	v422=_mm256_add_pd(v418,v420);
	v423=_mm256_add_pd(v422,v3);
	v424=_mm256_div_pd(v421,v423);

	v425=_mm256_add_pd(v417,v424);
	v426=_mm256_set1_pd(1);
	v427=_mm256_add_pd(v418,v426);
	v428=_mm256_div_pd(v427,v418);

	v429=_mm256_add_pd(v425,v428);
	v430=_mm256_set1_pd(1);
	v431=_mm256_add_pd(v420,v430);
	v432=_mm256_div_pd(v431,v420);

	v433=_mm256_add_pd(v429,v432);
	v434=_mm256_mul_pd(v418,v420);
	v435=_mm256_mul_pd(v418,v420);
	v436=_mm256_set1_pd(1);
	v437=_mm256_add_pd(v435,v436);
	v438=_mm256_div_pd(v434,v437);

	v439=_mm256_add_pd(v433,v438);
	v440=v439;
	v441=v420;
	v442=_mm256_add_pd(v440,v3);
	v443=v442;
	v444=_mm256_add_pd(v441,v443);
	v445=_mm256_add_pd(v441,v443);
	v446=_mm256_add_pd(v445,v3);
	v447=_mm256_div_pd(v444,v446);

	v448=_mm256_add_pd(v440,v447);
	v449=_mm256_set1_pd(1);
	v450=_mm256_add_pd(v441,v449);
	v451=_mm256_div_pd(v450,v441);

	v452=_mm256_add_pd(v448,v451);
	v453=_mm256_set1_pd(1);
	v454=_mm256_add_pd(v443,v453);
	v455=_mm256_div_pd(v454,v443);

	v456=_mm256_add_pd(v452,v455);
	v457=_mm256_mul_pd(v441,v443);
	v458=_mm256_mul_pd(v441,v443);
	v459=_mm256_set1_pd(1);
	v460=_mm256_add_pd(v458,v459);
	v461=_mm256_div_pd(v457,v460);

	v462=_mm256_add_pd(v456,v461);
	v463=v462;
	v464=v443;
	v465=_mm256_add_pd(v463,v3);
	v466=v465;
	v467=_mm256_add_pd(v464,v466);
	v468=_mm256_add_pd(v464,v466);
	v469=_mm256_add_pd(v468,v3);
	v470=_mm256_div_pd(v467,v469);

	v471=_mm256_add_pd(v463,v470);
	v472=_mm256_set1_pd(1);
	v473=_mm256_add_pd(v464,v472);
	v474=_mm256_div_pd(v473,v464);

	v475=_mm256_add_pd(v471,v474);
	v476=_mm256_set1_pd(1);
	v477=_mm256_add_pd(v466,v476);
	v478=_mm256_div_pd(v477,v466);

	v479=_mm256_add_pd(v475,v478);
	v480=_mm256_mul_pd(v464,v466);
	v481=_mm256_mul_pd(v464,v466);
	v482=_mm256_set1_pd(1);
	v483=_mm256_add_pd(v481,v482);
	v484=_mm256_div_pd(v480,v483);

	v485=_mm256_add_pd(v479,v484);
	v486=v485;
	v487=v466;
	v488=_mm256_add_pd(v486,v3);
	v489=v488;
	v490=_mm256_add_pd(v487,v489);
	v491=_mm256_add_pd(v487,v489);
	v492=_mm256_add_pd(v491,v3);
	v493=_mm256_div_pd(v490,v492);

	v494=_mm256_add_pd(v486,v493);
	v495=_mm256_set1_pd(1);
	v496=_mm256_add_pd(v487,v495);
	v497=_mm256_div_pd(v496,v487);

	v498=_mm256_add_pd(v494,v497);
	v499=_mm256_set1_pd(1);
	v500=_mm256_add_pd(v489,v499);
	v501=_mm256_div_pd(v500,v489);

	v502=_mm256_add_pd(v498,v501);
	v503=_mm256_mul_pd(v487,v489);
	v504=_mm256_mul_pd(v487,v489);
	v505=_mm256_set1_pd(1);
	v506=_mm256_add_pd(v504,v505);
	v507=_mm256_div_pd(v503,v506);

	v508=_mm256_add_pd(v502,v507);
	v509=v508;
	v510=v489;
	v511=_mm256_add_pd(v509,v3);
	v512=v511;
	v513=_mm256_add_pd(v510,v512);
	v514=_mm256_add_pd(v510,v512);
	v515=_mm256_add_pd(v514,v3);
	v516=_mm256_div_pd(v513,v515);

	v517=_mm256_add_pd(v509,v516);
	v518=_mm256_set1_pd(1);
	v519=_mm256_add_pd(v510,v518);
	v520=_mm256_div_pd(v519,v510);

	v521=_mm256_add_pd(v517,v520);
	v522=_mm256_set1_pd(1);
	v523=_mm256_add_pd(v512,v522);
	v524=_mm256_div_pd(v523,v512);

	v525=_mm256_add_pd(v521,v524);
	v526=_mm256_mul_pd(v510,v512);
	v527=_mm256_mul_pd(v510,v512);
	v528=_mm256_set1_pd(1);
	v529=_mm256_add_pd(v527,v528);
	v530=_mm256_div_pd(v526,v529);

	v531=_mm256_add_pd(v525,v530);
	v532=v531;
	v533=v512;
	v534=_mm256_add_pd(v532,v3);
	v535=v534;
	v536=_mm256_add_pd(v533,v535);
	v537=_mm256_add_pd(v533,v535);
	v538=_mm256_add_pd(v537,v3);
	v539=_mm256_div_pd(v536,v538);

	v540=_mm256_add_pd(v532,v539);
	v541=_mm256_set1_pd(1);
	v542=_mm256_add_pd(v533,v541);
	v543=_mm256_div_pd(v542,v533);

	v544=_mm256_add_pd(v540,v543);
	v545=_mm256_set1_pd(1);
	v546=_mm256_add_pd(v535,v545);
	v547=_mm256_div_pd(v546,v535);

	v548=_mm256_add_pd(v544,v547);
	v549=_mm256_mul_pd(v533,v535);
	v550=_mm256_mul_pd(v533,v535);
	v551=_mm256_set1_pd(1);
	v552=_mm256_add_pd(v550,v551);
	v553=_mm256_div_pd(v549,v552);

	v554=_mm256_add_pd(v548,v553);
	v555=v554;
	v556=v535;
	v557=_mm256_add_pd(v555,v3);
	v558=v557;
	v559=_mm256_add_pd(v556,v558);
	v560=_mm256_add_pd(v556,v558);
	v561=_mm256_add_pd(v560,v3);
	v562=_mm256_div_pd(v559,v561);

	v563=_mm256_add_pd(v555,v562);
	v564=_mm256_set1_pd(1);
	v565=_mm256_add_pd(v556,v564);
	v566=_mm256_div_pd(v565,v556);

	v567=_mm256_add_pd(v563,v566);
	v568=_mm256_set1_pd(1);
	v569=_mm256_add_pd(v558,v568);
	v570=_mm256_div_pd(v569,v558);

	v571=_mm256_add_pd(v567,v570);
	v572=_mm256_mul_pd(v556,v558);
	v573=_mm256_mul_pd(v556,v558);
	v574=_mm256_set1_pd(1);
	v575=_mm256_add_pd(v573,v574);
	v576=_mm256_div_pd(v572,v575);

	v577=_mm256_add_pd(v571,v576);
	v578=v577;
	v579=v558;
	v580=_mm256_add_pd(v578,v3);
	v581=v580;
	v582=_mm256_add_pd(v579,v581);
	v583=_mm256_add_pd(v579,v581);
	v584=_mm256_add_pd(v583,v3);
	v585=_mm256_div_pd(v582,v584);

	v586=_mm256_add_pd(v578,v585);
	v587=_mm256_set1_pd(1);
	v588=_mm256_add_pd(v579,v587);
	v589=_mm256_div_pd(v588,v579);

	v590=_mm256_add_pd(v586,v589);
	v591=_mm256_set1_pd(1);
	v592=_mm256_add_pd(v581,v591);
	v593=_mm256_div_pd(v592,v581);

	v594=_mm256_add_pd(v590,v593);
	v595=_mm256_mul_pd(v579,v581);
	v596=_mm256_mul_pd(v579,v581);
	v597=_mm256_set1_pd(1);
	v598=_mm256_add_pd(v596,v597);
	v599=_mm256_div_pd(v595,v598);

	v600=_mm256_add_pd(v594,v599);
	v601=v600;
	v602=v581;
	v603=_mm256_add_pd(v601,v3);
	v604=v603;
	v605=_mm256_add_pd(v602,v604);
	v606=_mm256_add_pd(v602,v604);
	v607=_mm256_add_pd(v606,v3);
	v608=_mm256_div_pd(v605,v607);

	v609=_mm256_add_pd(v601,v608);
	v610=_mm256_set1_pd(1);
	v611=_mm256_add_pd(v602,v610);
	v612=_mm256_div_pd(v611,v602);

	v613=_mm256_add_pd(v609,v612);
	v614=_mm256_set1_pd(1);
	v615=_mm256_add_pd(v604,v614);
	v616=_mm256_div_pd(v615,v604);

	v617=_mm256_add_pd(v613,v616);
	v618=_mm256_mul_pd(v602,v604);
	v619=_mm256_mul_pd(v602,v604);
	v620=_mm256_set1_pd(1);
	v621=_mm256_add_pd(v619,v620);
	v622=_mm256_div_pd(v618,v621);

	v623=_mm256_add_pd(v617,v622);
	v624=v623;
	v625=v604;
	v626=_mm256_add_pd(v624,v3);
	v627=v626;
	v628=_mm256_add_pd(v625,v627);
	v629=_mm256_add_pd(v625,v627);
	v630=_mm256_add_pd(v629,v3);
	v631=_mm256_div_pd(v628,v630);

	v632=_mm256_add_pd(v624,v631);
	v633=_mm256_set1_pd(1);
	v634=_mm256_add_pd(v625,v633);
	v635=_mm256_div_pd(v634,v625);

	v636=_mm256_add_pd(v632,v635);
	v637=_mm256_set1_pd(1);
	v638=_mm256_add_pd(v627,v637);
	v639=_mm256_div_pd(v638,v627);

	v640=_mm256_add_pd(v636,v639);
	v641=_mm256_mul_pd(v625,v627);
	v642=_mm256_mul_pd(v625,v627);
	v643=_mm256_set1_pd(1);
	v644=_mm256_add_pd(v642,v643);
	v645=_mm256_div_pd(v641,v644);

	v646=_mm256_add_pd(v640,v645);
	v647=v646;
	v648=v627;
	v649=_mm256_add_pd(v647,v3);
	v650=v649;
	v651=_mm256_add_pd(v648,v650);
	v652=_mm256_add_pd(v648,v650);
	v653=_mm256_add_pd(v652,v3);
	v654=_mm256_div_pd(v651,v653);

	v655=_mm256_add_pd(v647,v654);
	v656=_mm256_set1_pd(1);
	v657=_mm256_add_pd(v648,v656);
	v658=_mm256_div_pd(v657,v648);

	v659=_mm256_add_pd(v655,v658);
	v660=_mm256_set1_pd(1);
	v661=_mm256_add_pd(v650,v660);
	v662=_mm256_div_pd(v661,v650);

	v663=_mm256_add_pd(v659,v662);
	v664=_mm256_mul_pd(v648,v650);
	v665=_mm256_mul_pd(v648,v650);
	v666=_mm256_set1_pd(1);
	v667=_mm256_add_pd(v665,v666);
	v668=_mm256_div_pd(v664,v667);

	v669=_mm256_add_pd(v663,v668);
	v670=v669;
	v671=v650;
	v672=_mm256_add_pd(v670,v3);
	v673=v672;
	v674=_mm256_add_pd(v671,v673);
	v675=_mm256_add_pd(v671,v673);
	v676=_mm256_add_pd(v675,v3);
	v677=_mm256_div_pd(v674,v676);

	v678=_mm256_add_pd(v670,v677);
	v679=_mm256_set1_pd(1);
	v680=_mm256_add_pd(v671,v679);
	v681=_mm256_div_pd(v680,v671);

	v682=_mm256_add_pd(v678,v681);
	v683=_mm256_set1_pd(1);
	v684=_mm256_add_pd(v673,v683);
	v685=_mm256_div_pd(v684,v673);

	v686=_mm256_add_pd(v682,v685);
	v687=_mm256_mul_pd(v671,v673);
	v688=_mm256_mul_pd(v671,v673);
	v689=_mm256_set1_pd(1);
	v690=_mm256_add_pd(v688,v689);
	v691=_mm256_div_pd(v687,v690);

	v692=_mm256_add_pd(v686,v691);
	v693=v692;
	v694=v673;
	v695=_mm256_add_pd(v693,v3);
	v696=v695;
	v697=_mm256_add_pd(v694,v696);
	v698=_mm256_add_pd(v694,v696);
	v699=_mm256_add_pd(v698,v3);
	v700=_mm256_div_pd(v697,v699);

	v701=_mm256_add_pd(v693,v700);
	v702=_mm256_set1_pd(1);
	v703=_mm256_add_pd(v694,v702);
	v704=_mm256_div_pd(v703,v694);

	v705=_mm256_add_pd(v701,v704);
	v706=_mm256_set1_pd(1);
	v707=_mm256_add_pd(v696,v706);
	v708=_mm256_div_pd(v707,v696);

	v709=_mm256_add_pd(v705,v708);
	v710=_mm256_mul_pd(v694,v696);
	v711=_mm256_mul_pd(v694,v696);
	v712=_mm256_set1_pd(1);
	v713=_mm256_add_pd(v711,v712);
	v714=_mm256_div_pd(v710,v713);

	v715=_mm256_add_pd(v709,v714);
	v716=v715;
	v717=v696;
	v718=_mm256_add_pd(v716,v3);
	v719=v718;
	v720=_mm256_add_pd(v717,v719);
	v721=_mm256_add_pd(v717,v719);
	v722=_mm256_add_pd(v721,v3);
	v723=_mm256_div_pd(v720,v722);

	v724=_mm256_add_pd(v716,v723);
	v725=_mm256_set1_pd(1);
	v726=_mm256_add_pd(v717,v725);
	v727=_mm256_div_pd(v726,v717);

	v728=_mm256_add_pd(v724,v727);
	v729=_mm256_set1_pd(1);
	v730=_mm256_add_pd(v719,v729);
	v731=_mm256_div_pd(v730,v719);

	v732=_mm256_add_pd(v728,v731);
	v733=_mm256_mul_pd(v717,v719);
	v734=_mm256_mul_pd(v717,v719);
	v735=_mm256_set1_pd(1);
	v736=_mm256_add_pd(v734,v735);
	v737=_mm256_div_pd(v733,v736);

	v738=_mm256_add_pd(v732,v737);
	v739=v738;
	v740=v719;
	v741=_mm256_add_pd(v739,v3);
	v742=v741;
	v743=_mm256_add_pd(v740,v742);
	v744=_mm256_add_pd(v740,v742);
	v745=_mm256_add_pd(v744,v3);
	v746=_mm256_div_pd(v743,v745);

	v747=_mm256_add_pd(v739,v746);
	v748=_mm256_set1_pd(1);
	v749=_mm256_add_pd(v740,v748);
	v750=_mm256_div_pd(v749,v740);

	v751=_mm256_add_pd(v747,v750);
	v752=_mm256_set1_pd(1);
	v753=_mm256_add_pd(v742,v752);
	v754=_mm256_div_pd(v753,v742);

	v755=_mm256_add_pd(v751,v754);
	v756=_mm256_mul_pd(v740,v742);
	v757=_mm256_mul_pd(v740,v742);
	v758=_mm256_set1_pd(1);
	v759=_mm256_add_pd(v757,v758);
	v760=_mm256_div_pd(v756,v759);

	v761=_mm256_add_pd(v755,v760);
	v762=v761;
	v763=v742;
	v764=_mm256_add_pd(v762,v3);
	v765=v764;
	v766=_mm256_add_pd(v763,v765);
	v767=_mm256_add_pd(v763,v765);
	v768=_mm256_add_pd(v767,v3);
	v769=_mm256_div_pd(v766,v768);

	v770=_mm256_add_pd(v762,v769);
	v771=_mm256_set1_pd(1);
	v772=_mm256_add_pd(v763,v771);
	v773=_mm256_div_pd(v772,v763);

	v774=_mm256_add_pd(v770,v773);
	v775=_mm256_set1_pd(1);
	v776=_mm256_add_pd(v765,v775);
	v777=_mm256_div_pd(v776,v765);

	v778=_mm256_add_pd(v774,v777);
	v779=_mm256_mul_pd(v763,v765);
	v780=_mm256_mul_pd(v763,v765);
	v781=_mm256_set1_pd(1);
	v782=_mm256_add_pd(v780,v781);
	v783=_mm256_div_pd(v779,v782);

	v784=_mm256_add_pd(v778,v783);
	v785=v784;
	v786=v765;
	v787=_mm256_add_pd(v785,v3);
	v788=v787;
	v789=_mm256_add_pd(v786,v788);
	v790=_mm256_add_pd(v786,v788);
	v791=_mm256_add_pd(v790,v3);
	v792=_mm256_div_pd(v789,v791);

	v793=_mm256_add_pd(v785,v792);
	v794=_mm256_set1_pd(1);
	v795=_mm256_add_pd(v786,v794);
	v796=_mm256_div_pd(v795,v786);

	v797=_mm256_add_pd(v793,v796);
	v798=_mm256_set1_pd(1);
	v799=_mm256_add_pd(v788,v798);
	v800=_mm256_div_pd(v799,v788);

	v801=_mm256_add_pd(v797,v800);
	v802=_mm256_mul_pd(v786,v788);
	v803=_mm256_mul_pd(v786,v788);
	v804=_mm256_set1_pd(1);
	v805=_mm256_add_pd(v803,v804);
	v806=_mm256_div_pd(v802,v805);

	v807=_mm256_add_pd(v801,v806);
	v808=v807;
	v809=v788;
	v810=_mm256_add_pd(v808,v3);
	v811=v810;
	v812=_mm256_add_pd(v809,v811);
	v813=_mm256_add_pd(v809,v811);
	v814=_mm256_add_pd(v813,v3);
	v815=_mm256_div_pd(v812,v814);

	v816=_mm256_add_pd(v808,v815);
	v817=_mm256_set1_pd(1);
	v818=_mm256_add_pd(v809,v817);
	v819=_mm256_div_pd(v818,v809);

	v820=_mm256_add_pd(v816,v819);
	v821=_mm256_set1_pd(1);
	v822=_mm256_add_pd(v811,v821);
	v823=_mm256_div_pd(v822,v811);

	v824=_mm256_add_pd(v820,v823);
	v825=_mm256_mul_pd(v809,v811);
	v826=_mm256_mul_pd(v809,v811);
	v827=_mm256_set1_pd(1);
	v828=_mm256_add_pd(v826,v827);
	v829=_mm256_div_pd(v825,v828);

	v830=_mm256_add_pd(v824,v829);
	v831=v830;
	v832=v811;
	v833=_mm256_add_pd(v831,v3);
	v834=v833;
	v835=_mm256_add_pd(v832,v834);
	v836=_mm256_add_pd(v832,v834);
	v837=_mm256_add_pd(v836,v3);
	v838=_mm256_div_pd(v835,v837);

	v839=_mm256_add_pd(v831,v838);
	v840=_mm256_set1_pd(1);
	v841=_mm256_add_pd(v832,v840);
	v842=_mm256_div_pd(v841,v832);

	v843=_mm256_add_pd(v839,v842);
	v844=_mm256_set1_pd(1);
	v845=_mm256_add_pd(v834,v844);
	v846=_mm256_div_pd(v845,v834);

	v847=_mm256_add_pd(v843,v846);
	v848=_mm256_mul_pd(v832,v834);
	v849=_mm256_mul_pd(v832,v834);
	v850=_mm256_set1_pd(1);
	v851=_mm256_add_pd(v849,v850);
	v852=_mm256_div_pd(v848,v851);

	v853=_mm256_add_pd(v847,v852);
	v854=v853;
	v855=v834;
	v856=_mm256_add_pd(v854,v3);
	v857=v856;
	v858=_mm256_add_pd(v855,v857);
	v859=_mm256_add_pd(v855,v857);
	v860=_mm256_add_pd(v859,v3);
	v861=_mm256_div_pd(v858,v860);

	v862=_mm256_add_pd(v854,v861);
	v863=_mm256_set1_pd(1);
	v864=_mm256_add_pd(v855,v863);
	v865=_mm256_div_pd(v864,v855);

	v866=_mm256_add_pd(v862,v865);
	v867=_mm256_set1_pd(1);
	v868=_mm256_add_pd(v857,v867);
	v869=_mm256_div_pd(v868,v857);

	v870=_mm256_add_pd(v866,v869);
	v871=_mm256_mul_pd(v855,v857);
	v872=_mm256_mul_pd(v855,v857);
	v873=_mm256_set1_pd(1);
	v874=_mm256_add_pd(v872,v873);
	v875=_mm256_div_pd(v871,v874);

	v876=_mm256_add_pd(v870,v875);
	v877=v876;
	v878=v857;
	v879=_mm256_add_pd(v877,v3);
	v880=v879;
	v881=_mm256_add_pd(v878,v880);
	v882=_mm256_add_pd(v878,v880);
	v883=_mm256_add_pd(v882,v3);
	v884=_mm256_div_pd(v881,v883);

	v885=_mm256_add_pd(v877,v884);
	v886=_mm256_set1_pd(1);
	v887=_mm256_add_pd(v878,v886);
	v888=_mm256_div_pd(v887,v878);

	v889=_mm256_add_pd(v885,v888);
	v890=_mm256_set1_pd(1);
	v891=_mm256_add_pd(v880,v890);
	v892=_mm256_div_pd(v891,v880);

	v893=_mm256_add_pd(v889,v892);
	v894=_mm256_mul_pd(v878,v880);
	v895=_mm256_mul_pd(v878,v880);
	v896=_mm256_set1_pd(1);
	v897=_mm256_add_pd(v895,v896);
	v898=_mm256_div_pd(v894,v897);

	v899=_mm256_add_pd(v893,v898);
	v900=v899;
	v901=v880;
	v902=_mm256_add_pd(v900,v3);
	v903=v902;
	v904=_mm256_add_pd(v901,v903);
	v905=_mm256_add_pd(v901,v903);
	v906=_mm256_add_pd(v905,v3);
	v907=_mm256_div_pd(v904,v906);

	v908=_mm256_add_pd(v900,v907);
	v909=_mm256_set1_pd(1);
	v910=_mm256_add_pd(v901,v909);
	v911=_mm256_div_pd(v910,v901);

	v912=_mm256_add_pd(v908,v911);
	v913=_mm256_set1_pd(1);
	v914=_mm256_add_pd(v903,v913);
	v915=_mm256_div_pd(v914,v903);

	v916=_mm256_add_pd(v912,v915);
	v917=_mm256_mul_pd(v901,v903);
	v918=_mm256_mul_pd(v901,v903);
	v919=_mm256_set1_pd(1);
	v920=_mm256_add_pd(v918,v919);
	v921=_mm256_div_pd(v917,v920);

	v922=_mm256_add_pd(v916,v921);
	v923=v922;
	v924=v903;
	v925=_mm256_add_pd(v923,v3);
	v926=v925;
	v927=_mm256_add_pd(v924,v926);
	v928=_mm256_add_pd(v924,v926);
	v929=_mm256_add_pd(v928,v3);
	v930=_mm256_div_pd(v927,v929);

	v931=_mm256_add_pd(v923,v930);
	v932=_mm256_set1_pd(1);
	v933=_mm256_add_pd(v924,v932);
	v934=_mm256_div_pd(v933,v924);

	v935=_mm256_add_pd(v931,v934);
	v936=_mm256_set1_pd(1);
	v937=_mm256_add_pd(v926,v936);
	v938=_mm256_div_pd(v937,v926);

	v939=_mm256_add_pd(v935,v938);
	v940=_mm256_mul_pd(v924,v926);
	v941=_mm256_mul_pd(v924,v926);
	v942=_mm256_set1_pd(1);
	v943=_mm256_add_pd(v941,v942);
	v944=_mm256_div_pd(v940,v943);

	v945=_mm256_add_pd(v939,v944);
	v946=v945;
	v947=v926;
	v948=_mm256_add_pd(v946,v3);
	v949=v948;
	v950=_mm256_add_pd(v947,v949);
	v951=_mm256_add_pd(v947,v949);
	v952=_mm256_add_pd(v951,v3);
	v953=_mm256_div_pd(v950,v952);

	v954=_mm256_add_pd(v946,v953);
	v955=_mm256_set1_pd(1);
	v956=_mm256_add_pd(v947,v955);
	v957=_mm256_div_pd(v956,v947);

	v958=_mm256_add_pd(v954,v957);
	v959=_mm256_set1_pd(1);
	v960=_mm256_add_pd(v949,v959);
	v961=_mm256_div_pd(v960,v949);

	v962=_mm256_add_pd(v958,v961);
	v963=_mm256_mul_pd(v947,v949);
	v964=_mm256_mul_pd(v947,v949);
	v965=_mm256_set1_pd(1);
	v966=_mm256_add_pd(v964,v965);
	v967=_mm256_div_pd(v963,v966);

	v968=_mm256_add_pd(v962,v967);
	v969=v968;
	v970=v949;
	v971=_mm256_add_pd(v969,v3);
	v972=v971;
	v973=_mm256_add_pd(v970,v972);
	v974=_mm256_add_pd(v970,v972);
	v975=_mm256_add_pd(v974,v3);
	v976=_mm256_div_pd(v973,v975);

	v977=_mm256_add_pd(v969,v976);
	v978=_mm256_set1_pd(1);
	v979=_mm256_add_pd(v970,v978);
	v980=_mm256_div_pd(v979,v970);

	v981=_mm256_add_pd(v977,v980);
	v982=_mm256_set1_pd(1);
	v983=_mm256_add_pd(v972,v982);
	v984=_mm256_div_pd(v983,v972);

	v985=_mm256_add_pd(v981,v984);
	v986=_mm256_mul_pd(v970,v972);
	v987=_mm256_mul_pd(v970,v972);
	v988=_mm256_set1_pd(1);
	v989=_mm256_add_pd(v987,v988);
	v990=_mm256_div_pd(v986,v989);

	v991=_mm256_add_pd(v985,v990);
	v992=v991;
	v993=v972;
	v994=_mm256_add_pd(v992,v3);
	v995=v994;
	v996=_mm256_add_pd(v993,v995);
	v997=_mm256_add_pd(v993,v995);
	v998=_mm256_add_pd(v997,v3);
	v999=_mm256_div_pd(v996,v998);

	v1000=_mm256_add_pd(v992,v999);
	v1001=_mm256_set1_pd(1);
	v1002=_mm256_add_pd(v993,v1001);
	v1003=_mm256_div_pd(v1002,v993);

	v1004=_mm256_add_pd(v1000,v1003);
	v1005=_mm256_set1_pd(1);
	v1006=_mm256_add_pd(v995,v1005);
	v1007=_mm256_div_pd(v1006,v995);

	v1008=_mm256_add_pd(v1004,v1007);
	v1009=_mm256_mul_pd(v993,v995);
	v1010=_mm256_mul_pd(v993,v995);
	v1011=_mm256_set1_pd(1);
	v1012=_mm256_add_pd(v1010,v1011);
	v1013=_mm256_div_pd(v1009,v1012);

	v1014=_mm256_add_pd(v1008,v1013);
	v1015=v1014;
	v1016=v995;
	v1017=_mm256_add_pd(v1015,v3);
	v1018=v1017;
	v1019=_mm256_add_pd(v1016,v1018);
	v1020=_mm256_add_pd(v1016,v1018);
	v1021=_mm256_add_pd(v1020,v3);
	v1022=_mm256_div_pd(v1019,v1021);

	v1023=_mm256_add_pd(v1015,v1022);
	v1024=_mm256_set1_pd(1);
	v1025=_mm256_add_pd(v1016,v1024);
	v1026=_mm256_div_pd(v1025,v1016);

	v1027=_mm256_add_pd(v1023,v1026);
	v1028=_mm256_set1_pd(1);
	v1029=_mm256_add_pd(v1018,v1028);
	v1030=_mm256_div_pd(v1029,v1018);

	v1031=_mm256_add_pd(v1027,v1030);
	v1032=_mm256_mul_pd(v1016,v1018);
	v1033=_mm256_mul_pd(v1016,v1018);
	v1034=_mm256_set1_pd(1);
	v1035=_mm256_add_pd(v1033,v1034);
	v1036=_mm256_div_pd(v1032,v1035);

	v1037=_mm256_add_pd(v1031,v1036);
	v1038=v1037;
	v1039=v1018;
	v1040=_mm256_add_pd(v1038,v3);
	v1041=v1040;
	v1042=_mm256_add_pd(v1039,v1041);
	v1043=_mm256_add_pd(v1039,v1041);
	v1044=_mm256_add_pd(v1043,v3);
	v1045=_mm256_div_pd(v1042,v1044);

	v1046=_mm256_add_pd(v1038,v1045);
	v1047=_mm256_set1_pd(1);
	v1048=_mm256_add_pd(v1039,v1047);
	v1049=_mm256_div_pd(v1048,v1039);

	v1050=_mm256_add_pd(v1046,v1049);
	v1051=_mm256_set1_pd(1);
	v1052=_mm256_add_pd(v1041,v1051);
	v1053=_mm256_div_pd(v1052,v1041);

	v1054=_mm256_add_pd(v1050,v1053);
	v1055=_mm256_mul_pd(v1039,v1041);
	v1056=_mm256_mul_pd(v1039,v1041);
	v1057=_mm256_set1_pd(1);
	v1058=_mm256_add_pd(v1056,v1057);
	v1059=_mm256_div_pd(v1055,v1058);

	v1060=_mm256_add_pd(v1054,v1059);
	v1061=v1060;
	v1062=v1041;
	v1063=_mm256_add_pd(v1061,v3);
	v1064=v1063;
	v1065=_mm256_add_pd(v1062,v1064);
	v1066=_mm256_add_pd(v1062,v1064);
	v1067=_mm256_add_pd(v1066,v3);
	v1068=_mm256_div_pd(v1065,v1067);

	v1069=_mm256_add_pd(v1061,v1068);
	v1070=_mm256_set1_pd(1);
	v1071=_mm256_add_pd(v1062,v1070);
	v1072=_mm256_div_pd(v1071,v1062);

	v1073=_mm256_add_pd(v1069,v1072);
	v1074=_mm256_set1_pd(1);
	v1075=_mm256_add_pd(v1064,v1074);
	v1076=_mm256_div_pd(v1075,v1064);

	v1077=_mm256_add_pd(v1073,v1076);
	v1078=_mm256_mul_pd(v1062,v1064);
	v1079=_mm256_mul_pd(v1062,v1064);
	v1080=_mm256_set1_pd(1);
	v1081=_mm256_add_pd(v1079,v1080);
	v1082=_mm256_div_pd(v1078,v1081);

	v1083=_mm256_add_pd(v1077,v1082);
	v1084=v1083;
	v1085=v1064;
	v1086=_mm256_add_pd(v1084,v3);
	v1087=v1086;
	v1088=_mm256_add_pd(v1085,v1087);
	v1089=_mm256_add_pd(v1085,v1087);
	v1090=_mm256_add_pd(v1089,v3);
	v1091=_mm256_div_pd(v1088,v1090);

	v1092=_mm256_add_pd(v1084,v1091);
	v1093=_mm256_set1_pd(1);
	v1094=_mm256_add_pd(v1085,v1093);
	v1095=_mm256_div_pd(v1094,v1085);

	v1096=_mm256_add_pd(v1092,v1095);
	v1097=_mm256_set1_pd(1);
	v1098=_mm256_add_pd(v1087,v1097);
	v1099=_mm256_div_pd(v1098,v1087);

	v1100=_mm256_add_pd(v1096,v1099);
	v1101=_mm256_mul_pd(v1085,v1087);
	v1102=_mm256_mul_pd(v1085,v1087);
	v1103=_mm256_set1_pd(1);
	v1104=_mm256_add_pd(v1102,v1103);
	v1105=_mm256_div_pd(v1101,v1104);

	v1106=_mm256_add_pd(v1100,v1105);
	v1107=v1106;
	v1108=v1087;
	v1109=_mm256_add_pd(v1107,v3);
	v1110=v1109;
	v1111=_mm256_add_pd(v1108,v1110);
	v1112=_mm256_add_pd(v1108,v1110);
	v1113=_mm256_add_pd(v1112,v3);
	v1114=_mm256_div_pd(v1111,v1113);

	v1115=_mm256_add_pd(v1107,v1114);
	v1116=_mm256_set1_pd(1);
	v1117=_mm256_add_pd(v1108,v1116);
	v1118=_mm256_div_pd(v1117,v1108);

	v1119=_mm256_add_pd(v1115,v1118);
	v1120=_mm256_set1_pd(1);
	v1121=_mm256_add_pd(v1110,v1120);
	v1122=_mm256_div_pd(v1121,v1110);

	v1123=_mm256_add_pd(v1119,v1122);
	v1124=_mm256_mul_pd(v1108,v1110);
	v1125=_mm256_mul_pd(v1108,v1110);
	v1126=_mm256_set1_pd(1);
	v1127=_mm256_add_pd(v1125,v1126);
	v1128=_mm256_div_pd(v1124,v1127);

	v1129=_mm256_add_pd(v1123,v1128);
	v1130=v1129;
	v1131=v1110;
	v1132=_mm256_add_pd(v1130,v3);
	v1133=v1132;
	v1134=_mm256_add_pd(v1131,v1133);
	v1135=_mm256_add_pd(v1131,v1133);
	v1136=_mm256_add_pd(v1135,v3);
	v1137=_mm256_div_pd(v1134,v1136);

	v1138=_mm256_add_pd(v1130,v1137);
	v1139=_mm256_set1_pd(1);
	v1140=_mm256_add_pd(v1131,v1139);
	v1141=_mm256_div_pd(v1140,v1131);

	v1142=_mm256_add_pd(v1138,v1141);
	v1143=_mm256_set1_pd(1);
	v1144=_mm256_add_pd(v1133,v1143);
	v1145=_mm256_div_pd(v1144,v1133);

	v1146=_mm256_add_pd(v1142,v1145);
	v1147=_mm256_mul_pd(v1131,v1133);
	v1148=_mm256_mul_pd(v1131,v1133);
	v1149=_mm256_set1_pd(1);
	v1150=_mm256_add_pd(v1148,v1149);
	v1151=_mm256_div_pd(v1147,v1150);

	v1152=_mm256_add_pd(v1146,v1151);
	v1153=v1152;
	v1154=v1133;
	v1155=_mm256_add_pd(v1153,v3);
	v1156=v1155;
	v1157=_mm256_add_pd(v1154,v1156);
	v1158=_mm256_add_pd(v1154,v1156);
	v1159=_mm256_add_pd(v1158,v3);
	v1160=_mm256_div_pd(v1157,v1159);

	v1161=_mm256_add_pd(v1153,v1160);
	v1162=_mm256_set1_pd(1);
	v1163=_mm256_add_pd(v1154,v1162);
	v1164=_mm256_div_pd(v1163,v1154);

	v1165=_mm256_add_pd(v1161,v1164);
	v1166=_mm256_set1_pd(1);
	v1167=_mm256_add_pd(v1156,v1166);
	v1168=_mm256_div_pd(v1167,v1156);

	v1169=_mm256_add_pd(v1165,v1168);
	v1170=_mm256_mul_pd(v1154,v1156);
	v1171=_mm256_mul_pd(v1154,v1156);
	v1172=_mm256_set1_pd(1);
	v1173=_mm256_add_pd(v1171,v1172);
	v1174=_mm256_div_pd(v1170,v1173);

	v1175=_mm256_add_pd(v1169,v1174);
	v1176=v1175;
	v1177=v1156;
	v1178=_mm256_add_pd(v1176,v3);
	v1179=v1178;
	v1180=_mm256_add_pd(v1177,v1179);
	v1181=_mm256_add_pd(v1177,v1179);
	v1182=_mm256_add_pd(v1181,v3);
	v1183=_mm256_div_pd(v1180,v1182);

	v1184=_mm256_add_pd(v1176,v1183);
	v1185=_mm256_set1_pd(1);
	v1186=_mm256_add_pd(v1177,v1185);
	v1187=_mm256_div_pd(v1186,v1177);

	v1188=_mm256_add_pd(v1184,v1187);
	v1189=_mm256_set1_pd(1);
	v1190=_mm256_add_pd(v1179,v1189);
	v1191=_mm256_div_pd(v1190,v1179);

	v1192=_mm256_add_pd(v1188,v1191);
	v1193=_mm256_mul_pd(v1177,v1179);
	v1194=_mm256_mul_pd(v1177,v1179);
	v1195=_mm256_set1_pd(1);
	v1196=_mm256_add_pd(v1194,v1195);
	v1197=_mm256_div_pd(v1193,v1196);

	v1198=_mm256_add_pd(v1192,v1197);
	v1199=v1198;
	v1200=v1179;
	v1201=_mm256_add_pd(v1199,v3);
	v1202=v1201;
	v1203=_mm256_add_pd(v1200,v1202);
	v1204=_mm256_add_pd(v1200,v1202);
	v1205=_mm256_add_pd(v1204,v3);
	v1206=_mm256_div_pd(v1203,v1205);

	v1207=_mm256_add_pd(v1199,v1206);
	v1208=_mm256_set1_pd(1);
	v1209=_mm256_add_pd(v1200,v1208);
	v1210=_mm256_div_pd(v1209,v1200);

	v1211=_mm256_add_pd(v1207,v1210);
	v1212=_mm256_set1_pd(1);
	v1213=_mm256_add_pd(v1202,v1212);
	v1214=_mm256_div_pd(v1213,v1202);

	v1215=_mm256_add_pd(v1211,v1214);
	v1216=_mm256_mul_pd(v1200,v1202);
	v1217=_mm256_mul_pd(v1200,v1202);
	v1218=_mm256_set1_pd(1);
	v1219=_mm256_add_pd(v1217,v1218);
	v1220=_mm256_div_pd(v1216,v1219);

	v1221=_mm256_add_pd(v1215,v1220);
	v1222=v1221;
	v1223=v1202;
	v1224=_mm256_add_pd(v1222,v3);
	v1225=v1224;
	v1226=_mm256_add_pd(v1223,v1225);
	v1227=_mm256_add_pd(v1223,v1225);
	v1228=_mm256_add_pd(v1227,v3);
	v1229=_mm256_div_pd(v1226,v1228);

	v1230=_mm256_add_pd(v1222,v1229);
	v1231=_mm256_set1_pd(1);
	v1232=_mm256_add_pd(v1223,v1231);
	v1233=_mm256_div_pd(v1232,v1223);

	v1234=_mm256_add_pd(v1230,v1233);
	v1235=_mm256_set1_pd(1);
	v1236=_mm256_add_pd(v1225,v1235);
	v1237=_mm256_div_pd(v1236,v1225);

	v1238=_mm256_add_pd(v1234,v1237);
	v1239=_mm256_mul_pd(v1223,v1225);
	v1240=_mm256_mul_pd(v1223,v1225);
	v1241=_mm256_set1_pd(1);
	v1242=_mm256_add_pd(v1240,v1241);
	v1243=_mm256_div_pd(v1239,v1242);

	v1244=_mm256_add_pd(v1238,v1243);
	v1245=v1244;
	v1246=v1225;
	v1247=_mm256_add_pd(v1245,v3);
	v1248=v1247;
	v1249=_mm256_add_pd(v1246,v1248);
	v1250=_mm256_add_pd(v1246,v1248);
	v1251=_mm256_add_pd(v1250,v3);
	v1252=_mm256_div_pd(v1249,v1251);

	v1253=_mm256_add_pd(v1245,v1252);
	v1254=_mm256_set1_pd(1);
	v1255=_mm256_add_pd(v1246,v1254);
	v1256=_mm256_div_pd(v1255,v1246);

	v1257=_mm256_add_pd(v1253,v1256);
	v1258=_mm256_set1_pd(1);
	v1259=_mm256_add_pd(v1248,v1258);
	v1260=_mm256_div_pd(v1259,v1248);

	v1261=_mm256_add_pd(v1257,v1260);
	v1262=_mm256_mul_pd(v1246,v1248);
	v1263=_mm256_mul_pd(v1246,v1248);
	v1264=_mm256_set1_pd(1);
	v1265=_mm256_add_pd(v1263,v1264);
	v1266=_mm256_div_pd(v1262,v1265);

	v1267=_mm256_add_pd(v1261,v1266);
	v1268=v1267;
	v1269=v1248;
	v1270=_mm256_add_pd(v1268,v3);
	v1271=v1270;
	v1272=_mm256_add_pd(v1269,v1271);
	v1273=_mm256_add_pd(v1269,v1271);
	v1274=_mm256_add_pd(v1273,v3);
	v1275=_mm256_div_pd(v1272,v1274);

	v1276=_mm256_add_pd(v1268,v1275);
	v1277=_mm256_set1_pd(1);
	v1278=_mm256_add_pd(v1269,v1277);
	v1279=_mm256_div_pd(v1278,v1269);

	v1280=_mm256_add_pd(v1276,v1279);
	v1281=_mm256_set1_pd(1);
	v1282=_mm256_add_pd(v1271,v1281);
	v1283=_mm256_div_pd(v1282,v1271);

	v1284=_mm256_add_pd(v1280,v1283);
	v1285=_mm256_mul_pd(v1269,v1271);
	v1286=_mm256_mul_pd(v1269,v1271);
	v1287=_mm256_set1_pd(1);
	v1288=_mm256_add_pd(v1286,v1287);
	v1289=_mm256_div_pd(v1285,v1288);

	v1290=_mm256_add_pd(v1284,v1289);
	v1291=v1290;
	v1292=v1271;
	v1293=_mm256_add_pd(v1291,v3);
	v1294=v1293;
	v1295=_mm256_add_pd(v1292,v1294);
	v1296=_mm256_add_pd(v1292,v1294);
	v1297=_mm256_add_pd(v1296,v3);
	v1298=_mm256_div_pd(v1295,v1297);

	v1299=_mm256_add_pd(v1291,v1298);
	v1300=_mm256_set1_pd(1);
	v1301=_mm256_add_pd(v1292,v1300);
	v1302=_mm256_div_pd(v1301,v1292);

	v1303=_mm256_add_pd(v1299,v1302);
	v1304=_mm256_set1_pd(1);
	v1305=_mm256_add_pd(v1294,v1304);
	v1306=_mm256_div_pd(v1305,v1294);

	v1307=_mm256_add_pd(v1303,v1306);
	v1308=_mm256_mul_pd(v1292,v1294);
	v1309=_mm256_mul_pd(v1292,v1294);
	v1310=_mm256_set1_pd(1);
	v1311=_mm256_add_pd(v1309,v1310);
	v1312=_mm256_div_pd(v1308,v1311);

	v1313=_mm256_add_pd(v1307,v1312);
	v1314=v1313;
	v1315=v1294;
	v1316=_mm256_add_pd(v1314,v3);
	v1317=v1316;
	v1318=_mm256_add_pd(v1315,v1317);
	v1319=_mm256_add_pd(v1315,v1317);
	v1320=_mm256_add_pd(v1319,v3);
	v1321=_mm256_div_pd(v1318,v1320);

	v1322=_mm256_add_pd(v1314,v1321);
	v1323=_mm256_set1_pd(1);
	v1324=_mm256_add_pd(v1315,v1323);
	v1325=_mm256_div_pd(v1324,v1315);

	v1326=_mm256_add_pd(v1322,v1325);
	v1327=_mm256_set1_pd(1);
	v1328=_mm256_add_pd(v1317,v1327);
	v1329=_mm256_div_pd(v1328,v1317);

	v1330=_mm256_add_pd(v1326,v1329);
	v1331=_mm256_mul_pd(v1315,v1317);
	v1332=_mm256_mul_pd(v1315,v1317);
	v1333=_mm256_set1_pd(1);
	v1334=_mm256_add_pd(v1332,v1333);
	v1335=_mm256_div_pd(v1331,v1334);

	v1336=_mm256_add_pd(v1330,v1335);
	v1337=v1336;
	v1338=v1317;
	v1339=_mm256_add_pd(v1337,v3);
	v1340=v1339;
	v1341=_mm256_add_pd(v1338,v1340);
	v1342=_mm256_add_pd(v1338,v1340);
	v1343=_mm256_add_pd(v1342,v3);
	v1344=_mm256_div_pd(v1341,v1343);

	v1345=_mm256_add_pd(v1337,v1344);
	v1346=_mm256_set1_pd(1);
	v1347=_mm256_add_pd(v1338,v1346);
	v1348=_mm256_div_pd(v1347,v1338);

	v1349=_mm256_add_pd(v1345,v1348);
	v1350=_mm256_set1_pd(1);
	v1351=_mm256_add_pd(v1340,v1350);
	v1352=_mm256_div_pd(v1351,v1340);

	v1353=_mm256_add_pd(v1349,v1352);
	v1354=_mm256_mul_pd(v1338,v1340);
	v1355=_mm256_mul_pd(v1338,v1340);
	v1356=_mm256_set1_pd(1);
	v1357=_mm256_add_pd(v1355,v1356);
	v1358=_mm256_div_pd(v1354,v1357);

	v1359=_mm256_add_pd(v1353,v1358);
	v1360=v1359;
	v1361=v1340;
	v1362=_mm256_add_pd(v1360,v3);
	v1363=v1362;
	v1364=_mm256_add_pd(v1361,v1363);
	v1365=_mm256_add_pd(v1361,v1363);
	v1366=_mm256_add_pd(v1365,v3);
	v1367=_mm256_div_pd(v1364,v1366);

	v1368=_mm256_add_pd(v1360,v1367);
	v1369=_mm256_set1_pd(1);
	v1370=_mm256_add_pd(v1361,v1369);
	v1371=_mm256_div_pd(v1370,v1361);

	v1372=_mm256_add_pd(v1368,v1371);
	v1373=_mm256_set1_pd(1);
	v1374=_mm256_add_pd(v1363,v1373);
	v1375=_mm256_div_pd(v1374,v1363);

	v1376=_mm256_add_pd(v1372,v1375);
	v1377=_mm256_mul_pd(v1361,v1363);
	v1378=_mm256_mul_pd(v1361,v1363);
	v1379=_mm256_set1_pd(1);
	v1380=_mm256_add_pd(v1378,v1379);
	v1381=_mm256_div_pd(v1377,v1380);

	v1382=_mm256_add_pd(v1376,v1381);
	v1383=v1382;
	v1384=v1363;
	v1385=_mm256_add_pd(v1383,v3);
	v1386=v1385;
	v1387=_mm256_add_pd(v1384,v1386);
	v1388=_mm256_add_pd(v1384,v1386);
	v1389=_mm256_add_pd(v1388,v3);
	v1390=_mm256_div_pd(v1387,v1389);

	v1391=_mm256_add_pd(v1383,v1390);
	v1392=_mm256_set1_pd(1);
	v1393=_mm256_add_pd(v1384,v1392);
	v1394=_mm256_div_pd(v1393,v1384);

	v1395=_mm256_add_pd(v1391,v1394);
	v1396=_mm256_set1_pd(1);
	v1397=_mm256_add_pd(v1386,v1396);
	v1398=_mm256_div_pd(v1397,v1386);

	v1399=_mm256_add_pd(v1395,v1398);
	v1400=_mm256_mul_pd(v1384,v1386);
	v1401=_mm256_mul_pd(v1384,v1386);
	v1402=_mm256_set1_pd(1);
	v1403=_mm256_add_pd(v1401,v1402);
	v1404=_mm256_div_pd(v1400,v1403);

	v1405=_mm256_add_pd(v1399,v1404);
	v1406=v1405;
	v1407=v1386;
	v1408=_mm256_add_pd(v1406,v3);
	v1409=v1408;
	v1410=_mm256_add_pd(v1407,v1409);
	v1411=_mm256_add_pd(v1407,v1409);
	v1412=_mm256_add_pd(v1411,v3);
	v1413=_mm256_div_pd(v1410,v1412);

	v1414=_mm256_add_pd(v1406,v1413);
	v1415=_mm256_set1_pd(1);
	v1416=_mm256_add_pd(v1407,v1415);
	v1417=_mm256_div_pd(v1416,v1407);

	v1418=_mm256_add_pd(v1414,v1417);
	v1419=_mm256_set1_pd(1);
	v1420=_mm256_add_pd(v1409,v1419);
	v1421=_mm256_div_pd(v1420,v1409);

	v1422=_mm256_add_pd(v1418,v1421);
	v1423=_mm256_mul_pd(v1407,v1409);
	v1424=_mm256_mul_pd(v1407,v1409);
	v1425=_mm256_set1_pd(1);
	v1426=_mm256_add_pd(v1424,v1425);
	v1427=_mm256_div_pd(v1423,v1426);

	v1428=_mm256_add_pd(v1422,v1427);
	v1429=v1428;
	v1430=v1409;
	v1431=_mm256_add_pd(v1429,v3);
	v1432=v1431;
	v1433=_mm256_add_pd(v1430,v1432);
	v1434=_mm256_add_pd(v1430,v1432);
	v1435=_mm256_add_pd(v1434,v3);
	v1436=_mm256_div_pd(v1433,v1435);

	v1437=_mm256_add_pd(v1429,v1436);
	v1438=_mm256_set1_pd(1);
	v1439=_mm256_add_pd(v1430,v1438);
	v1440=_mm256_div_pd(v1439,v1430);

	v1441=_mm256_add_pd(v1437,v1440);
	v1442=_mm256_set1_pd(1);
	v1443=_mm256_add_pd(v1432,v1442);
	v1444=_mm256_div_pd(v1443,v1432);

	v1445=_mm256_add_pd(v1441,v1444);
	v1446=_mm256_mul_pd(v1430,v1432);
	v1447=_mm256_mul_pd(v1430,v1432);
	v1448=_mm256_set1_pd(1);
	v1449=_mm256_add_pd(v1447,v1448);
	v1450=_mm256_div_pd(v1446,v1449);

	v1451=_mm256_add_pd(v1445,v1450);
	v1452=v1451;
	v1453=v1432;
	v1454=_mm256_add_pd(v1452,v3);
	v1455=v1454;
	v1456=_mm256_add_pd(v1453,v1455);
	v1457=_mm256_add_pd(v1453,v1455);
	v1458=_mm256_add_pd(v1457,v3);
	v1459=_mm256_div_pd(v1456,v1458);

	v1460=_mm256_add_pd(v1452,v1459);
	v1461=_mm256_set1_pd(1);
	v1462=_mm256_add_pd(v1453,v1461);
	v1463=_mm256_div_pd(v1462,v1453);

	v1464=_mm256_add_pd(v1460,v1463);
	v1465=_mm256_set1_pd(1);
	v1466=_mm256_add_pd(v1455,v1465);
	v1467=_mm256_div_pd(v1466,v1455);

	v1468=_mm256_add_pd(v1464,v1467);
	v1469=_mm256_mul_pd(v1453,v1455);
	v1470=_mm256_mul_pd(v1453,v1455);
	v1471=_mm256_set1_pd(1);
	v1472=_mm256_add_pd(v1470,v1471);
	v1473=_mm256_div_pd(v1469,v1472);

	v1474=_mm256_add_pd(v1468,v1473);
	v1475=v1474;
	v1476=v1455;
	v1477=_mm256_add_pd(v1475,v3);
	v1478=v1477;
	v1479=_mm256_add_pd(v1476,v1478);
	v1480=_mm256_add_pd(v1476,v1478);
	v1481=_mm256_add_pd(v1480,v3);
	v1482=_mm256_div_pd(v1479,v1481);

	v1483=_mm256_add_pd(v1475,v1482);
	v1484=_mm256_set1_pd(1);
	v1485=_mm256_add_pd(v1476,v1484);
	v1486=_mm256_div_pd(v1485,v1476);

	v1487=_mm256_add_pd(v1483,v1486);
	v1488=_mm256_set1_pd(1);
	v1489=_mm256_add_pd(v1478,v1488);
	v1490=_mm256_div_pd(v1489,v1478);

	v1491=_mm256_add_pd(v1487,v1490);
	v1492=_mm256_mul_pd(v1476,v1478);
	v1493=_mm256_mul_pd(v1476,v1478);
	v1494=_mm256_set1_pd(1);
	v1495=_mm256_add_pd(v1493,v1494);
	v1496=_mm256_div_pd(v1492,v1495);

	v1497=_mm256_add_pd(v1491,v1496);
	v1498=v1497;
	v1499=v1478;
	v1500=_mm256_add_pd(v1498,v3);
	v1501=v1500;
	v1502=_mm256_add_pd(v1499,v1501);
	v1503=_mm256_add_pd(v1499,v1501);
	v1504=_mm256_add_pd(v1503,v3);
	v1505=_mm256_div_pd(v1502,v1504);

	v1506=_mm256_add_pd(v1498,v1505);
	v1507=_mm256_set1_pd(1);
	v1508=_mm256_add_pd(v1499,v1507);
	v1509=_mm256_div_pd(v1508,v1499);

	v1510=_mm256_add_pd(v1506,v1509);
	v1511=_mm256_set1_pd(1);
	v1512=_mm256_add_pd(v1501,v1511);
	v1513=_mm256_div_pd(v1512,v1501);

	v1514=_mm256_add_pd(v1510,v1513);
	v1515=_mm256_mul_pd(v1499,v1501);
	v1516=_mm256_mul_pd(v1499,v1501);
	v1517=_mm256_set1_pd(1);
	v1518=_mm256_add_pd(v1516,v1517);
	v1519=_mm256_div_pd(v1515,v1518);

	v1520=_mm256_add_pd(v1514,v1519);
	v1521=v1520;
	v1522=v1501;
	v1523=_mm256_add_pd(v1521,v3);
	v1524=v1523;
	v1525=_mm256_add_pd(v1522,v1524);
	v1526=_mm256_add_pd(v1522,v1524);
	v1527=_mm256_add_pd(v1526,v3);
	v1528=_mm256_div_pd(v1525,v1527);

	v1529=_mm256_add_pd(v1521,v1528);
	v1530=_mm256_set1_pd(1);
	v1531=_mm256_add_pd(v1522,v1530);
	v1532=_mm256_div_pd(v1531,v1522);

	v1533=_mm256_add_pd(v1529,v1532);
	v1534=_mm256_set1_pd(1);
	v1535=_mm256_add_pd(v1524,v1534);
	v1536=_mm256_div_pd(v1535,v1524);

	v1537=_mm256_add_pd(v1533,v1536);
	v1538=_mm256_mul_pd(v1522,v1524);
	v1539=_mm256_mul_pd(v1522,v1524);
	v1540=_mm256_set1_pd(1);
	v1541=_mm256_add_pd(v1539,v1540);
	v1542=_mm256_div_pd(v1538,v1541);

	v1543=_mm256_add_pd(v1537,v1542);
	v1544=v1543;
	v1545=v1524;
	v1546=_mm256_add_pd(v1544,v3);
	v1547=v1546;
	v1548=_mm256_add_pd(v1545,v1547);
	v1549=_mm256_add_pd(v1545,v1547);
	v1550=_mm256_add_pd(v1549,v3);
	v1551=_mm256_div_pd(v1548,v1550);

	v1552=_mm256_add_pd(v1544,v1551);
	v1553=_mm256_set1_pd(1);
	v1554=_mm256_add_pd(v1545,v1553);
	v1555=_mm256_div_pd(v1554,v1545);

	v1556=_mm256_add_pd(v1552,v1555);
	v1557=_mm256_set1_pd(1);
	v1558=_mm256_add_pd(v1547,v1557);
	v1559=_mm256_div_pd(v1558,v1547);

	v1560=_mm256_add_pd(v1556,v1559);
	v1561=_mm256_mul_pd(v1545,v1547);
	v1562=_mm256_mul_pd(v1545,v1547);
	v1563=_mm256_set1_pd(1);
	v1564=_mm256_add_pd(v1562,v1563);
	v1565=_mm256_div_pd(v1561,v1564);

	v1566=_mm256_add_pd(v1560,v1565);
	v1567=v1566;
	v1568=v1547;
	v1569=_mm256_add_pd(v1567,v3);
	v1570=v1569;
	v1571=_mm256_add_pd(v1568,v1570);
	v1572=_mm256_add_pd(v1568,v1570);
	v1573=_mm256_add_pd(v1572,v3);
	v1574=_mm256_div_pd(v1571,v1573);

	v1575=_mm256_add_pd(v1567,v1574);
	v1576=_mm256_set1_pd(1);
	v1577=_mm256_add_pd(v1568,v1576);
	v1578=_mm256_div_pd(v1577,v1568);

	v1579=_mm256_add_pd(v1575,v1578);
	v1580=_mm256_set1_pd(1);
	v1581=_mm256_add_pd(v1570,v1580);
	v1582=_mm256_div_pd(v1581,v1570);

	v1583=_mm256_add_pd(v1579,v1582);
	v1584=_mm256_mul_pd(v1568,v1570);
	v1585=_mm256_mul_pd(v1568,v1570);
	v1586=_mm256_set1_pd(1);
	v1587=_mm256_add_pd(v1585,v1586);
	v1588=_mm256_div_pd(v1584,v1587);

	v1589=_mm256_add_pd(v1583,v1588);
	v1590=v1589;
	v1591=v1570;
	v1592=_mm256_add_pd(v1590,v3);
	v1593=v1592;
	v1594=_mm256_add_pd(v1591,v1593);
	v1595=_mm256_add_pd(v1591,v1593);
	v1596=_mm256_add_pd(v1595,v3);
	v1597=_mm256_div_pd(v1594,v1596);

	v1598=_mm256_add_pd(v1590,v1597);
	v1599=_mm256_set1_pd(1);
	v1600=_mm256_add_pd(v1591,v1599);
	v1601=_mm256_div_pd(v1600,v1591);

	v1602=_mm256_add_pd(v1598,v1601);
	v1603=_mm256_set1_pd(1);
	v1604=_mm256_add_pd(v1593,v1603);
	v1605=_mm256_div_pd(v1604,v1593);

	v1606=_mm256_add_pd(v1602,v1605);
	v1607=_mm256_mul_pd(v1591,v1593);
	v1608=_mm256_mul_pd(v1591,v1593);
	v1609=_mm256_set1_pd(1);
	v1610=_mm256_add_pd(v1608,v1609);
	v1611=_mm256_div_pd(v1607,v1610);

	v1612=_mm256_add_pd(v1606,v1611);
	v1613=v1612;
	v1614=v1593;
	v1615=_mm256_add_pd(v1613,v3);
	v1616=v1615;
	v1617=_mm256_add_pd(v1614,v1616);
	v1618=_mm256_add_pd(v1614,v1616);
	v1619=_mm256_add_pd(v1618,v3);
	v1620=_mm256_div_pd(v1617,v1619);

	v1621=_mm256_add_pd(v1613,v1620);
	v1622=_mm256_set1_pd(1);
	v1623=_mm256_add_pd(v1614,v1622);
	v1624=_mm256_div_pd(v1623,v1614);

	v1625=_mm256_add_pd(v1621,v1624);
	v1626=_mm256_set1_pd(1);
	v1627=_mm256_add_pd(v1616,v1626);
	v1628=_mm256_div_pd(v1627,v1616);

	v1629=_mm256_add_pd(v1625,v1628);
	v1630=_mm256_mul_pd(v1614,v1616);
	v1631=_mm256_mul_pd(v1614,v1616);
	v1632=_mm256_set1_pd(1);
	v1633=_mm256_add_pd(v1631,v1632);
	v1634=_mm256_div_pd(v1630,v1633);

	v1635=_mm256_add_pd(v1629,v1634);
	v1636=v1635;
	v1637=v1616;
	v1638=_mm256_add_pd(v1636,v3);
	v1639=v1638;
	v1640=_mm256_add_pd(v1637,v1639);
	v1641=_mm256_add_pd(v1637,v1639);
	v1642=_mm256_add_pd(v1641,v3);
	v1643=_mm256_div_pd(v1640,v1642);

	v1644=_mm256_add_pd(v1636,v1643);
	v1645=_mm256_set1_pd(1);
	v1646=_mm256_add_pd(v1637,v1645);
	v1647=_mm256_div_pd(v1646,v1637);

	v1648=_mm256_add_pd(v1644,v1647);
	v1649=_mm256_set1_pd(1);
	v1650=_mm256_add_pd(v1639,v1649);
	v1651=_mm256_div_pd(v1650,v1639);

	v1652=_mm256_add_pd(v1648,v1651);
	v1653=_mm256_mul_pd(v1637,v1639);
	v1654=_mm256_mul_pd(v1637,v1639);
	v1655=_mm256_set1_pd(1);
	v1656=_mm256_add_pd(v1654,v1655);
	v1657=_mm256_div_pd(v1653,v1656);

	v1658=_mm256_add_pd(v1652,v1657);
	v1659=v1658;
	v1660=v1639;
	v1661=_mm256_add_pd(v1659,v3);
	v1662=v1661;
	v1663=_mm256_add_pd(v1660,v1662);
	v1664=_mm256_add_pd(v1660,v1662);
	v1665=_mm256_add_pd(v1664,v3);
	v1666=_mm256_div_pd(v1663,v1665);

	v1667=_mm256_add_pd(v1659,v1666);
	v1668=_mm256_set1_pd(1);
	v1669=_mm256_add_pd(v1660,v1668);
	v1670=_mm256_div_pd(v1669,v1660);

	v1671=_mm256_add_pd(v1667,v1670);
	v1672=_mm256_set1_pd(1);
	v1673=_mm256_add_pd(v1662,v1672);
	v1674=_mm256_div_pd(v1673,v1662);

	v1675=_mm256_add_pd(v1671,v1674);
	v1676=_mm256_mul_pd(v1660,v1662);
	v1677=_mm256_mul_pd(v1660,v1662);
	v1678=_mm256_set1_pd(1);
	v1679=_mm256_add_pd(v1677,v1678);
	v1680=_mm256_div_pd(v1676,v1679);

	v1681=_mm256_add_pd(v1675,v1680);
	v1682=v1681;
	v1683=v1662;
	v1684=_mm256_add_pd(v1682,v3);
	v1685=v1684;
	v1686=_mm256_add_pd(v1683,v1685);
	v1687=_mm256_add_pd(v1683,v1685);
	v1688=_mm256_add_pd(v1687,v3);
	v1689=_mm256_div_pd(v1686,v1688);

	v1690=_mm256_add_pd(v1682,v1689);
	v1691=_mm256_set1_pd(1);
	v1692=_mm256_add_pd(v1683,v1691);
	v1693=_mm256_div_pd(v1692,v1683);

	v1694=_mm256_add_pd(v1690,v1693);
	v1695=_mm256_set1_pd(1);
	v1696=_mm256_add_pd(v1685,v1695);
	v1697=_mm256_div_pd(v1696,v1685);

	v1698=_mm256_add_pd(v1694,v1697);
	v1699=_mm256_mul_pd(v1683,v1685);
	v1700=_mm256_mul_pd(v1683,v1685);
	v1701=_mm256_set1_pd(1);
	v1702=_mm256_add_pd(v1700,v1701);
	v1703=_mm256_div_pd(v1699,v1702);

	v1704=_mm256_add_pd(v1698,v1703);
	v1705=v1704;
	v1706=v1685;
	v1707=_mm256_add_pd(v1705,v3);
	v1708=v1707;
	v1709=_mm256_add_pd(v1706,v1708);
	v1710=_mm256_add_pd(v1706,v1708);
	v1711=_mm256_add_pd(v1710,v3);
	v1712=_mm256_div_pd(v1709,v1711);

	v1713=_mm256_add_pd(v1705,v1712);
	v1714=_mm256_set1_pd(1);
	v1715=_mm256_add_pd(v1706,v1714);
	v1716=_mm256_div_pd(v1715,v1706);

	v1717=_mm256_add_pd(v1713,v1716);
	v1718=_mm256_set1_pd(1);
	v1719=_mm256_add_pd(v1708,v1718);
	v1720=_mm256_div_pd(v1719,v1708);

	v1721=_mm256_add_pd(v1717,v1720);
	v1722=_mm256_mul_pd(v1706,v1708);
	v1723=_mm256_mul_pd(v1706,v1708);
	v1724=_mm256_set1_pd(1);
	v1725=_mm256_add_pd(v1723,v1724);
	v1726=_mm256_div_pd(v1722,v1725);

	v1727=_mm256_add_pd(v1721,v1726);
	v1728=v1727;
	v1729=v1708;
	v1730=_mm256_add_pd(v1728,v3);
	v1731=v1730;
	v1732=_mm256_add_pd(v1729,v1731);
	v1733=_mm256_add_pd(v1729,v1731);
	v1734=_mm256_add_pd(v1733,v3);
	v1735=_mm256_div_pd(v1732,v1734);

	v1736=_mm256_add_pd(v1728,v1735);
	v1737=_mm256_set1_pd(1);
	v1738=_mm256_add_pd(v1729,v1737);
	v1739=_mm256_div_pd(v1738,v1729);

	v1740=_mm256_add_pd(v1736,v1739);
	v1741=_mm256_set1_pd(1);
	v1742=_mm256_add_pd(v1731,v1741);
	v1743=_mm256_div_pd(v1742,v1731);

	v1744=_mm256_add_pd(v1740,v1743);
	v1745=_mm256_mul_pd(v1729,v1731);
	v1746=_mm256_mul_pd(v1729,v1731);
	v1747=_mm256_set1_pd(1);
	v1748=_mm256_add_pd(v1746,v1747);
	v1749=_mm256_div_pd(v1745,v1748);

	v1750=_mm256_add_pd(v1744,v1749);
	v1751=v1750;
	v1752=v1731;
	v1753=_mm256_add_pd(v1751,v3);
	v1754=v1753;
	v1755=_mm256_add_pd(v1752,v1754);
	v1756=_mm256_add_pd(v1752,v1754);
	v1757=_mm256_add_pd(v1756,v3);
	v1758=_mm256_div_pd(v1755,v1757);

	v1759=_mm256_add_pd(v1751,v1758);
	v1760=_mm256_set1_pd(1);
	v1761=_mm256_add_pd(v1752,v1760);
	v1762=_mm256_div_pd(v1761,v1752);

	v1763=_mm256_add_pd(v1759,v1762);
	v1764=_mm256_set1_pd(1);
	v1765=_mm256_add_pd(v1754,v1764);
	v1766=_mm256_div_pd(v1765,v1754);

	v1767=_mm256_add_pd(v1763,v1766);
	v1768=_mm256_mul_pd(v1752,v1754);
	v1769=_mm256_mul_pd(v1752,v1754);
	v1770=_mm256_set1_pd(1);
	v1771=_mm256_add_pd(v1769,v1770);
	v1772=_mm256_div_pd(v1768,v1771);

	v1773=_mm256_add_pd(v1767,v1772);
	v1774=v1773;
	v1775=v1754;
	v1776=_mm256_add_pd(v1774,v3);
	v1777=v1776;
	v1778=_mm256_add_pd(v1775,v1777);
	v1779=_mm256_add_pd(v1775,v1777);
	v1780=_mm256_add_pd(v1779,v3);
	v1781=_mm256_div_pd(v1778,v1780);

	v1782=_mm256_add_pd(v1774,v1781);
	v1783=_mm256_set1_pd(1);
	v1784=_mm256_add_pd(v1775,v1783);
	v1785=_mm256_div_pd(v1784,v1775);

	v1786=_mm256_add_pd(v1782,v1785);
	v1787=_mm256_set1_pd(1);
	v1788=_mm256_add_pd(v1777,v1787);
	v1789=_mm256_div_pd(v1788,v1777);

	v1790=_mm256_add_pd(v1786,v1789);
	v1791=_mm256_mul_pd(v1775,v1777);
	v1792=_mm256_mul_pd(v1775,v1777);
	v1793=_mm256_set1_pd(1);
	v1794=_mm256_add_pd(v1792,v1793);
	v1795=_mm256_div_pd(v1791,v1794);

	v1796=_mm256_add_pd(v1790,v1795);
	v1797=v1796;
	v1798=v1777;
	v1799=_mm256_add_pd(v1797,v3);
	v1800=v1799;
	v1801=_mm256_add_pd(v1798,v1800);
	v1802=_mm256_add_pd(v1798,v1800);
	v1803=_mm256_add_pd(v1802,v3);
	v1804=_mm256_div_pd(v1801,v1803);

	v1805=_mm256_add_pd(v1797,v1804);
	v1806=_mm256_set1_pd(1);
	v1807=_mm256_add_pd(v1798,v1806);
	v1808=_mm256_div_pd(v1807,v1798);

	v1809=_mm256_add_pd(v1805,v1808);
	v1810=_mm256_set1_pd(1);
	v1811=_mm256_add_pd(v1800,v1810);
	v1812=_mm256_div_pd(v1811,v1800);

	v1813=_mm256_add_pd(v1809,v1812);
	v1814=_mm256_mul_pd(v1798,v1800);
	v1815=_mm256_mul_pd(v1798,v1800);
	v1816=_mm256_set1_pd(1);
	v1817=_mm256_add_pd(v1815,v1816);
	v1818=_mm256_div_pd(v1814,v1817);

	v1819=_mm256_add_pd(v1813,v1818);
	v1820=v1819;
	v1821=v1800;
	v1822=_mm256_add_pd(v1820,v3);
	v1823=v1822;
	v1824=_mm256_add_pd(v1821,v1823);
	v1825=_mm256_add_pd(v1821,v1823);
	v1826=_mm256_add_pd(v1825,v3);
	v1827=_mm256_div_pd(v1824,v1826);

	v1828=_mm256_add_pd(v1820,v1827);
	v1829=_mm256_set1_pd(1);
	v1830=_mm256_add_pd(v1821,v1829);
	v1831=_mm256_div_pd(v1830,v1821);

	v1832=_mm256_add_pd(v1828,v1831);
	v1833=_mm256_set1_pd(1);
	v1834=_mm256_add_pd(v1823,v1833);
	v1835=_mm256_div_pd(v1834,v1823);

	v1836=_mm256_add_pd(v1832,v1835);
	v1837=_mm256_mul_pd(v1821,v1823);
	v1838=_mm256_mul_pd(v1821,v1823);
	v1839=_mm256_set1_pd(1);
	v1840=_mm256_add_pd(v1838,v1839);
	v1841=_mm256_div_pd(v1837,v1840);

	v1842=_mm256_add_pd(v1836,v1841);
	v1843=v1842;
	v1844=v1823;
	v1845=_mm256_add_pd(v1843,v3);
	v1846=v1845;
	v1847=_mm256_add_pd(v1844,v1846);
	v1848=_mm256_add_pd(v1844,v1846);
	v1849=_mm256_add_pd(v1848,v3);
	v1850=_mm256_div_pd(v1847,v1849);

	v1851=_mm256_add_pd(v1843,v1850);
	v1852=_mm256_set1_pd(1);
	v1853=_mm256_add_pd(v1844,v1852);
	v1854=_mm256_div_pd(v1853,v1844);

	v1855=_mm256_add_pd(v1851,v1854);
	v1856=_mm256_set1_pd(1);
	v1857=_mm256_add_pd(v1846,v1856);
	v1858=_mm256_div_pd(v1857,v1846);

	v1859=_mm256_add_pd(v1855,v1858);
	v1860=_mm256_mul_pd(v1844,v1846);
	v1861=_mm256_mul_pd(v1844,v1846);
	v1862=_mm256_set1_pd(1);
	v1863=_mm256_add_pd(v1861,v1862);
	v1864=_mm256_div_pd(v1860,v1863);

	v1865=_mm256_add_pd(v1859,v1864);
	v1866=v1865;
	v1867=v1846;
	v1868=_mm256_add_pd(v1866,v3);
	v1869=v1868;
	v1870=_mm256_add_pd(v1867,v1869);
	v1871=_mm256_add_pd(v1867,v1869);
	v1872=_mm256_add_pd(v1871,v3);
	v1873=_mm256_div_pd(v1870,v1872);

	v1874=_mm256_add_pd(v1866,v1873);
	v1875=_mm256_set1_pd(1);
	v1876=_mm256_add_pd(v1867,v1875);
	v1877=_mm256_div_pd(v1876,v1867);

	v1878=_mm256_add_pd(v1874,v1877);
	v1879=_mm256_set1_pd(1);
	v1880=_mm256_add_pd(v1869,v1879);
	v1881=_mm256_div_pd(v1880,v1869);

	v1882=_mm256_add_pd(v1878,v1881);
	v1883=_mm256_mul_pd(v1867,v1869);
	v1884=_mm256_mul_pd(v1867,v1869);
	v1885=_mm256_set1_pd(1);
	v1886=_mm256_add_pd(v1884,v1885);
	v1887=_mm256_div_pd(v1883,v1886);

	v1888=_mm256_add_pd(v1882,v1887);
	v1889=v1888;
	v1890=v1869;
	v1891=_mm256_add_pd(v1889,v3);
	v1892=v1891;
	v1893=_mm256_add_pd(v1890,v1892);
	v1894=_mm256_add_pd(v1890,v1892);
	v1895=_mm256_add_pd(v1894,v3);
	v1896=_mm256_div_pd(v1893,v1895);

	v1897=_mm256_add_pd(v1889,v1896);
	v1898=_mm256_set1_pd(1);
	v1899=_mm256_add_pd(v1890,v1898);
	v1900=_mm256_div_pd(v1899,v1890);

	v1901=_mm256_add_pd(v1897,v1900);
	v1902=_mm256_set1_pd(1);
	v1903=_mm256_add_pd(v1892,v1902);
	v1904=_mm256_div_pd(v1903,v1892);

	v1905=_mm256_add_pd(v1901,v1904);
	v1906=_mm256_mul_pd(v1890,v1892);
	v1907=_mm256_mul_pd(v1890,v1892);
	v1908=_mm256_set1_pd(1);
	v1909=_mm256_add_pd(v1907,v1908);
	v1910=_mm256_div_pd(v1906,v1909);

	v1911=_mm256_add_pd(v1905,v1910);
	v1912=v1911;
	v1913=v1892;
	v1914=_mm256_add_pd(v1912,v3);
	v1915=v1914;
	v1916=_mm256_add_pd(v1913,v1915);
	v1917=_mm256_add_pd(v1913,v1915);
	v1918=_mm256_add_pd(v1917,v3);
	v1919=_mm256_div_pd(v1916,v1918);

	v1920=_mm256_add_pd(v1912,v1919);
	v1921=_mm256_set1_pd(1);
	v1922=_mm256_add_pd(v1913,v1921);
	v1923=_mm256_div_pd(v1922,v1913);

	v1924=_mm256_add_pd(v1920,v1923);
	v1925=_mm256_set1_pd(1);
	v1926=_mm256_add_pd(v1915,v1925);
	v1927=_mm256_div_pd(v1926,v1915);

	v1928=_mm256_add_pd(v1924,v1927);
	v1929=_mm256_mul_pd(v1913,v1915);
	v1930=_mm256_mul_pd(v1913,v1915);
	v1931=_mm256_set1_pd(1);
	v1932=_mm256_add_pd(v1930,v1931);
	v1933=_mm256_div_pd(v1929,v1932);

	v1934=_mm256_add_pd(v1928,v1933);
	v1935=v1934;
	v1936=v1915;
	v1937=_mm256_add_pd(v1935,v3);
	v1938=v1937;
	v1939=_mm256_add_pd(v1936,v1938);
	v1940=_mm256_add_pd(v1936,v1938);
	v1941=_mm256_add_pd(v1940,v3);
	v1942=_mm256_div_pd(v1939,v1941);

	v1943=_mm256_add_pd(v1935,v1942);
	v1944=_mm256_set1_pd(1);
	v1945=_mm256_add_pd(v1936,v1944);
	v1946=_mm256_div_pd(v1945,v1936);

	v1947=_mm256_add_pd(v1943,v1946);
	v1948=_mm256_set1_pd(1);
	v1949=_mm256_add_pd(v1938,v1948);
	v1950=_mm256_div_pd(v1949,v1938);

	v1951=_mm256_add_pd(v1947,v1950);
	v1952=_mm256_mul_pd(v1936,v1938);
	v1953=_mm256_mul_pd(v1936,v1938);
	v1954=_mm256_set1_pd(1);
	v1955=_mm256_add_pd(v1953,v1954);
	v1956=_mm256_div_pd(v1952,v1955);

	v1957=_mm256_add_pd(v1951,v1956);
	v1958=v1957;
	v1959=v1938;
	v1960=_mm256_add_pd(v1958,v3);
	v1961=v1960;
	v1962=_mm256_add_pd(v1959,v1961);
	v1963=_mm256_add_pd(v1959,v1961);
	v1964=_mm256_add_pd(v1963,v3);
	v1965=_mm256_div_pd(v1962,v1964);

	v1966=_mm256_add_pd(v1958,v1965);
	v1967=_mm256_set1_pd(1);
	v1968=_mm256_add_pd(v1959,v1967);
	v1969=_mm256_div_pd(v1968,v1959);

	v1970=_mm256_add_pd(v1966,v1969);
	v1971=_mm256_set1_pd(1);
	v1972=_mm256_add_pd(v1961,v1971);
	v1973=_mm256_div_pd(v1972,v1961);

	v1974=_mm256_add_pd(v1970,v1973);
	v1975=_mm256_mul_pd(v1959,v1961);
	v1976=_mm256_mul_pd(v1959,v1961);
	v1977=_mm256_set1_pd(1);
	v1978=_mm256_add_pd(v1976,v1977);
	v1979=_mm256_div_pd(v1975,v1978);

	v1980=_mm256_add_pd(v1974,v1979);
	v1981=v1980;
	v1982=v1961;
	v1983=_mm256_add_pd(v1981,v3);
	v1984=v1983;
	v1985=_mm256_add_pd(v1982,v1984);
	v1986=_mm256_add_pd(v1982,v1984);
	v1987=_mm256_add_pd(v1986,v3);
	v1988=_mm256_div_pd(v1985,v1987);

	v1989=_mm256_add_pd(v1981,v1988);
	v1990=_mm256_set1_pd(1);
	v1991=_mm256_add_pd(v1982,v1990);
	v1992=_mm256_div_pd(v1991,v1982);

	v1993=_mm256_add_pd(v1989,v1992);
	v1994=_mm256_set1_pd(1);
	v1995=_mm256_add_pd(v1984,v1994);
	v1996=_mm256_div_pd(v1995,v1984);

	v1997=_mm256_add_pd(v1993,v1996);
	v1998=_mm256_mul_pd(v1982,v1984);
	v1999=_mm256_mul_pd(v1982,v1984);
	v2000=_mm256_set1_pd(1);
	v2001=_mm256_add_pd(v1999,v2000);
	v2002=_mm256_div_pd(v1998,v2001);

	v2003=_mm256_add_pd(v1997,v2002);
	v2004=v2003;
	v2005=v1984;
	v2006=_mm256_add_pd(v2004,v3);
	v2007=v2006;
	v2008=_mm256_add_pd(v2005,v2007);
	v2009=_mm256_add_pd(v2005,v2007);
	v2010=_mm256_add_pd(v2009,v3);
	v2011=_mm256_div_pd(v2008,v2010);

	v2012=_mm256_add_pd(v2004,v2011);
	v2013=_mm256_set1_pd(1);
	v2014=_mm256_add_pd(v2005,v2013);
	v2015=_mm256_div_pd(v2014,v2005);

	v2016=_mm256_add_pd(v2012,v2015);
	v2017=_mm256_set1_pd(1);
	v2018=_mm256_add_pd(v2007,v2017);
	v2019=_mm256_div_pd(v2018,v2007);

	v2020=_mm256_add_pd(v2016,v2019);
	v2021=_mm256_mul_pd(v2005,v2007);
	v2022=_mm256_mul_pd(v2005,v2007);
	v2023=_mm256_set1_pd(1);
	v2024=_mm256_add_pd(v2022,v2023);
	v2025=_mm256_div_pd(v2021,v2024);

	v2026=_mm256_add_pd(v2020,v2025);
	v2027=v2026;
	v2028=v2007;
	v2029=_mm256_add_pd(v2027,v3);
	v2030=v2029;
	v2031=_mm256_add_pd(v2028,v2030);
	v2032=_mm256_add_pd(v2028,v2030);
	v2033=_mm256_add_pd(v2032,v3);
	v2034=_mm256_div_pd(v2031,v2033);

	v2035=_mm256_add_pd(v2027,v2034);
	v2036=_mm256_set1_pd(1);
	v2037=_mm256_add_pd(v2028,v2036);
	v2038=_mm256_div_pd(v2037,v2028);

	v2039=_mm256_add_pd(v2035,v2038);
	v2040=_mm256_set1_pd(1);
	v2041=_mm256_add_pd(v2030,v2040);
	v2042=_mm256_div_pd(v2041,v2030);

	v2043=_mm256_add_pd(v2039,v2042);
	v2044=_mm256_mul_pd(v2028,v2030);
	v2045=_mm256_mul_pd(v2028,v2030);
	v2046=_mm256_set1_pd(1);
	v2047=_mm256_add_pd(v2045,v2046);
	v2048=_mm256_div_pd(v2044,v2047);

	v2049=_mm256_add_pd(v2043,v2048);
	v2050=v2049;
	v2051=v2030;
	v2052=_mm256_add_pd(v2050,v3);
	v2053=v2052;
	v2054=_mm256_add_pd(v2051,v2053);
	v2055=_mm256_add_pd(v2051,v2053);
	v2056=_mm256_add_pd(v2055,v3);
	v2057=_mm256_div_pd(v2054,v2056);

	v2058=_mm256_add_pd(v2050,v2057);
	v2059=_mm256_set1_pd(1);
	v2060=_mm256_add_pd(v2051,v2059);
	v2061=_mm256_div_pd(v2060,v2051);

	v2062=_mm256_add_pd(v2058,v2061);
	v2063=_mm256_set1_pd(1);
	v2064=_mm256_add_pd(v2053,v2063);
	v2065=_mm256_div_pd(v2064,v2053);

	v2066=_mm256_add_pd(v2062,v2065);
	v2067=_mm256_mul_pd(v2051,v2053);
	v2068=_mm256_mul_pd(v2051,v2053);
	v2069=_mm256_set1_pd(1);
	v2070=_mm256_add_pd(v2068,v2069);
	v2071=_mm256_div_pd(v2067,v2070);

	v2072=_mm256_add_pd(v2066,v2071);
	v2073=v2072;
	v2074=v2053;
	v2075=_mm256_add_pd(v2073,v3);
	v2076=v2075;
	v2077=_mm256_add_pd(v2074,v2076);
	v2078=_mm256_add_pd(v2074,v2076);
	v2079=_mm256_add_pd(v2078,v3);
	v2080=_mm256_div_pd(v2077,v2079);

	v2081=_mm256_add_pd(v2073,v2080);
	v2082=_mm256_set1_pd(1);
	v2083=_mm256_add_pd(v2074,v2082);
	v2084=_mm256_div_pd(v2083,v2074);

	v2085=_mm256_add_pd(v2081,v2084);
	v2086=_mm256_set1_pd(1);
	v2087=_mm256_add_pd(v2076,v2086);
	v2088=_mm256_div_pd(v2087,v2076);

	v2089=_mm256_add_pd(v2085,v2088);
	v2090=_mm256_mul_pd(v2074,v2076);
	v2091=_mm256_mul_pd(v2074,v2076);
	v2092=_mm256_set1_pd(1);
	v2093=_mm256_add_pd(v2091,v2092);
	v2094=_mm256_div_pd(v2090,v2093);

	v2095=_mm256_add_pd(v2089,v2094);
	v2096=v2095;
	v2097=v2076;
	v2098=_mm256_add_pd(v2096,v3);
	v2099=v2098;
	v2100=_mm256_add_pd(v2097,v2099);
	v2101=_mm256_add_pd(v2097,v2099);
	v2102=_mm256_add_pd(v2101,v3);
	v2103=_mm256_div_pd(v2100,v2102);

	v2104=_mm256_add_pd(v2096,v2103);
	v2105=_mm256_set1_pd(1);
	v2106=_mm256_add_pd(v2097,v2105);
	v2107=_mm256_div_pd(v2106,v2097);

	v2108=_mm256_add_pd(v2104,v2107);
	v2109=_mm256_set1_pd(1);
	v2110=_mm256_add_pd(v2099,v2109);
	v2111=_mm256_div_pd(v2110,v2099);

	v2112=_mm256_add_pd(v2108,v2111);
	v2113=_mm256_mul_pd(v2097,v2099);
	v2114=_mm256_mul_pd(v2097,v2099);
	v2115=_mm256_set1_pd(1);
	v2116=_mm256_add_pd(v2114,v2115);
	v2117=_mm256_div_pd(v2113,v2116);

	v2118=_mm256_add_pd(v2112,v2117);
	v2119=v2118;
	v2120=v2099;
	v2121=_mm256_add_pd(v2119,v3);
	v2122=v2121;
	v2123=_mm256_add_pd(v2120,v2122);
	v2124=_mm256_add_pd(v2120,v2122);
	v2125=_mm256_add_pd(v2124,v3);
	v2126=_mm256_div_pd(v2123,v2125);

	v2127=_mm256_add_pd(v2119,v2126);
	v2128=_mm256_set1_pd(1);
	v2129=_mm256_add_pd(v2120,v2128);
	v2130=_mm256_div_pd(v2129,v2120);

	v2131=_mm256_add_pd(v2127,v2130);
	v2132=_mm256_set1_pd(1);
	v2133=_mm256_add_pd(v2122,v2132);
	v2134=_mm256_div_pd(v2133,v2122);

	v2135=_mm256_add_pd(v2131,v2134);
	v2136=_mm256_mul_pd(v2120,v2122);
	v2137=_mm256_mul_pd(v2120,v2122);
	v2138=_mm256_set1_pd(1);
	v2139=_mm256_add_pd(v2137,v2138);
	v2140=_mm256_div_pd(v2136,v2139);

	v2141=_mm256_add_pd(v2135,v2140);
	v2142=v2141;
	v2143=v2122;
	v2144=_mm256_add_pd(v2142,v3);
	v2145=v2144;
	v2146=_mm256_add_pd(v2143,v2145);
	v2147=_mm256_add_pd(v2143,v2145);
	v2148=_mm256_add_pd(v2147,v3);
	v2149=_mm256_div_pd(v2146,v2148);

	v2150=_mm256_add_pd(v2142,v2149);
	v2151=_mm256_set1_pd(1);
	v2152=_mm256_add_pd(v2143,v2151);
	v2153=_mm256_div_pd(v2152,v2143);

	v2154=_mm256_add_pd(v2150,v2153);
	v2155=_mm256_set1_pd(1);
	v2156=_mm256_add_pd(v2145,v2155);
	v2157=_mm256_div_pd(v2156,v2145);

	v2158=_mm256_add_pd(v2154,v2157);
	v2159=_mm256_mul_pd(v2143,v2145);
	v2160=_mm256_mul_pd(v2143,v2145);
	v2161=_mm256_set1_pd(1);
	v2162=_mm256_add_pd(v2160,v2161);
	v2163=_mm256_div_pd(v2159,v2162);

	v2164=_mm256_add_pd(v2158,v2163);
	v2165=v2164;
	v2166=v2145;
	v2167=_mm256_add_pd(v2165,v3);
	v2168=v2167;
	v2169=_mm256_add_pd(v2166,v2168);
	v2170=_mm256_add_pd(v2166,v2168);
	v2171=_mm256_add_pd(v2170,v3);
	v2172=_mm256_div_pd(v2169,v2171);

	v2173=_mm256_add_pd(v2165,v2172);
	v2174=_mm256_set1_pd(1);
	v2175=_mm256_add_pd(v2166,v2174);
	v2176=_mm256_div_pd(v2175,v2166);

	v2177=_mm256_add_pd(v2173,v2176);
	v2178=_mm256_set1_pd(1);
	v2179=_mm256_add_pd(v2168,v2178);
	v2180=_mm256_div_pd(v2179,v2168);

	v2181=_mm256_add_pd(v2177,v2180);
	v2182=_mm256_mul_pd(v2166,v2168);
	v2183=_mm256_mul_pd(v2166,v2168);
	v2184=_mm256_set1_pd(1);
	v2185=_mm256_add_pd(v2183,v2184);
	v2186=_mm256_div_pd(v2182,v2185);

	v2187=_mm256_add_pd(v2181,v2186);
	v2188=v2187;
	v2189=v2168;
	v2190=_mm256_add_pd(v2188,v3);
	v2191=v2190;
	v2192=_mm256_add_pd(v2189,v2191);
	v2193=_mm256_add_pd(v2189,v2191);
	v2194=_mm256_add_pd(v2193,v3);
	v2195=_mm256_div_pd(v2192,v2194);

	v2196=_mm256_add_pd(v2188,v2195);
	v2197=_mm256_set1_pd(1);
	v2198=_mm256_add_pd(v2189,v2197);
	v2199=_mm256_div_pd(v2198,v2189);

	v2200=_mm256_add_pd(v2196,v2199);
	v2201=_mm256_set1_pd(1);
	v2202=_mm256_add_pd(v2191,v2201);
	v2203=_mm256_div_pd(v2202,v2191);

	v2204=_mm256_add_pd(v2200,v2203);
	v2205=_mm256_mul_pd(v2189,v2191);
	v2206=_mm256_mul_pd(v2189,v2191);
	v2207=_mm256_set1_pd(1);
	v2208=_mm256_add_pd(v2206,v2207);
	v2209=_mm256_div_pd(v2205,v2208);

	v2210=_mm256_add_pd(v2204,v2209);
	v2211=v2210;
	v2212=v2191;
	v2213=_mm256_add_pd(v2211,v3);
	v2214=v2213;
	v2215=_mm256_add_pd(v2212,v2214);
	v2216=_mm256_add_pd(v2212,v2214);
	v2217=_mm256_add_pd(v2216,v3);
	v2218=_mm256_div_pd(v2215,v2217);

	v2219=_mm256_add_pd(v2211,v2218);
	v2220=_mm256_set1_pd(1);
	v2221=_mm256_add_pd(v2212,v2220);
	v2222=_mm256_div_pd(v2221,v2212);

	v2223=_mm256_add_pd(v2219,v2222);
	v2224=_mm256_set1_pd(1);
	v2225=_mm256_add_pd(v2214,v2224);
	v2226=_mm256_div_pd(v2225,v2214);

	v2227=_mm256_add_pd(v2223,v2226);
	v2228=_mm256_mul_pd(v2212,v2214);
	v2229=_mm256_mul_pd(v2212,v2214);
	v2230=_mm256_set1_pd(1);
	v2231=_mm256_add_pd(v2229,v2230);
	v2232=_mm256_div_pd(v2228,v2231);

	v2233=_mm256_add_pd(v2227,v2232);
	v2234=v2233;
	v2235=v2214;
	v2236=_mm256_add_pd(v2234,v3);
	v2237=v2236;
	v2238=_mm256_add_pd(v2235,v2237);
	v2239=_mm256_add_pd(v2235,v2237);
	v2240=_mm256_add_pd(v2239,v3);
	v2241=_mm256_div_pd(v2238,v2240);

	v2242=_mm256_add_pd(v2234,v2241);
	v2243=_mm256_set1_pd(1);
	v2244=_mm256_add_pd(v2235,v2243);
	v2245=_mm256_div_pd(v2244,v2235);

	v2246=_mm256_add_pd(v2242,v2245);
	v2247=_mm256_set1_pd(1);
	v2248=_mm256_add_pd(v2237,v2247);
	v2249=_mm256_div_pd(v2248,v2237);

	v2250=_mm256_add_pd(v2246,v2249);
	v2251=_mm256_mul_pd(v2235,v2237);
	v2252=_mm256_mul_pd(v2235,v2237);
	v2253=_mm256_set1_pd(1);
	v2254=_mm256_add_pd(v2252,v2253);
	v2255=_mm256_div_pd(v2251,v2254);

	v2256=_mm256_add_pd(v2250,v2255);
	v2257=v2256;
	v2258=v2237;
	v2259=_mm256_add_pd(v2257,v3);
	v2260=v2259;
	v2261=_mm256_add_pd(v2258,v2260);
	v2262=_mm256_add_pd(v2258,v2260);
	v2263=_mm256_add_pd(v2262,v3);
	v2264=_mm256_div_pd(v2261,v2263);

	v2265=_mm256_add_pd(v2257,v2264);
	v2266=_mm256_set1_pd(1);
	v2267=_mm256_add_pd(v2258,v2266);
	v2268=_mm256_div_pd(v2267,v2258);

	v2269=_mm256_add_pd(v2265,v2268);
	v2270=_mm256_set1_pd(1);
	v2271=_mm256_add_pd(v2260,v2270);
	v2272=_mm256_div_pd(v2271,v2260);

	v2273=_mm256_add_pd(v2269,v2272);
	v2274=_mm256_mul_pd(v2258,v2260);
	v2275=_mm256_mul_pd(v2258,v2260);
	v2276=_mm256_set1_pd(1);
	v2277=_mm256_add_pd(v2275,v2276);
	v2278=_mm256_div_pd(v2274,v2277);

	v2279=_mm256_add_pd(v2273,v2278);
	v2280=v2279;
	v2281=v2260;
	v2282=_mm256_add_pd(v2280,v3);
	v2283=v2282;
	v2284=_mm256_add_pd(v2281,v2283);
	v2285=_mm256_add_pd(v2281,v2283);
	v2286=_mm256_add_pd(v2285,v3);
	v2287=_mm256_div_pd(v2284,v2286);

	v2288=_mm256_add_pd(v2280,v2287);
	v2289=_mm256_set1_pd(1);
	v2290=_mm256_add_pd(v2281,v2289);
	v2291=_mm256_div_pd(v2290,v2281);

	v2292=_mm256_add_pd(v2288,v2291);
	v2293=_mm256_set1_pd(1);
	v2294=_mm256_add_pd(v2283,v2293);
	v2295=_mm256_div_pd(v2294,v2283);

	v2296=_mm256_add_pd(v2292,v2295);
	v2297=_mm256_mul_pd(v2281,v2283);
	v2298=_mm256_mul_pd(v2281,v2283);
	v2299=_mm256_set1_pd(1);
	v2300=_mm256_add_pd(v2298,v2299);
	v2301=_mm256_div_pd(v2297,v2300);

	v2302=_mm256_add_pd(v2296,v2301);
	v2303=v2302;
	v2304=v2283;
	v2305=_mm256_add_pd(v2303,v3);
	v2306=v2305;
// reverse function : 
	d2305=_mm256_add_pd(d2305,d2306);
	d2303=_mm256_add_pd(d2303,d2305);d3=_mm256_add_pd(d3,d2305);
	d2283=_mm256_add_pd(d2283,d2304);
	d2302=_mm256_add_pd(d2302,d2303);
	d2296=_mm256_add_pd(d2296,d2302);d2301=_mm256_add_pd(d2301,d2302);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2300);
d2297=_mm256_fmadd_pd(d2301,tmp,d2297);
d2300=_mm256_fnmadd_pd(_mm256_mul_pd(d2301,v2297),_mm256_mul_pd(tmp, tmp),d2300);

	d2298=_mm256_add_pd(d2298,d2300);d2299=_mm256_add_pd(d2299,d2300);
	d2281=_mm256_fmadd_pd(d2298,v2283,d2281);d2283=_mm256_fmadd_pd(d2298,v2281,d2283);
	d2281=_mm256_fmadd_pd(d2297,v2283,d2281);d2283=_mm256_fmadd_pd(d2297,v2281,d2283);
	d2292=_mm256_add_pd(d2292,d2296);d2295=_mm256_add_pd(d2295,d2296);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2283);
d2294=_mm256_fmadd_pd(d2295,tmp,d2294);
d2283=_mm256_fnmadd_pd(_mm256_mul_pd(d2295,v2294),_mm256_mul_pd(tmp, tmp),d2283);

	d2283=_mm256_add_pd(d2283,d2294);d2293=_mm256_add_pd(d2293,d2294);
	d2288=_mm256_add_pd(d2288,d2292);d2291=_mm256_add_pd(d2291,d2292);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2281);
d2290=_mm256_fmadd_pd(d2291,tmp,d2290);
d2281=_mm256_fnmadd_pd(_mm256_mul_pd(d2291,v2290),_mm256_mul_pd(tmp, tmp),d2281);

	d2281=_mm256_add_pd(d2281,d2290);d2289=_mm256_add_pd(d2289,d2290);
	d2280=_mm256_add_pd(d2280,d2288);d2287=_mm256_add_pd(d2287,d2288);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2286);
d2284=_mm256_fmadd_pd(d2287,tmp,d2284);
d2286=_mm256_fnmadd_pd(_mm256_mul_pd(d2287,v2284),_mm256_mul_pd(tmp, tmp),d2286);

	d2285=_mm256_add_pd(d2285,d2286);d3=_mm256_add_pd(d3,d2286);
	d2281=_mm256_add_pd(d2281,d2285);d2283=_mm256_add_pd(d2283,d2285);
	d2281=_mm256_add_pd(d2281,d2284);d2283=_mm256_add_pd(d2283,d2284);
	d2282=_mm256_add_pd(d2282,d2283);
	d2280=_mm256_add_pd(d2280,d2282);d3=_mm256_add_pd(d3,d2282);
	d2260=_mm256_add_pd(d2260,d2281);
	d2279=_mm256_add_pd(d2279,d2280);
	d2273=_mm256_add_pd(d2273,d2279);d2278=_mm256_add_pd(d2278,d2279);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2277);
d2274=_mm256_fmadd_pd(d2278,tmp,d2274);
d2277=_mm256_fnmadd_pd(_mm256_mul_pd(d2278,v2274),_mm256_mul_pd(tmp, tmp),d2277);

	d2275=_mm256_add_pd(d2275,d2277);d2276=_mm256_add_pd(d2276,d2277);
	d2258=_mm256_fmadd_pd(d2275,v2260,d2258);d2260=_mm256_fmadd_pd(d2275,v2258,d2260);
	d2258=_mm256_fmadd_pd(d2274,v2260,d2258);d2260=_mm256_fmadd_pd(d2274,v2258,d2260);
	d2269=_mm256_add_pd(d2269,d2273);d2272=_mm256_add_pd(d2272,d2273);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2260);
d2271=_mm256_fmadd_pd(d2272,tmp,d2271);
d2260=_mm256_fnmadd_pd(_mm256_mul_pd(d2272,v2271),_mm256_mul_pd(tmp, tmp),d2260);

	d2260=_mm256_add_pd(d2260,d2271);d2270=_mm256_add_pd(d2270,d2271);
	d2265=_mm256_add_pd(d2265,d2269);d2268=_mm256_add_pd(d2268,d2269);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2258);
d2267=_mm256_fmadd_pd(d2268,tmp,d2267);
d2258=_mm256_fnmadd_pd(_mm256_mul_pd(d2268,v2267),_mm256_mul_pd(tmp, tmp),d2258);

	d2258=_mm256_add_pd(d2258,d2267);d2266=_mm256_add_pd(d2266,d2267);
	d2257=_mm256_add_pd(d2257,d2265);d2264=_mm256_add_pd(d2264,d2265);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2263);
d2261=_mm256_fmadd_pd(d2264,tmp,d2261);
d2263=_mm256_fnmadd_pd(_mm256_mul_pd(d2264,v2261),_mm256_mul_pd(tmp, tmp),d2263);

	d2262=_mm256_add_pd(d2262,d2263);d3=_mm256_add_pd(d3,d2263);
	d2258=_mm256_add_pd(d2258,d2262);d2260=_mm256_add_pd(d2260,d2262);
	d2258=_mm256_add_pd(d2258,d2261);d2260=_mm256_add_pd(d2260,d2261);
	d2259=_mm256_add_pd(d2259,d2260);
	d2257=_mm256_add_pd(d2257,d2259);d3=_mm256_add_pd(d3,d2259);
	d2237=_mm256_add_pd(d2237,d2258);
	d2256=_mm256_add_pd(d2256,d2257);
	d2250=_mm256_add_pd(d2250,d2256);d2255=_mm256_add_pd(d2255,d2256);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2254);
d2251=_mm256_fmadd_pd(d2255,tmp,d2251);
d2254=_mm256_fnmadd_pd(_mm256_mul_pd(d2255,v2251),_mm256_mul_pd(tmp, tmp),d2254);

	d2252=_mm256_add_pd(d2252,d2254);d2253=_mm256_add_pd(d2253,d2254);
	d2235=_mm256_fmadd_pd(d2252,v2237,d2235);d2237=_mm256_fmadd_pd(d2252,v2235,d2237);
	d2235=_mm256_fmadd_pd(d2251,v2237,d2235);d2237=_mm256_fmadd_pd(d2251,v2235,d2237);
	d2246=_mm256_add_pd(d2246,d2250);d2249=_mm256_add_pd(d2249,d2250);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2237);
d2248=_mm256_fmadd_pd(d2249,tmp,d2248);
d2237=_mm256_fnmadd_pd(_mm256_mul_pd(d2249,v2248),_mm256_mul_pd(tmp, tmp),d2237);

	d2237=_mm256_add_pd(d2237,d2248);d2247=_mm256_add_pd(d2247,d2248);
	d2242=_mm256_add_pd(d2242,d2246);d2245=_mm256_add_pd(d2245,d2246);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2235);
d2244=_mm256_fmadd_pd(d2245,tmp,d2244);
d2235=_mm256_fnmadd_pd(_mm256_mul_pd(d2245,v2244),_mm256_mul_pd(tmp, tmp),d2235);

	d2235=_mm256_add_pd(d2235,d2244);d2243=_mm256_add_pd(d2243,d2244);
	d2234=_mm256_add_pd(d2234,d2242);d2241=_mm256_add_pd(d2241,d2242);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2240);
d2238=_mm256_fmadd_pd(d2241,tmp,d2238);
d2240=_mm256_fnmadd_pd(_mm256_mul_pd(d2241,v2238),_mm256_mul_pd(tmp, tmp),d2240);

	d2239=_mm256_add_pd(d2239,d2240);d3=_mm256_add_pd(d3,d2240);
	d2235=_mm256_add_pd(d2235,d2239);d2237=_mm256_add_pd(d2237,d2239);
	d2235=_mm256_add_pd(d2235,d2238);d2237=_mm256_add_pd(d2237,d2238);
	d2236=_mm256_add_pd(d2236,d2237);
	d2234=_mm256_add_pd(d2234,d2236);d3=_mm256_add_pd(d3,d2236);
	d2214=_mm256_add_pd(d2214,d2235);
	d2233=_mm256_add_pd(d2233,d2234);
	d2227=_mm256_add_pd(d2227,d2233);d2232=_mm256_add_pd(d2232,d2233);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2231);
d2228=_mm256_fmadd_pd(d2232,tmp,d2228);
d2231=_mm256_fnmadd_pd(_mm256_mul_pd(d2232,v2228),_mm256_mul_pd(tmp, tmp),d2231);

	d2229=_mm256_add_pd(d2229,d2231);d2230=_mm256_add_pd(d2230,d2231);
	d2212=_mm256_fmadd_pd(d2229,v2214,d2212);d2214=_mm256_fmadd_pd(d2229,v2212,d2214);
	d2212=_mm256_fmadd_pd(d2228,v2214,d2212);d2214=_mm256_fmadd_pd(d2228,v2212,d2214);
	d2223=_mm256_add_pd(d2223,d2227);d2226=_mm256_add_pd(d2226,d2227);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2214);
d2225=_mm256_fmadd_pd(d2226,tmp,d2225);
d2214=_mm256_fnmadd_pd(_mm256_mul_pd(d2226,v2225),_mm256_mul_pd(tmp, tmp),d2214);

	d2214=_mm256_add_pd(d2214,d2225);d2224=_mm256_add_pd(d2224,d2225);
	d2219=_mm256_add_pd(d2219,d2223);d2222=_mm256_add_pd(d2222,d2223);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2212);
d2221=_mm256_fmadd_pd(d2222,tmp,d2221);
d2212=_mm256_fnmadd_pd(_mm256_mul_pd(d2222,v2221),_mm256_mul_pd(tmp, tmp),d2212);

	d2212=_mm256_add_pd(d2212,d2221);d2220=_mm256_add_pd(d2220,d2221);
	d2211=_mm256_add_pd(d2211,d2219);d2218=_mm256_add_pd(d2218,d2219);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2217);
d2215=_mm256_fmadd_pd(d2218,tmp,d2215);
d2217=_mm256_fnmadd_pd(_mm256_mul_pd(d2218,v2215),_mm256_mul_pd(tmp, tmp),d2217);

	d2216=_mm256_add_pd(d2216,d2217);d3=_mm256_add_pd(d3,d2217);
	d2212=_mm256_add_pd(d2212,d2216);d2214=_mm256_add_pd(d2214,d2216);
	d2212=_mm256_add_pd(d2212,d2215);d2214=_mm256_add_pd(d2214,d2215);
	d2213=_mm256_add_pd(d2213,d2214);
	d2211=_mm256_add_pd(d2211,d2213);d3=_mm256_add_pd(d3,d2213);
	d2191=_mm256_add_pd(d2191,d2212);
	d2210=_mm256_add_pd(d2210,d2211);
	d2204=_mm256_add_pd(d2204,d2210);d2209=_mm256_add_pd(d2209,d2210);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2208);
d2205=_mm256_fmadd_pd(d2209,tmp,d2205);
d2208=_mm256_fnmadd_pd(_mm256_mul_pd(d2209,v2205),_mm256_mul_pd(tmp, tmp),d2208);

	d2206=_mm256_add_pd(d2206,d2208);d2207=_mm256_add_pd(d2207,d2208);
	d2189=_mm256_fmadd_pd(d2206,v2191,d2189);d2191=_mm256_fmadd_pd(d2206,v2189,d2191);
	d2189=_mm256_fmadd_pd(d2205,v2191,d2189);d2191=_mm256_fmadd_pd(d2205,v2189,d2191);
	d2200=_mm256_add_pd(d2200,d2204);d2203=_mm256_add_pd(d2203,d2204);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2191);
d2202=_mm256_fmadd_pd(d2203,tmp,d2202);
d2191=_mm256_fnmadd_pd(_mm256_mul_pd(d2203,v2202),_mm256_mul_pd(tmp, tmp),d2191);

	d2191=_mm256_add_pd(d2191,d2202);d2201=_mm256_add_pd(d2201,d2202);
	d2196=_mm256_add_pd(d2196,d2200);d2199=_mm256_add_pd(d2199,d2200);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2189);
d2198=_mm256_fmadd_pd(d2199,tmp,d2198);
d2189=_mm256_fnmadd_pd(_mm256_mul_pd(d2199,v2198),_mm256_mul_pd(tmp, tmp),d2189);

	d2189=_mm256_add_pd(d2189,d2198);d2197=_mm256_add_pd(d2197,d2198);
	d2188=_mm256_add_pd(d2188,d2196);d2195=_mm256_add_pd(d2195,d2196);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2194);
d2192=_mm256_fmadd_pd(d2195,tmp,d2192);
d2194=_mm256_fnmadd_pd(_mm256_mul_pd(d2195,v2192),_mm256_mul_pd(tmp, tmp),d2194);

	d2193=_mm256_add_pd(d2193,d2194);d3=_mm256_add_pd(d3,d2194);
	d2189=_mm256_add_pd(d2189,d2193);d2191=_mm256_add_pd(d2191,d2193);
	d2189=_mm256_add_pd(d2189,d2192);d2191=_mm256_add_pd(d2191,d2192);
	d2190=_mm256_add_pd(d2190,d2191);
	d2188=_mm256_add_pd(d2188,d2190);d3=_mm256_add_pd(d3,d2190);
	d2168=_mm256_add_pd(d2168,d2189);
	d2187=_mm256_add_pd(d2187,d2188);
	d2181=_mm256_add_pd(d2181,d2187);d2186=_mm256_add_pd(d2186,d2187);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2185);
d2182=_mm256_fmadd_pd(d2186,tmp,d2182);
d2185=_mm256_fnmadd_pd(_mm256_mul_pd(d2186,v2182),_mm256_mul_pd(tmp, tmp),d2185);

	d2183=_mm256_add_pd(d2183,d2185);d2184=_mm256_add_pd(d2184,d2185);
	d2166=_mm256_fmadd_pd(d2183,v2168,d2166);d2168=_mm256_fmadd_pd(d2183,v2166,d2168);
	d2166=_mm256_fmadd_pd(d2182,v2168,d2166);d2168=_mm256_fmadd_pd(d2182,v2166,d2168);
	d2177=_mm256_add_pd(d2177,d2181);d2180=_mm256_add_pd(d2180,d2181);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2168);
d2179=_mm256_fmadd_pd(d2180,tmp,d2179);
d2168=_mm256_fnmadd_pd(_mm256_mul_pd(d2180,v2179),_mm256_mul_pd(tmp, tmp),d2168);

	d2168=_mm256_add_pd(d2168,d2179);d2178=_mm256_add_pd(d2178,d2179);
	d2173=_mm256_add_pd(d2173,d2177);d2176=_mm256_add_pd(d2176,d2177);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2166);
d2175=_mm256_fmadd_pd(d2176,tmp,d2175);
d2166=_mm256_fnmadd_pd(_mm256_mul_pd(d2176,v2175),_mm256_mul_pd(tmp, tmp),d2166);

	d2166=_mm256_add_pd(d2166,d2175);d2174=_mm256_add_pd(d2174,d2175);
	d2165=_mm256_add_pd(d2165,d2173);d2172=_mm256_add_pd(d2172,d2173);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2171);
d2169=_mm256_fmadd_pd(d2172,tmp,d2169);
d2171=_mm256_fnmadd_pd(_mm256_mul_pd(d2172,v2169),_mm256_mul_pd(tmp, tmp),d2171);

	d2170=_mm256_add_pd(d2170,d2171);d3=_mm256_add_pd(d3,d2171);
	d2166=_mm256_add_pd(d2166,d2170);d2168=_mm256_add_pd(d2168,d2170);
	d2166=_mm256_add_pd(d2166,d2169);d2168=_mm256_add_pd(d2168,d2169);
	d2167=_mm256_add_pd(d2167,d2168);
	d2165=_mm256_add_pd(d2165,d2167);d3=_mm256_add_pd(d3,d2167);
	d2145=_mm256_add_pd(d2145,d2166);
	d2164=_mm256_add_pd(d2164,d2165);
	d2158=_mm256_add_pd(d2158,d2164);d2163=_mm256_add_pd(d2163,d2164);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2162);
d2159=_mm256_fmadd_pd(d2163,tmp,d2159);
d2162=_mm256_fnmadd_pd(_mm256_mul_pd(d2163,v2159),_mm256_mul_pd(tmp, tmp),d2162);

	d2160=_mm256_add_pd(d2160,d2162);d2161=_mm256_add_pd(d2161,d2162);
	d2143=_mm256_fmadd_pd(d2160,v2145,d2143);d2145=_mm256_fmadd_pd(d2160,v2143,d2145);
	d2143=_mm256_fmadd_pd(d2159,v2145,d2143);d2145=_mm256_fmadd_pd(d2159,v2143,d2145);
	d2154=_mm256_add_pd(d2154,d2158);d2157=_mm256_add_pd(d2157,d2158);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2145);
d2156=_mm256_fmadd_pd(d2157,tmp,d2156);
d2145=_mm256_fnmadd_pd(_mm256_mul_pd(d2157,v2156),_mm256_mul_pd(tmp, tmp),d2145);

	d2145=_mm256_add_pd(d2145,d2156);d2155=_mm256_add_pd(d2155,d2156);
	d2150=_mm256_add_pd(d2150,d2154);d2153=_mm256_add_pd(d2153,d2154);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2143);
d2152=_mm256_fmadd_pd(d2153,tmp,d2152);
d2143=_mm256_fnmadd_pd(_mm256_mul_pd(d2153,v2152),_mm256_mul_pd(tmp, tmp),d2143);

	d2143=_mm256_add_pd(d2143,d2152);d2151=_mm256_add_pd(d2151,d2152);
	d2142=_mm256_add_pd(d2142,d2150);d2149=_mm256_add_pd(d2149,d2150);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2148);
d2146=_mm256_fmadd_pd(d2149,tmp,d2146);
d2148=_mm256_fnmadd_pd(_mm256_mul_pd(d2149,v2146),_mm256_mul_pd(tmp, tmp),d2148);

	d2147=_mm256_add_pd(d2147,d2148);d3=_mm256_add_pd(d3,d2148);
	d2143=_mm256_add_pd(d2143,d2147);d2145=_mm256_add_pd(d2145,d2147);
	d2143=_mm256_add_pd(d2143,d2146);d2145=_mm256_add_pd(d2145,d2146);
	d2144=_mm256_add_pd(d2144,d2145);
	d2142=_mm256_add_pd(d2142,d2144);d3=_mm256_add_pd(d3,d2144);
	d2122=_mm256_add_pd(d2122,d2143);
	d2141=_mm256_add_pd(d2141,d2142);
	d2135=_mm256_add_pd(d2135,d2141);d2140=_mm256_add_pd(d2140,d2141);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2139);
d2136=_mm256_fmadd_pd(d2140,tmp,d2136);
d2139=_mm256_fnmadd_pd(_mm256_mul_pd(d2140,v2136),_mm256_mul_pd(tmp, tmp),d2139);

	d2137=_mm256_add_pd(d2137,d2139);d2138=_mm256_add_pd(d2138,d2139);
	d2120=_mm256_fmadd_pd(d2137,v2122,d2120);d2122=_mm256_fmadd_pd(d2137,v2120,d2122);
	d2120=_mm256_fmadd_pd(d2136,v2122,d2120);d2122=_mm256_fmadd_pd(d2136,v2120,d2122);
	d2131=_mm256_add_pd(d2131,d2135);d2134=_mm256_add_pd(d2134,d2135);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2122);
d2133=_mm256_fmadd_pd(d2134,tmp,d2133);
d2122=_mm256_fnmadd_pd(_mm256_mul_pd(d2134,v2133),_mm256_mul_pd(tmp, tmp),d2122);

	d2122=_mm256_add_pd(d2122,d2133);d2132=_mm256_add_pd(d2132,d2133);
	d2127=_mm256_add_pd(d2127,d2131);d2130=_mm256_add_pd(d2130,d2131);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2120);
d2129=_mm256_fmadd_pd(d2130,tmp,d2129);
d2120=_mm256_fnmadd_pd(_mm256_mul_pd(d2130,v2129),_mm256_mul_pd(tmp, tmp),d2120);

	d2120=_mm256_add_pd(d2120,d2129);d2128=_mm256_add_pd(d2128,d2129);
	d2119=_mm256_add_pd(d2119,d2127);d2126=_mm256_add_pd(d2126,d2127);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2125);
d2123=_mm256_fmadd_pd(d2126,tmp,d2123);
d2125=_mm256_fnmadd_pd(_mm256_mul_pd(d2126,v2123),_mm256_mul_pd(tmp, tmp),d2125);

	d2124=_mm256_add_pd(d2124,d2125);d3=_mm256_add_pd(d3,d2125);
	d2120=_mm256_add_pd(d2120,d2124);d2122=_mm256_add_pd(d2122,d2124);
	d2120=_mm256_add_pd(d2120,d2123);d2122=_mm256_add_pd(d2122,d2123);
	d2121=_mm256_add_pd(d2121,d2122);
	d2119=_mm256_add_pd(d2119,d2121);d3=_mm256_add_pd(d3,d2121);
	d2099=_mm256_add_pd(d2099,d2120);
	d2118=_mm256_add_pd(d2118,d2119);
	d2112=_mm256_add_pd(d2112,d2118);d2117=_mm256_add_pd(d2117,d2118);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2116);
d2113=_mm256_fmadd_pd(d2117,tmp,d2113);
d2116=_mm256_fnmadd_pd(_mm256_mul_pd(d2117,v2113),_mm256_mul_pd(tmp, tmp),d2116);

	d2114=_mm256_add_pd(d2114,d2116);d2115=_mm256_add_pd(d2115,d2116);
	d2097=_mm256_fmadd_pd(d2114,v2099,d2097);d2099=_mm256_fmadd_pd(d2114,v2097,d2099);
	d2097=_mm256_fmadd_pd(d2113,v2099,d2097);d2099=_mm256_fmadd_pd(d2113,v2097,d2099);
	d2108=_mm256_add_pd(d2108,d2112);d2111=_mm256_add_pd(d2111,d2112);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2099);
d2110=_mm256_fmadd_pd(d2111,tmp,d2110);
d2099=_mm256_fnmadd_pd(_mm256_mul_pd(d2111,v2110),_mm256_mul_pd(tmp, tmp),d2099);

	d2099=_mm256_add_pd(d2099,d2110);d2109=_mm256_add_pd(d2109,d2110);
	d2104=_mm256_add_pd(d2104,d2108);d2107=_mm256_add_pd(d2107,d2108);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2097);
d2106=_mm256_fmadd_pd(d2107,tmp,d2106);
d2097=_mm256_fnmadd_pd(_mm256_mul_pd(d2107,v2106),_mm256_mul_pd(tmp, tmp),d2097);

	d2097=_mm256_add_pd(d2097,d2106);d2105=_mm256_add_pd(d2105,d2106);
	d2096=_mm256_add_pd(d2096,d2104);d2103=_mm256_add_pd(d2103,d2104);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2102);
d2100=_mm256_fmadd_pd(d2103,tmp,d2100);
d2102=_mm256_fnmadd_pd(_mm256_mul_pd(d2103,v2100),_mm256_mul_pd(tmp, tmp),d2102);

	d2101=_mm256_add_pd(d2101,d2102);d3=_mm256_add_pd(d3,d2102);
	d2097=_mm256_add_pd(d2097,d2101);d2099=_mm256_add_pd(d2099,d2101);
	d2097=_mm256_add_pd(d2097,d2100);d2099=_mm256_add_pd(d2099,d2100);
	d2098=_mm256_add_pd(d2098,d2099);
	d2096=_mm256_add_pd(d2096,d2098);d3=_mm256_add_pd(d3,d2098);
	d2076=_mm256_add_pd(d2076,d2097);
	d2095=_mm256_add_pd(d2095,d2096);
	d2089=_mm256_add_pd(d2089,d2095);d2094=_mm256_add_pd(d2094,d2095);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2093);
d2090=_mm256_fmadd_pd(d2094,tmp,d2090);
d2093=_mm256_fnmadd_pd(_mm256_mul_pd(d2094,v2090),_mm256_mul_pd(tmp, tmp),d2093);

	d2091=_mm256_add_pd(d2091,d2093);d2092=_mm256_add_pd(d2092,d2093);
	d2074=_mm256_fmadd_pd(d2091,v2076,d2074);d2076=_mm256_fmadd_pd(d2091,v2074,d2076);
	d2074=_mm256_fmadd_pd(d2090,v2076,d2074);d2076=_mm256_fmadd_pd(d2090,v2074,d2076);
	d2085=_mm256_add_pd(d2085,d2089);d2088=_mm256_add_pd(d2088,d2089);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2076);
d2087=_mm256_fmadd_pd(d2088,tmp,d2087);
d2076=_mm256_fnmadd_pd(_mm256_mul_pd(d2088,v2087),_mm256_mul_pd(tmp, tmp),d2076);

	d2076=_mm256_add_pd(d2076,d2087);d2086=_mm256_add_pd(d2086,d2087);
	d2081=_mm256_add_pd(d2081,d2085);d2084=_mm256_add_pd(d2084,d2085);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2074);
d2083=_mm256_fmadd_pd(d2084,tmp,d2083);
d2074=_mm256_fnmadd_pd(_mm256_mul_pd(d2084,v2083),_mm256_mul_pd(tmp, tmp),d2074);

	d2074=_mm256_add_pd(d2074,d2083);d2082=_mm256_add_pd(d2082,d2083);
	d2073=_mm256_add_pd(d2073,d2081);d2080=_mm256_add_pd(d2080,d2081);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2079);
d2077=_mm256_fmadd_pd(d2080,tmp,d2077);
d2079=_mm256_fnmadd_pd(_mm256_mul_pd(d2080,v2077),_mm256_mul_pd(tmp, tmp),d2079);

	d2078=_mm256_add_pd(d2078,d2079);d3=_mm256_add_pd(d3,d2079);
	d2074=_mm256_add_pd(d2074,d2078);d2076=_mm256_add_pd(d2076,d2078);
	d2074=_mm256_add_pd(d2074,d2077);d2076=_mm256_add_pd(d2076,d2077);
	d2075=_mm256_add_pd(d2075,d2076);
	d2073=_mm256_add_pd(d2073,d2075);d3=_mm256_add_pd(d3,d2075);
	d2053=_mm256_add_pd(d2053,d2074);
	d2072=_mm256_add_pd(d2072,d2073);
	d2066=_mm256_add_pd(d2066,d2072);d2071=_mm256_add_pd(d2071,d2072);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2070);
d2067=_mm256_fmadd_pd(d2071,tmp,d2067);
d2070=_mm256_fnmadd_pd(_mm256_mul_pd(d2071,v2067),_mm256_mul_pd(tmp, tmp),d2070);

	d2068=_mm256_add_pd(d2068,d2070);d2069=_mm256_add_pd(d2069,d2070);
	d2051=_mm256_fmadd_pd(d2068,v2053,d2051);d2053=_mm256_fmadd_pd(d2068,v2051,d2053);
	d2051=_mm256_fmadd_pd(d2067,v2053,d2051);d2053=_mm256_fmadd_pd(d2067,v2051,d2053);
	d2062=_mm256_add_pd(d2062,d2066);d2065=_mm256_add_pd(d2065,d2066);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2053);
d2064=_mm256_fmadd_pd(d2065,tmp,d2064);
d2053=_mm256_fnmadd_pd(_mm256_mul_pd(d2065,v2064),_mm256_mul_pd(tmp, tmp),d2053);

	d2053=_mm256_add_pd(d2053,d2064);d2063=_mm256_add_pd(d2063,d2064);
	d2058=_mm256_add_pd(d2058,d2062);d2061=_mm256_add_pd(d2061,d2062);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2051);
d2060=_mm256_fmadd_pd(d2061,tmp,d2060);
d2051=_mm256_fnmadd_pd(_mm256_mul_pd(d2061,v2060),_mm256_mul_pd(tmp, tmp),d2051);

	d2051=_mm256_add_pd(d2051,d2060);d2059=_mm256_add_pd(d2059,d2060);
	d2050=_mm256_add_pd(d2050,d2058);d2057=_mm256_add_pd(d2057,d2058);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2056);
d2054=_mm256_fmadd_pd(d2057,tmp,d2054);
d2056=_mm256_fnmadd_pd(_mm256_mul_pd(d2057,v2054),_mm256_mul_pd(tmp, tmp),d2056);

	d2055=_mm256_add_pd(d2055,d2056);d3=_mm256_add_pd(d3,d2056);
	d2051=_mm256_add_pd(d2051,d2055);d2053=_mm256_add_pd(d2053,d2055);
	d2051=_mm256_add_pd(d2051,d2054);d2053=_mm256_add_pd(d2053,d2054);
	d2052=_mm256_add_pd(d2052,d2053);
	d2050=_mm256_add_pd(d2050,d2052);d3=_mm256_add_pd(d3,d2052);
	d2030=_mm256_add_pd(d2030,d2051);
	d2049=_mm256_add_pd(d2049,d2050);
	d2043=_mm256_add_pd(d2043,d2049);d2048=_mm256_add_pd(d2048,d2049);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2047);
d2044=_mm256_fmadd_pd(d2048,tmp,d2044);
d2047=_mm256_fnmadd_pd(_mm256_mul_pd(d2048,v2044),_mm256_mul_pd(tmp, tmp),d2047);

	d2045=_mm256_add_pd(d2045,d2047);d2046=_mm256_add_pd(d2046,d2047);
	d2028=_mm256_fmadd_pd(d2045,v2030,d2028);d2030=_mm256_fmadd_pd(d2045,v2028,d2030);
	d2028=_mm256_fmadd_pd(d2044,v2030,d2028);d2030=_mm256_fmadd_pd(d2044,v2028,d2030);
	d2039=_mm256_add_pd(d2039,d2043);d2042=_mm256_add_pd(d2042,d2043);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2030);
d2041=_mm256_fmadd_pd(d2042,tmp,d2041);
d2030=_mm256_fnmadd_pd(_mm256_mul_pd(d2042,v2041),_mm256_mul_pd(tmp, tmp),d2030);

	d2030=_mm256_add_pd(d2030,d2041);d2040=_mm256_add_pd(d2040,d2041);
	d2035=_mm256_add_pd(d2035,d2039);d2038=_mm256_add_pd(d2038,d2039);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2028);
d2037=_mm256_fmadd_pd(d2038,tmp,d2037);
d2028=_mm256_fnmadd_pd(_mm256_mul_pd(d2038,v2037),_mm256_mul_pd(tmp, tmp),d2028);

	d2028=_mm256_add_pd(d2028,d2037);d2036=_mm256_add_pd(d2036,d2037);
	d2027=_mm256_add_pd(d2027,d2035);d2034=_mm256_add_pd(d2034,d2035);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2033);
d2031=_mm256_fmadd_pd(d2034,tmp,d2031);
d2033=_mm256_fnmadd_pd(_mm256_mul_pd(d2034,v2031),_mm256_mul_pd(tmp, tmp),d2033);

	d2032=_mm256_add_pd(d2032,d2033);d3=_mm256_add_pd(d3,d2033);
	d2028=_mm256_add_pd(d2028,d2032);d2030=_mm256_add_pd(d2030,d2032);
	d2028=_mm256_add_pd(d2028,d2031);d2030=_mm256_add_pd(d2030,d2031);
	d2029=_mm256_add_pd(d2029,d2030);
	d2027=_mm256_add_pd(d2027,d2029);d3=_mm256_add_pd(d3,d2029);
	d2007=_mm256_add_pd(d2007,d2028);
	d2026=_mm256_add_pd(d2026,d2027);
	d2020=_mm256_add_pd(d2020,d2026);d2025=_mm256_add_pd(d2025,d2026);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2024);
d2021=_mm256_fmadd_pd(d2025,tmp,d2021);
d2024=_mm256_fnmadd_pd(_mm256_mul_pd(d2025,v2021),_mm256_mul_pd(tmp, tmp),d2024);

	d2022=_mm256_add_pd(d2022,d2024);d2023=_mm256_add_pd(d2023,d2024);
	d2005=_mm256_fmadd_pd(d2022,v2007,d2005);d2007=_mm256_fmadd_pd(d2022,v2005,d2007);
	d2005=_mm256_fmadd_pd(d2021,v2007,d2005);d2007=_mm256_fmadd_pd(d2021,v2005,d2007);
	d2016=_mm256_add_pd(d2016,d2020);d2019=_mm256_add_pd(d2019,d2020);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2007);
d2018=_mm256_fmadd_pd(d2019,tmp,d2018);
d2007=_mm256_fnmadd_pd(_mm256_mul_pd(d2019,v2018),_mm256_mul_pd(tmp, tmp),d2007);

	d2007=_mm256_add_pd(d2007,d2018);d2017=_mm256_add_pd(d2017,d2018);
	d2012=_mm256_add_pd(d2012,d2016);d2015=_mm256_add_pd(d2015,d2016);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2005);
d2014=_mm256_fmadd_pd(d2015,tmp,d2014);
d2005=_mm256_fnmadd_pd(_mm256_mul_pd(d2015,v2014),_mm256_mul_pd(tmp, tmp),d2005);

	d2005=_mm256_add_pd(d2005,d2014);d2013=_mm256_add_pd(d2013,d2014);
	d2004=_mm256_add_pd(d2004,d2012);d2011=_mm256_add_pd(d2011,d2012);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2010);
d2008=_mm256_fmadd_pd(d2011,tmp,d2008);
d2010=_mm256_fnmadd_pd(_mm256_mul_pd(d2011,v2008),_mm256_mul_pd(tmp, tmp),d2010);

	d2009=_mm256_add_pd(d2009,d2010);d3=_mm256_add_pd(d3,d2010);
	d2005=_mm256_add_pd(d2005,d2009);d2007=_mm256_add_pd(d2007,d2009);
	d2005=_mm256_add_pd(d2005,d2008);d2007=_mm256_add_pd(d2007,d2008);
	d2006=_mm256_add_pd(d2006,d2007);
	d2004=_mm256_add_pd(d2004,d2006);d3=_mm256_add_pd(d3,d2006);
	d1984=_mm256_add_pd(d1984,d2005);
	d2003=_mm256_add_pd(d2003,d2004);
	d1997=_mm256_add_pd(d1997,d2003);d2002=_mm256_add_pd(d2002,d2003);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v2001);
d1998=_mm256_fmadd_pd(d2002,tmp,d1998);
d2001=_mm256_fnmadd_pd(_mm256_mul_pd(d2002,v1998),_mm256_mul_pd(tmp, tmp),d2001);

	d1999=_mm256_add_pd(d1999,d2001);d2000=_mm256_add_pd(d2000,d2001);
	d1982=_mm256_fmadd_pd(d1999,v1984,d1982);d1984=_mm256_fmadd_pd(d1999,v1982,d1984);
	d1982=_mm256_fmadd_pd(d1998,v1984,d1982);d1984=_mm256_fmadd_pd(d1998,v1982,d1984);
	d1993=_mm256_add_pd(d1993,d1997);d1996=_mm256_add_pd(d1996,d1997);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1984);
d1995=_mm256_fmadd_pd(d1996,tmp,d1995);
d1984=_mm256_fnmadd_pd(_mm256_mul_pd(d1996,v1995),_mm256_mul_pd(tmp, tmp),d1984);

	d1984=_mm256_add_pd(d1984,d1995);d1994=_mm256_add_pd(d1994,d1995);
	d1989=_mm256_add_pd(d1989,d1993);d1992=_mm256_add_pd(d1992,d1993);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1982);
d1991=_mm256_fmadd_pd(d1992,tmp,d1991);
d1982=_mm256_fnmadd_pd(_mm256_mul_pd(d1992,v1991),_mm256_mul_pd(tmp, tmp),d1982);

	d1982=_mm256_add_pd(d1982,d1991);d1990=_mm256_add_pd(d1990,d1991);
	d1981=_mm256_add_pd(d1981,d1989);d1988=_mm256_add_pd(d1988,d1989);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1987);
d1985=_mm256_fmadd_pd(d1988,tmp,d1985);
d1987=_mm256_fnmadd_pd(_mm256_mul_pd(d1988,v1985),_mm256_mul_pd(tmp, tmp),d1987);

	d1986=_mm256_add_pd(d1986,d1987);d3=_mm256_add_pd(d3,d1987);
	d1982=_mm256_add_pd(d1982,d1986);d1984=_mm256_add_pd(d1984,d1986);
	d1982=_mm256_add_pd(d1982,d1985);d1984=_mm256_add_pd(d1984,d1985);
	d1983=_mm256_add_pd(d1983,d1984);
	d1981=_mm256_add_pd(d1981,d1983);d3=_mm256_add_pd(d3,d1983);
	d1961=_mm256_add_pd(d1961,d1982);
	d1980=_mm256_add_pd(d1980,d1981);
	d1974=_mm256_add_pd(d1974,d1980);d1979=_mm256_add_pd(d1979,d1980);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1978);
d1975=_mm256_fmadd_pd(d1979,tmp,d1975);
d1978=_mm256_fnmadd_pd(_mm256_mul_pd(d1979,v1975),_mm256_mul_pd(tmp, tmp),d1978);

	d1976=_mm256_add_pd(d1976,d1978);d1977=_mm256_add_pd(d1977,d1978);
	d1959=_mm256_fmadd_pd(d1976,v1961,d1959);d1961=_mm256_fmadd_pd(d1976,v1959,d1961);
	d1959=_mm256_fmadd_pd(d1975,v1961,d1959);d1961=_mm256_fmadd_pd(d1975,v1959,d1961);
	d1970=_mm256_add_pd(d1970,d1974);d1973=_mm256_add_pd(d1973,d1974);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1961);
d1972=_mm256_fmadd_pd(d1973,tmp,d1972);
d1961=_mm256_fnmadd_pd(_mm256_mul_pd(d1973,v1972),_mm256_mul_pd(tmp, tmp),d1961);

	d1961=_mm256_add_pd(d1961,d1972);d1971=_mm256_add_pd(d1971,d1972);
	d1966=_mm256_add_pd(d1966,d1970);d1969=_mm256_add_pd(d1969,d1970);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1959);
d1968=_mm256_fmadd_pd(d1969,tmp,d1968);
d1959=_mm256_fnmadd_pd(_mm256_mul_pd(d1969,v1968),_mm256_mul_pd(tmp, tmp),d1959);

	d1959=_mm256_add_pd(d1959,d1968);d1967=_mm256_add_pd(d1967,d1968);
	d1958=_mm256_add_pd(d1958,d1966);d1965=_mm256_add_pd(d1965,d1966);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1964);
d1962=_mm256_fmadd_pd(d1965,tmp,d1962);
d1964=_mm256_fnmadd_pd(_mm256_mul_pd(d1965,v1962),_mm256_mul_pd(tmp, tmp),d1964);

	d1963=_mm256_add_pd(d1963,d1964);d3=_mm256_add_pd(d3,d1964);
	d1959=_mm256_add_pd(d1959,d1963);d1961=_mm256_add_pd(d1961,d1963);
	d1959=_mm256_add_pd(d1959,d1962);d1961=_mm256_add_pd(d1961,d1962);
	d1960=_mm256_add_pd(d1960,d1961);
	d1958=_mm256_add_pd(d1958,d1960);d3=_mm256_add_pd(d3,d1960);
	d1938=_mm256_add_pd(d1938,d1959);
	d1957=_mm256_add_pd(d1957,d1958);
	d1951=_mm256_add_pd(d1951,d1957);d1956=_mm256_add_pd(d1956,d1957);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1955);
d1952=_mm256_fmadd_pd(d1956,tmp,d1952);
d1955=_mm256_fnmadd_pd(_mm256_mul_pd(d1956,v1952),_mm256_mul_pd(tmp, tmp),d1955);

	d1953=_mm256_add_pd(d1953,d1955);d1954=_mm256_add_pd(d1954,d1955);
	d1936=_mm256_fmadd_pd(d1953,v1938,d1936);d1938=_mm256_fmadd_pd(d1953,v1936,d1938);
	d1936=_mm256_fmadd_pd(d1952,v1938,d1936);d1938=_mm256_fmadd_pd(d1952,v1936,d1938);
	d1947=_mm256_add_pd(d1947,d1951);d1950=_mm256_add_pd(d1950,d1951);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1938);
d1949=_mm256_fmadd_pd(d1950,tmp,d1949);
d1938=_mm256_fnmadd_pd(_mm256_mul_pd(d1950,v1949),_mm256_mul_pd(tmp, tmp),d1938);

	d1938=_mm256_add_pd(d1938,d1949);d1948=_mm256_add_pd(d1948,d1949);
	d1943=_mm256_add_pd(d1943,d1947);d1946=_mm256_add_pd(d1946,d1947);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1936);
d1945=_mm256_fmadd_pd(d1946,tmp,d1945);
d1936=_mm256_fnmadd_pd(_mm256_mul_pd(d1946,v1945),_mm256_mul_pd(tmp, tmp),d1936);

	d1936=_mm256_add_pd(d1936,d1945);d1944=_mm256_add_pd(d1944,d1945);
	d1935=_mm256_add_pd(d1935,d1943);d1942=_mm256_add_pd(d1942,d1943);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1941);
d1939=_mm256_fmadd_pd(d1942,tmp,d1939);
d1941=_mm256_fnmadd_pd(_mm256_mul_pd(d1942,v1939),_mm256_mul_pd(tmp, tmp),d1941);

	d1940=_mm256_add_pd(d1940,d1941);d3=_mm256_add_pd(d3,d1941);
	d1936=_mm256_add_pd(d1936,d1940);d1938=_mm256_add_pd(d1938,d1940);
	d1936=_mm256_add_pd(d1936,d1939);d1938=_mm256_add_pd(d1938,d1939);
	d1937=_mm256_add_pd(d1937,d1938);
	d1935=_mm256_add_pd(d1935,d1937);d3=_mm256_add_pd(d3,d1937);
	d1915=_mm256_add_pd(d1915,d1936);
	d1934=_mm256_add_pd(d1934,d1935);
	d1928=_mm256_add_pd(d1928,d1934);d1933=_mm256_add_pd(d1933,d1934);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1932);
d1929=_mm256_fmadd_pd(d1933,tmp,d1929);
d1932=_mm256_fnmadd_pd(_mm256_mul_pd(d1933,v1929),_mm256_mul_pd(tmp, tmp),d1932);

	d1930=_mm256_add_pd(d1930,d1932);d1931=_mm256_add_pd(d1931,d1932);
	d1913=_mm256_fmadd_pd(d1930,v1915,d1913);d1915=_mm256_fmadd_pd(d1930,v1913,d1915);
	d1913=_mm256_fmadd_pd(d1929,v1915,d1913);d1915=_mm256_fmadd_pd(d1929,v1913,d1915);
	d1924=_mm256_add_pd(d1924,d1928);d1927=_mm256_add_pd(d1927,d1928);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1915);
d1926=_mm256_fmadd_pd(d1927,tmp,d1926);
d1915=_mm256_fnmadd_pd(_mm256_mul_pd(d1927,v1926),_mm256_mul_pd(tmp, tmp),d1915);

	d1915=_mm256_add_pd(d1915,d1926);d1925=_mm256_add_pd(d1925,d1926);
	d1920=_mm256_add_pd(d1920,d1924);d1923=_mm256_add_pd(d1923,d1924);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1913);
d1922=_mm256_fmadd_pd(d1923,tmp,d1922);
d1913=_mm256_fnmadd_pd(_mm256_mul_pd(d1923,v1922),_mm256_mul_pd(tmp, tmp),d1913);

	d1913=_mm256_add_pd(d1913,d1922);d1921=_mm256_add_pd(d1921,d1922);
	d1912=_mm256_add_pd(d1912,d1920);d1919=_mm256_add_pd(d1919,d1920);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1918);
d1916=_mm256_fmadd_pd(d1919,tmp,d1916);
d1918=_mm256_fnmadd_pd(_mm256_mul_pd(d1919,v1916),_mm256_mul_pd(tmp, tmp),d1918);

	d1917=_mm256_add_pd(d1917,d1918);d3=_mm256_add_pd(d3,d1918);
	d1913=_mm256_add_pd(d1913,d1917);d1915=_mm256_add_pd(d1915,d1917);
	d1913=_mm256_add_pd(d1913,d1916);d1915=_mm256_add_pd(d1915,d1916);
	d1914=_mm256_add_pd(d1914,d1915);
	d1912=_mm256_add_pd(d1912,d1914);d3=_mm256_add_pd(d3,d1914);
	d1892=_mm256_add_pd(d1892,d1913);
	d1911=_mm256_add_pd(d1911,d1912);
	d1905=_mm256_add_pd(d1905,d1911);d1910=_mm256_add_pd(d1910,d1911);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1909);
d1906=_mm256_fmadd_pd(d1910,tmp,d1906);
d1909=_mm256_fnmadd_pd(_mm256_mul_pd(d1910,v1906),_mm256_mul_pd(tmp, tmp),d1909);

	d1907=_mm256_add_pd(d1907,d1909);d1908=_mm256_add_pd(d1908,d1909);
	d1890=_mm256_fmadd_pd(d1907,v1892,d1890);d1892=_mm256_fmadd_pd(d1907,v1890,d1892);
	d1890=_mm256_fmadd_pd(d1906,v1892,d1890);d1892=_mm256_fmadd_pd(d1906,v1890,d1892);
	d1901=_mm256_add_pd(d1901,d1905);d1904=_mm256_add_pd(d1904,d1905);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1892);
d1903=_mm256_fmadd_pd(d1904,tmp,d1903);
d1892=_mm256_fnmadd_pd(_mm256_mul_pd(d1904,v1903),_mm256_mul_pd(tmp, tmp),d1892);

	d1892=_mm256_add_pd(d1892,d1903);d1902=_mm256_add_pd(d1902,d1903);
	d1897=_mm256_add_pd(d1897,d1901);d1900=_mm256_add_pd(d1900,d1901);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1890);
d1899=_mm256_fmadd_pd(d1900,tmp,d1899);
d1890=_mm256_fnmadd_pd(_mm256_mul_pd(d1900,v1899),_mm256_mul_pd(tmp, tmp),d1890);

	d1890=_mm256_add_pd(d1890,d1899);d1898=_mm256_add_pd(d1898,d1899);
	d1889=_mm256_add_pd(d1889,d1897);d1896=_mm256_add_pd(d1896,d1897);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1895);
d1893=_mm256_fmadd_pd(d1896,tmp,d1893);
d1895=_mm256_fnmadd_pd(_mm256_mul_pd(d1896,v1893),_mm256_mul_pd(tmp, tmp),d1895);

	d1894=_mm256_add_pd(d1894,d1895);d3=_mm256_add_pd(d3,d1895);
	d1890=_mm256_add_pd(d1890,d1894);d1892=_mm256_add_pd(d1892,d1894);
	d1890=_mm256_add_pd(d1890,d1893);d1892=_mm256_add_pd(d1892,d1893);
	d1891=_mm256_add_pd(d1891,d1892);
	d1889=_mm256_add_pd(d1889,d1891);d3=_mm256_add_pd(d3,d1891);
	d1869=_mm256_add_pd(d1869,d1890);
	d1888=_mm256_add_pd(d1888,d1889);
	d1882=_mm256_add_pd(d1882,d1888);d1887=_mm256_add_pd(d1887,d1888);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1886);
d1883=_mm256_fmadd_pd(d1887,tmp,d1883);
d1886=_mm256_fnmadd_pd(_mm256_mul_pd(d1887,v1883),_mm256_mul_pd(tmp, tmp),d1886);

	d1884=_mm256_add_pd(d1884,d1886);d1885=_mm256_add_pd(d1885,d1886);
	d1867=_mm256_fmadd_pd(d1884,v1869,d1867);d1869=_mm256_fmadd_pd(d1884,v1867,d1869);
	d1867=_mm256_fmadd_pd(d1883,v1869,d1867);d1869=_mm256_fmadd_pd(d1883,v1867,d1869);
	d1878=_mm256_add_pd(d1878,d1882);d1881=_mm256_add_pd(d1881,d1882);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1869);
d1880=_mm256_fmadd_pd(d1881,tmp,d1880);
d1869=_mm256_fnmadd_pd(_mm256_mul_pd(d1881,v1880),_mm256_mul_pd(tmp, tmp),d1869);

	d1869=_mm256_add_pd(d1869,d1880);d1879=_mm256_add_pd(d1879,d1880);
	d1874=_mm256_add_pd(d1874,d1878);d1877=_mm256_add_pd(d1877,d1878);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1867);
d1876=_mm256_fmadd_pd(d1877,tmp,d1876);
d1867=_mm256_fnmadd_pd(_mm256_mul_pd(d1877,v1876),_mm256_mul_pd(tmp, tmp),d1867);

	d1867=_mm256_add_pd(d1867,d1876);d1875=_mm256_add_pd(d1875,d1876);
	d1866=_mm256_add_pd(d1866,d1874);d1873=_mm256_add_pd(d1873,d1874);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1872);
d1870=_mm256_fmadd_pd(d1873,tmp,d1870);
d1872=_mm256_fnmadd_pd(_mm256_mul_pd(d1873,v1870),_mm256_mul_pd(tmp, tmp),d1872);

	d1871=_mm256_add_pd(d1871,d1872);d3=_mm256_add_pd(d3,d1872);
	d1867=_mm256_add_pd(d1867,d1871);d1869=_mm256_add_pd(d1869,d1871);
	d1867=_mm256_add_pd(d1867,d1870);d1869=_mm256_add_pd(d1869,d1870);
	d1868=_mm256_add_pd(d1868,d1869);
	d1866=_mm256_add_pd(d1866,d1868);d3=_mm256_add_pd(d3,d1868);
	d1846=_mm256_add_pd(d1846,d1867);
	d1865=_mm256_add_pd(d1865,d1866);
	d1859=_mm256_add_pd(d1859,d1865);d1864=_mm256_add_pd(d1864,d1865);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1863);
d1860=_mm256_fmadd_pd(d1864,tmp,d1860);
d1863=_mm256_fnmadd_pd(_mm256_mul_pd(d1864,v1860),_mm256_mul_pd(tmp, tmp),d1863);

	d1861=_mm256_add_pd(d1861,d1863);d1862=_mm256_add_pd(d1862,d1863);
	d1844=_mm256_fmadd_pd(d1861,v1846,d1844);d1846=_mm256_fmadd_pd(d1861,v1844,d1846);
	d1844=_mm256_fmadd_pd(d1860,v1846,d1844);d1846=_mm256_fmadd_pd(d1860,v1844,d1846);
	d1855=_mm256_add_pd(d1855,d1859);d1858=_mm256_add_pd(d1858,d1859);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1846);
d1857=_mm256_fmadd_pd(d1858,tmp,d1857);
d1846=_mm256_fnmadd_pd(_mm256_mul_pd(d1858,v1857),_mm256_mul_pd(tmp, tmp),d1846);

	d1846=_mm256_add_pd(d1846,d1857);d1856=_mm256_add_pd(d1856,d1857);
	d1851=_mm256_add_pd(d1851,d1855);d1854=_mm256_add_pd(d1854,d1855);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1844);
d1853=_mm256_fmadd_pd(d1854,tmp,d1853);
d1844=_mm256_fnmadd_pd(_mm256_mul_pd(d1854,v1853),_mm256_mul_pd(tmp, tmp),d1844);

	d1844=_mm256_add_pd(d1844,d1853);d1852=_mm256_add_pd(d1852,d1853);
	d1843=_mm256_add_pd(d1843,d1851);d1850=_mm256_add_pd(d1850,d1851);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1849);
d1847=_mm256_fmadd_pd(d1850,tmp,d1847);
d1849=_mm256_fnmadd_pd(_mm256_mul_pd(d1850,v1847),_mm256_mul_pd(tmp, tmp),d1849);

	d1848=_mm256_add_pd(d1848,d1849);d3=_mm256_add_pd(d3,d1849);
	d1844=_mm256_add_pd(d1844,d1848);d1846=_mm256_add_pd(d1846,d1848);
	d1844=_mm256_add_pd(d1844,d1847);d1846=_mm256_add_pd(d1846,d1847);
	d1845=_mm256_add_pd(d1845,d1846);
	d1843=_mm256_add_pd(d1843,d1845);d3=_mm256_add_pd(d3,d1845);
	d1823=_mm256_add_pd(d1823,d1844);
	d1842=_mm256_add_pd(d1842,d1843);
	d1836=_mm256_add_pd(d1836,d1842);d1841=_mm256_add_pd(d1841,d1842);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1840);
d1837=_mm256_fmadd_pd(d1841,tmp,d1837);
d1840=_mm256_fnmadd_pd(_mm256_mul_pd(d1841,v1837),_mm256_mul_pd(tmp, tmp),d1840);

	d1838=_mm256_add_pd(d1838,d1840);d1839=_mm256_add_pd(d1839,d1840);
	d1821=_mm256_fmadd_pd(d1838,v1823,d1821);d1823=_mm256_fmadd_pd(d1838,v1821,d1823);
	d1821=_mm256_fmadd_pd(d1837,v1823,d1821);d1823=_mm256_fmadd_pd(d1837,v1821,d1823);
	d1832=_mm256_add_pd(d1832,d1836);d1835=_mm256_add_pd(d1835,d1836);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1823);
d1834=_mm256_fmadd_pd(d1835,tmp,d1834);
d1823=_mm256_fnmadd_pd(_mm256_mul_pd(d1835,v1834),_mm256_mul_pd(tmp, tmp),d1823);

	d1823=_mm256_add_pd(d1823,d1834);d1833=_mm256_add_pd(d1833,d1834);
	d1828=_mm256_add_pd(d1828,d1832);d1831=_mm256_add_pd(d1831,d1832);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1821);
d1830=_mm256_fmadd_pd(d1831,tmp,d1830);
d1821=_mm256_fnmadd_pd(_mm256_mul_pd(d1831,v1830),_mm256_mul_pd(tmp, tmp),d1821);

	d1821=_mm256_add_pd(d1821,d1830);d1829=_mm256_add_pd(d1829,d1830);
	d1820=_mm256_add_pd(d1820,d1828);d1827=_mm256_add_pd(d1827,d1828);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1826);
d1824=_mm256_fmadd_pd(d1827,tmp,d1824);
d1826=_mm256_fnmadd_pd(_mm256_mul_pd(d1827,v1824),_mm256_mul_pd(tmp, tmp),d1826);

	d1825=_mm256_add_pd(d1825,d1826);d3=_mm256_add_pd(d3,d1826);
	d1821=_mm256_add_pd(d1821,d1825);d1823=_mm256_add_pd(d1823,d1825);
	d1821=_mm256_add_pd(d1821,d1824);d1823=_mm256_add_pd(d1823,d1824);
	d1822=_mm256_add_pd(d1822,d1823);
	d1820=_mm256_add_pd(d1820,d1822);d3=_mm256_add_pd(d3,d1822);
	d1800=_mm256_add_pd(d1800,d1821);
	d1819=_mm256_add_pd(d1819,d1820);
	d1813=_mm256_add_pd(d1813,d1819);d1818=_mm256_add_pd(d1818,d1819);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1817);
d1814=_mm256_fmadd_pd(d1818,tmp,d1814);
d1817=_mm256_fnmadd_pd(_mm256_mul_pd(d1818,v1814),_mm256_mul_pd(tmp, tmp),d1817);

	d1815=_mm256_add_pd(d1815,d1817);d1816=_mm256_add_pd(d1816,d1817);
	d1798=_mm256_fmadd_pd(d1815,v1800,d1798);d1800=_mm256_fmadd_pd(d1815,v1798,d1800);
	d1798=_mm256_fmadd_pd(d1814,v1800,d1798);d1800=_mm256_fmadd_pd(d1814,v1798,d1800);
	d1809=_mm256_add_pd(d1809,d1813);d1812=_mm256_add_pd(d1812,d1813);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1800);
d1811=_mm256_fmadd_pd(d1812,tmp,d1811);
d1800=_mm256_fnmadd_pd(_mm256_mul_pd(d1812,v1811),_mm256_mul_pd(tmp, tmp),d1800);

	d1800=_mm256_add_pd(d1800,d1811);d1810=_mm256_add_pd(d1810,d1811);
	d1805=_mm256_add_pd(d1805,d1809);d1808=_mm256_add_pd(d1808,d1809);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1798);
d1807=_mm256_fmadd_pd(d1808,tmp,d1807);
d1798=_mm256_fnmadd_pd(_mm256_mul_pd(d1808,v1807),_mm256_mul_pd(tmp, tmp),d1798);

	d1798=_mm256_add_pd(d1798,d1807);d1806=_mm256_add_pd(d1806,d1807);
	d1797=_mm256_add_pd(d1797,d1805);d1804=_mm256_add_pd(d1804,d1805);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1803);
d1801=_mm256_fmadd_pd(d1804,tmp,d1801);
d1803=_mm256_fnmadd_pd(_mm256_mul_pd(d1804,v1801),_mm256_mul_pd(tmp, tmp),d1803);

	d1802=_mm256_add_pd(d1802,d1803);d3=_mm256_add_pd(d3,d1803);
	d1798=_mm256_add_pd(d1798,d1802);d1800=_mm256_add_pd(d1800,d1802);
	d1798=_mm256_add_pd(d1798,d1801);d1800=_mm256_add_pd(d1800,d1801);
	d1799=_mm256_add_pd(d1799,d1800);
	d1797=_mm256_add_pd(d1797,d1799);d3=_mm256_add_pd(d3,d1799);
	d1777=_mm256_add_pd(d1777,d1798);
	d1796=_mm256_add_pd(d1796,d1797);
	d1790=_mm256_add_pd(d1790,d1796);d1795=_mm256_add_pd(d1795,d1796);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1794);
d1791=_mm256_fmadd_pd(d1795,tmp,d1791);
d1794=_mm256_fnmadd_pd(_mm256_mul_pd(d1795,v1791),_mm256_mul_pd(tmp, tmp),d1794);

	d1792=_mm256_add_pd(d1792,d1794);d1793=_mm256_add_pd(d1793,d1794);
	d1775=_mm256_fmadd_pd(d1792,v1777,d1775);d1777=_mm256_fmadd_pd(d1792,v1775,d1777);
	d1775=_mm256_fmadd_pd(d1791,v1777,d1775);d1777=_mm256_fmadd_pd(d1791,v1775,d1777);
	d1786=_mm256_add_pd(d1786,d1790);d1789=_mm256_add_pd(d1789,d1790);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1777);
d1788=_mm256_fmadd_pd(d1789,tmp,d1788);
d1777=_mm256_fnmadd_pd(_mm256_mul_pd(d1789,v1788),_mm256_mul_pd(tmp, tmp),d1777);

	d1777=_mm256_add_pd(d1777,d1788);d1787=_mm256_add_pd(d1787,d1788);
	d1782=_mm256_add_pd(d1782,d1786);d1785=_mm256_add_pd(d1785,d1786);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1775);
d1784=_mm256_fmadd_pd(d1785,tmp,d1784);
d1775=_mm256_fnmadd_pd(_mm256_mul_pd(d1785,v1784),_mm256_mul_pd(tmp, tmp),d1775);

	d1775=_mm256_add_pd(d1775,d1784);d1783=_mm256_add_pd(d1783,d1784);
	d1774=_mm256_add_pd(d1774,d1782);d1781=_mm256_add_pd(d1781,d1782);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1780);
d1778=_mm256_fmadd_pd(d1781,tmp,d1778);
d1780=_mm256_fnmadd_pd(_mm256_mul_pd(d1781,v1778),_mm256_mul_pd(tmp, tmp),d1780);

	d1779=_mm256_add_pd(d1779,d1780);d3=_mm256_add_pd(d3,d1780);
	d1775=_mm256_add_pd(d1775,d1779);d1777=_mm256_add_pd(d1777,d1779);
	d1775=_mm256_add_pd(d1775,d1778);d1777=_mm256_add_pd(d1777,d1778);
	d1776=_mm256_add_pd(d1776,d1777);
	d1774=_mm256_add_pd(d1774,d1776);d3=_mm256_add_pd(d3,d1776);
	d1754=_mm256_add_pd(d1754,d1775);
	d1773=_mm256_add_pd(d1773,d1774);
	d1767=_mm256_add_pd(d1767,d1773);d1772=_mm256_add_pd(d1772,d1773);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1771);
d1768=_mm256_fmadd_pd(d1772,tmp,d1768);
d1771=_mm256_fnmadd_pd(_mm256_mul_pd(d1772,v1768),_mm256_mul_pd(tmp, tmp),d1771);

	d1769=_mm256_add_pd(d1769,d1771);d1770=_mm256_add_pd(d1770,d1771);
	d1752=_mm256_fmadd_pd(d1769,v1754,d1752);d1754=_mm256_fmadd_pd(d1769,v1752,d1754);
	d1752=_mm256_fmadd_pd(d1768,v1754,d1752);d1754=_mm256_fmadd_pd(d1768,v1752,d1754);
	d1763=_mm256_add_pd(d1763,d1767);d1766=_mm256_add_pd(d1766,d1767);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1754);
d1765=_mm256_fmadd_pd(d1766,tmp,d1765);
d1754=_mm256_fnmadd_pd(_mm256_mul_pd(d1766,v1765),_mm256_mul_pd(tmp, tmp),d1754);

	d1754=_mm256_add_pd(d1754,d1765);d1764=_mm256_add_pd(d1764,d1765);
	d1759=_mm256_add_pd(d1759,d1763);d1762=_mm256_add_pd(d1762,d1763);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1752);
d1761=_mm256_fmadd_pd(d1762,tmp,d1761);
d1752=_mm256_fnmadd_pd(_mm256_mul_pd(d1762,v1761),_mm256_mul_pd(tmp, tmp),d1752);

	d1752=_mm256_add_pd(d1752,d1761);d1760=_mm256_add_pd(d1760,d1761);
	d1751=_mm256_add_pd(d1751,d1759);d1758=_mm256_add_pd(d1758,d1759);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1757);
d1755=_mm256_fmadd_pd(d1758,tmp,d1755);
d1757=_mm256_fnmadd_pd(_mm256_mul_pd(d1758,v1755),_mm256_mul_pd(tmp, tmp),d1757);

	d1756=_mm256_add_pd(d1756,d1757);d3=_mm256_add_pd(d3,d1757);
	d1752=_mm256_add_pd(d1752,d1756);d1754=_mm256_add_pd(d1754,d1756);
	d1752=_mm256_add_pd(d1752,d1755);d1754=_mm256_add_pd(d1754,d1755);
	d1753=_mm256_add_pd(d1753,d1754);
	d1751=_mm256_add_pd(d1751,d1753);d3=_mm256_add_pd(d3,d1753);
	d1731=_mm256_add_pd(d1731,d1752);
	d1750=_mm256_add_pd(d1750,d1751);
	d1744=_mm256_add_pd(d1744,d1750);d1749=_mm256_add_pd(d1749,d1750);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1748);
d1745=_mm256_fmadd_pd(d1749,tmp,d1745);
d1748=_mm256_fnmadd_pd(_mm256_mul_pd(d1749,v1745),_mm256_mul_pd(tmp, tmp),d1748);

	d1746=_mm256_add_pd(d1746,d1748);d1747=_mm256_add_pd(d1747,d1748);
	d1729=_mm256_fmadd_pd(d1746,v1731,d1729);d1731=_mm256_fmadd_pd(d1746,v1729,d1731);
	d1729=_mm256_fmadd_pd(d1745,v1731,d1729);d1731=_mm256_fmadd_pd(d1745,v1729,d1731);
	d1740=_mm256_add_pd(d1740,d1744);d1743=_mm256_add_pd(d1743,d1744);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1731);
d1742=_mm256_fmadd_pd(d1743,tmp,d1742);
d1731=_mm256_fnmadd_pd(_mm256_mul_pd(d1743,v1742),_mm256_mul_pd(tmp, tmp),d1731);

	d1731=_mm256_add_pd(d1731,d1742);d1741=_mm256_add_pd(d1741,d1742);
	d1736=_mm256_add_pd(d1736,d1740);d1739=_mm256_add_pd(d1739,d1740);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1729);
d1738=_mm256_fmadd_pd(d1739,tmp,d1738);
d1729=_mm256_fnmadd_pd(_mm256_mul_pd(d1739,v1738),_mm256_mul_pd(tmp, tmp),d1729);

	d1729=_mm256_add_pd(d1729,d1738);d1737=_mm256_add_pd(d1737,d1738);
	d1728=_mm256_add_pd(d1728,d1736);d1735=_mm256_add_pd(d1735,d1736);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1734);
d1732=_mm256_fmadd_pd(d1735,tmp,d1732);
d1734=_mm256_fnmadd_pd(_mm256_mul_pd(d1735,v1732),_mm256_mul_pd(tmp, tmp),d1734);

	d1733=_mm256_add_pd(d1733,d1734);d3=_mm256_add_pd(d3,d1734);
	d1729=_mm256_add_pd(d1729,d1733);d1731=_mm256_add_pd(d1731,d1733);
	d1729=_mm256_add_pd(d1729,d1732);d1731=_mm256_add_pd(d1731,d1732);
	d1730=_mm256_add_pd(d1730,d1731);
	d1728=_mm256_add_pd(d1728,d1730);d3=_mm256_add_pd(d3,d1730);
	d1708=_mm256_add_pd(d1708,d1729);
	d1727=_mm256_add_pd(d1727,d1728);
	d1721=_mm256_add_pd(d1721,d1727);d1726=_mm256_add_pd(d1726,d1727);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1725);
d1722=_mm256_fmadd_pd(d1726,tmp,d1722);
d1725=_mm256_fnmadd_pd(_mm256_mul_pd(d1726,v1722),_mm256_mul_pd(tmp, tmp),d1725);

	d1723=_mm256_add_pd(d1723,d1725);d1724=_mm256_add_pd(d1724,d1725);
	d1706=_mm256_fmadd_pd(d1723,v1708,d1706);d1708=_mm256_fmadd_pd(d1723,v1706,d1708);
	d1706=_mm256_fmadd_pd(d1722,v1708,d1706);d1708=_mm256_fmadd_pd(d1722,v1706,d1708);
	d1717=_mm256_add_pd(d1717,d1721);d1720=_mm256_add_pd(d1720,d1721);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1708);
d1719=_mm256_fmadd_pd(d1720,tmp,d1719);
d1708=_mm256_fnmadd_pd(_mm256_mul_pd(d1720,v1719),_mm256_mul_pd(tmp, tmp),d1708);

	d1708=_mm256_add_pd(d1708,d1719);d1718=_mm256_add_pd(d1718,d1719);
	d1713=_mm256_add_pd(d1713,d1717);d1716=_mm256_add_pd(d1716,d1717);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1706);
d1715=_mm256_fmadd_pd(d1716,tmp,d1715);
d1706=_mm256_fnmadd_pd(_mm256_mul_pd(d1716,v1715),_mm256_mul_pd(tmp, tmp),d1706);

	d1706=_mm256_add_pd(d1706,d1715);d1714=_mm256_add_pd(d1714,d1715);
	d1705=_mm256_add_pd(d1705,d1713);d1712=_mm256_add_pd(d1712,d1713);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1711);
d1709=_mm256_fmadd_pd(d1712,tmp,d1709);
d1711=_mm256_fnmadd_pd(_mm256_mul_pd(d1712,v1709),_mm256_mul_pd(tmp, tmp),d1711);

	d1710=_mm256_add_pd(d1710,d1711);d3=_mm256_add_pd(d3,d1711);
	d1706=_mm256_add_pd(d1706,d1710);d1708=_mm256_add_pd(d1708,d1710);
	d1706=_mm256_add_pd(d1706,d1709);d1708=_mm256_add_pd(d1708,d1709);
	d1707=_mm256_add_pd(d1707,d1708);
	d1705=_mm256_add_pd(d1705,d1707);d3=_mm256_add_pd(d3,d1707);
	d1685=_mm256_add_pd(d1685,d1706);
	d1704=_mm256_add_pd(d1704,d1705);
	d1698=_mm256_add_pd(d1698,d1704);d1703=_mm256_add_pd(d1703,d1704);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1702);
d1699=_mm256_fmadd_pd(d1703,tmp,d1699);
d1702=_mm256_fnmadd_pd(_mm256_mul_pd(d1703,v1699),_mm256_mul_pd(tmp, tmp),d1702);

	d1700=_mm256_add_pd(d1700,d1702);d1701=_mm256_add_pd(d1701,d1702);
	d1683=_mm256_fmadd_pd(d1700,v1685,d1683);d1685=_mm256_fmadd_pd(d1700,v1683,d1685);
	d1683=_mm256_fmadd_pd(d1699,v1685,d1683);d1685=_mm256_fmadd_pd(d1699,v1683,d1685);
	d1694=_mm256_add_pd(d1694,d1698);d1697=_mm256_add_pd(d1697,d1698);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1685);
d1696=_mm256_fmadd_pd(d1697,tmp,d1696);
d1685=_mm256_fnmadd_pd(_mm256_mul_pd(d1697,v1696),_mm256_mul_pd(tmp, tmp),d1685);

	d1685=_mm256_add_pd(d1685,d1696);d1695=_mm256_add_pd(d1695,d1696);
	d1690=_mm256_add_pd(d1690,d1694);d1693=_mm256_add_pd(d1693,d1694);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1683);
d1692=_mm256_fmadd_pd(d1693,tmp,d1692);
d1683=_mm256_fnmadd_pd(_mm256_mul_pd(d1693,v1692),_mm256_mul_pd(tmp, tmp),d1683);

	d1683=_mm256_add_pd(d1683,d1692);d1691=_mm256_add_pd(d1691,d1692);
	d1682=_mm256_add_pd(d1682,d1690);d1689=_mm256_add_pd(d1689,d1690);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1688);
d1686=_mm256_fmadd_pd(d1689,tmp,d1686);
d1688=_mm256_fnmadd_pd(_mm256_mul_pd(d1689,v1686),_mm256_mul_pd(tmp, tmp),d1688);

	d1687=_mm256_add_pd(d1687,d1688);d3=_mm256_add_pd(d3,d1688);
	d1683=_mm256_add_pd(d1683,d1687);d1685=_mm256_add_pd(d1685,d1687);
	d1683=_mm256_add_pd(d1683,d1686);d1685=_mm256_add_pd(d1685,d1686);
	d1684=_mm256_add_pd(d1684,d1685);
	d1682=_mm256_add_pd(d1682,d1684);d3=_mm256_add_pd(d3,d1684);
	d1662=_mm256_add_pd(d1662,d1683);
	d1681=_mm256_add_pd(d1681,d1682);
	d1675=_mm256_add_pd(d1675,d1681);d1680=_mm256_add_pd(d1680,d1681);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1679);
d1676=_mm256_fmadd_pd(d1680,tmp,d1676);
d1679=_mm256_fnmadd_pd(_mm256_mul_pd(d1680,v1676),_mm256_mul_pd(tmp, tmp),d1679);

	d1677=_mm256_add_pd(d1677,d1679);d1678=_mm256_add_pd(d1678,d1679);
	d1660=_mm256_fmadd_pd(d1677,v1662,d1660);d1662=_mm256_fmadd_pd(d1677,v1660,d1662);
	d1660=_mm256_fmadd_pd(d1676,v1662,d1660);d1662=_mm256_fmadd_pd(d1676,v1660,d1662);
	d1671=_mm256_add_pd(d1671,d1675);d1674=_mm256_add_pd(d1674,d1675);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1662);
d1673=_mm256_fmadd_pd(d1674,tmp,d1673);
d1662=_mm256_fnmadd_pd(_mm256_mul_pd(d1674,v1673),_mm256_mul_pd(tmp, tmp),d1662);

	d1662=_mm256_add_pd(d1662,d1673);d1672=_mm256_add_pd(d1672,d1673);
	d1667=_mm256_add_pd(d1667,d1671);d1670=_mm256_add_pd(d1670,d1671);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1660);
d1669=_mm256_fmadd_pd(d1670,tmp,d1669);
d1660=_mm256_fnmadd_pd(_mm256_mul_pd(d1670,v1669),_mm256_mul_pd(tmp, tmp),d1660);

	d1660=_mm256_add_pd(d1660,d1669);d1668=_mm256_add_pd(d1668,d1669);
	d1659=_mm256_add_pd(d1659,d1667);d1666=_mm256_add_pd(d1666,d1667);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1665);
d1663=_mm256_fmadd_pd(d1666,tmp,d1663);
d1665=_mm256_fnmadd_pd(_mm256_mul_pd(d1666,v1663),_mm256_mul_pd(tmp, tmp),d1665);

	d1664=_mm256_add_pd(d1664,d1665);d3=_mm256_add_pd(d3,d1665);
	d1660=_mm256_add_pd(d1660,d1664);d1662=_mm256_add_pd(d1662,d1664);
	d1660=_mm256_add_pd(d1660,d1663);d1662=_mm256_add_pd(d1662,d1663);
	d1661=_mm256_add_pd(d1661,d1662);
	d1659=_mm256_add_pd(d1659,d1661);d3=_mm256_add_pd(d3,d1661);
	d1639=_mm256_add_pd(d1639,d1660);
	d1658=_mm256_add_pd(d1658,d1659);
	d1652=_mm256_add_pd(d1652,d1658);d1657=_mm256_add_pd(d1657,d1658);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1656);
d1653=_mm256_fmadd_pd(d1657,tmp,d1653);
d1656=_mm256_fnmadd_pd(_mm256_mul_pd(d1657,v1653),_mm256_mul_pd(tmp, tmp),d1656);

	d1654=_mm256_add_pd(d1654,d1656);d1655=_mm256_add_pd(d1655,d1656);
	d1637=_mm256_fmadd_pd(d1654,v1639,d1637);d1639=_mm256_fmadd_pd(d1654,v1637,d1639);
	d1637=_mm256_fmadd_pd(d1653,v1639,d1637);d1639=_mm256_fmadd_pd(d1653,v1637,d1639);
	d1648=_mm256_add_pd(d1648,d1652);d1651=_mm256_add_pd(d1651,d1652);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1639);
d1650=_mm256_fmadd_pd(d1651,tmp,d1650);
d1639=_mm256_fnmadd_pd(_mm256_mul_pd(d1651,v1650),_mm256_mul_pd(tmp, tmp),d1639);

	d1639=_mm256_add_pd(d1639,d1650);d1649=_mm256_add_pd(d1649,d1650);
	d1644=_mm256_add_pd(d1644,d1648);d1647=_mm256_add_pd(d1647,d1648);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1637);
d1646=_mm256_fmadd_pd(d1647,tmp,d1646);
d1637=_mm256_fnmadd_pd(_mm256_mul_pd(d1647,v1646),_mm256_mul_pd(tmp, tmp),d1637);

	d1637=_mm256_add_pd(d1637,d1646);d1645=_mm256_add_pd(d1645,d1646);
	d1636=_mm256_add_pd(d1636,d1644);d1643=_mm256_add_pd(d1643,d1644);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1642);
d1640=_mm256_fmadd_pd(d1643,tmp,d1640);
d1642=_mm256_fnmadd_pd(_mm256_mul_pd(d1643,v1640),_mm256_mul_pd(tmp, tmp),d1642);

	d1641=_mm256_add_pd(d1641,d1642);d3=_mm256_add_pd(d3,d1642);
	d1637=_mm256_add_pd(d1637,d1641);d1639=_mm256_add_pd(d1639,d1641);
	d1637=_mm256_add_pd(d1637,d1640);d1639=_mm256_add_pd(d1639,d1640);
	d1638=_mm256_add_pd(d1638,d1639);
	d1636=_mm256_add_pd(d1636,d1638);d3=_mm256_add_pd(d3,d1638);
	d1616=_mm256_add_pd(d1616,d1637);
	d1635=_mm256_add_pd(d1635,d1636);
	d1629=_mm256_add_pd(d1629,d1635);d1634=_mm256_add_pd(d1634,d1635);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1633);
d1630=_mm256_fmadd_pd(d1634,tmp,d1630);
d1633=_mm256_fnmadd_pd(_mm256_mul_pd(d1634,v1630),_mm256_mul_pd(tmp, tmp),d1633);

	d1631=_mm256_add_pd(d1631,d1633);d1632=_mm256_add_pd(d1632,d1633);
	d1614=_mm256_fmadd_pd(d1631,v1616,d1614);d1616=_mm256_fmadd_pd(d1631,v1614,d1616);
	d1614=_mm256_fmadd_pd(d1630,v1616,d1614);d1616=_mm256_fmadd_pd(d1630,v1614,d1616);
	d1625=_mm256_add_pd(d1625,d1629);d1628=_mm256_add_pd(d1628,d1629);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1616);
d1627=_mm256_fmadd_pd(d1628,tmp,d1627);
d1616=_mm256_fnmadd_pd(_mm256_mul_pd(d1628,v1627),_mm256_mul_pd(tmp, tmp),d1616);

	d1616=_mm256_add_pd(d1616,d1627);d1626=_mm256_add_pd(d1626,d1627);
	d1621=_mm256_add_pd(d1621,d1625);d1624=_mm256_add_pd(d1624,d1625);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1614);
d1623=_mm256_fmadd_pd(d1624,tmp,d1623);
d1614=_mm256_fnmadd_pd(_mm256_mul_pd(d1624,v1623),_mm256_mul_pd(tmp, tmp),d1614);

	d1614=_mm256_add_pd(d1614,d1623);d1622=_mm256_add_pd(d1622,d1623);
	d1613=_mm256_add_pd(d1613,d1621);d1620=_mm256_add_pd(d1620,d1621);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1619);
d1617=_mm256_fmadd_pd(d1620,tmp,d1617);
d1619=_mm256_fnmadd_pd(_mm256_mul_pd(d1620,v1617),_mm256_mul_pd(tmp, tmp),d1619);

	d1618=_mm256_add_pd(d1618,d1619);d3=_mm256_add_pd(d3,d1619);
	d1614=_mm256_add_pd(d1614,d1618);d1616=_mm256_add_pd(d1616,d1618);
	d1614=_mm256_add_pd(d1614,d1617);d1616=_mm256_add_pd(d1616,d1617);
	d1615=_mm256_add_pd(d1615,d1616);
	d1613=_mm256_add_pd(d1613,d1615);d3=_mm256_add_pd(d3,d1615);
	d1593=_mm256_add_pd(d1593,d1614);
	d1612=_mm256_add_pd(d1612,d1613);
	d1606=_mm256_add_pd(d1606,d1612);d1611=_mm256_add_pd(d1611,d1612);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1610);
d1607=_mm256_fmadd_pd(d1611,tmp,d1607);
d1610=_mm256_fnmadd_pd(_mm256_mul_pd(d1611,v1607),_mm256_mul_pd(tmp, tmp),d1610);

	d1608=_mm256_add_pd(d1608,d1610);d1609=_mm256_add_pd(d1609,d1610);
	d1591=_mm256_fmadd_pd(d1608,v1593,d1591);d1593=_mm256_fmadd_pd(d1608,v1591,d1593);
	d1591=_mm256_fmadd_pd(d1607,v1593,d1591);d1593=_mm256_fmadd_pd(d1607,v1591,d1593);
	d1602=_mm256_add_pd(d1602,d1606);d1605=_mm256_add_pd(d1605,d1606);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1593);
d1604=_mm256_fmadd_pd(d1605,tmp,d1604);
d1593=_mm256_fnmadd_pd(_mm256_mul_pd(d1605,v1604),_mm256_mul_pd(tmp, tmp),d1593);

	d1593=_mm256_add_pd(d1593,d1604);d1603=_mm256_add_pd(d1603,d1604);
	d1598=_mm256_add_pd(d1598,d1602);d1601=_mm256_add_pd(d1601,d1602);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1591);
d1600=_mm256_fmadd_pd(d1601,tmp,d1600);
d1591=_mm256_fnmadd_pd(_mm256_mul_pd(d1601,v1600),_mm256_mul_pd(tmp, tmp),d1591);

	d1591=_mm256_add_pd(d1591,d1600);d1599=_mm256_add_pd(d1599,d1600);
	d1590=_mm256_add_pd(d1590,d1598);d1597=_mm256_add_pd(d1597,d1598);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1596);
d1594=_mm256_fmadd_pd(d1597,tmp,d1594);
d1596=_mm256_fnmadd_pd(_mm256_mul_pd(d1597,v1594),_mm256_mul_pd(tmp, tmp),d1596);

	d1595=_mm256_add_pd(d1595,d1596);d3=_mm256_add_pd(d3,d1596);
	d1591=_mm256_add_pd(d1591,d1595);d1593=_mm256_add_pd(d1593,d1595);
	d1591=_mm256_add_pd(d1591,d1594);d1593=_mm256_add_pd(d1593,d1594);
	d1592=_mm256_add_pd(d1592,d1593);
	d1590=_mm256_add_pd(d1590,d1592);d3=_mm256_add_pd(d3,d1592);
	d1570=_mm256_add_pd(d1570,d1591);
	d1589=_mm256_add_pd(d1589,d1590);
	d1583=_mm256_add_pd(d1583,d1589);d1588=_mm256_add_pd(d1588,d1589);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1587);
d1584=_mm256_fmadd_pd(d1588,tmp,d1584);
d1587=_mm256_fnmadd_pd(_mm256_mul_pd(d1588,v1584),_mm256_mul_pd(tmp, tmp),d1587);

	d1585=_mm256_add_pd(d1585,d1587);d1586=_mm256_add_pd(d1586,d1587);
	d1568=_mm256_fmadd_pd(d1585,v1570,d1568);d1570=_mm256_fmadd_pd(d1585,v1568,d1570);
	d1568=_mm256_fmadd_pd(d1584,v1570,d1568);d1570=_mm256_fmadd_pd(d1584,v1568,d1570);
	d1579=_mm256_add_pd(d1579,d1583);d1582=_mm256_add_pd(d1582,d1583);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1570);
d1581=_mm256_fmadd_pd(d1582,tmp,d1581);
d1570=_mm256_fnmadd_pd(_mm256_mul_pd(d1582,v1581),_mm256_mul_pd(tmp, tmp),d1570);

	d1570=_mm256_add_pd(d1570,d1581);d1580=_mm256_add_pd(d1580,d1581);
	d1575=_mm256_add_pd(d1575,d1579);d1578=_mm256_add_pd(d1578,d1579);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1568);
d1577=_mm256_fmadd_pd(d1578,tmp,d1577);
d1568=_mm256_fnmadd_pd(_mm256_mul_pd(d1578,v1577),_mm256_mul_pd(tmp, tmp),d1568);

	d1568=_mm256_add_pd(d1568,d1577);d1576=_mm256_add_pd(d1576,d1577);
	d1567=_mm256_add_pd(d1567,d1575);d1574=_mm256_add_pd(d1574,d1575);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1573);
d1571=_mm256_fmadd_pd(d1574,tmp,d1571);
d1573=_mm256_fnmadd_pd(_mm256_mul_pd(d1574,v1571),_mm256_mul_pd(tmp, tmp),d1573);

	d1572=_mm256_add_pd(d1572,d1573);d3=_mm256_add_pd(d3,d1573);
	d1568=_mm256_add_pd(d1568,d1572);d1570=_mm256_add_pd(d1570,d1572);
	d1568=_mm256_add_pd(d1568,d1571);d1570=_mm256_add_pd(d1570,d1571);
	d1569=_mm256_add_pd(d1569,d1570);
	d1567=_mm256_add_pd(d1567,d1569);d3=_mm256_add_pd(d3,d1569);
	d1547=_mm256_add_pd(d1547,d1568);
	d1566=_mm256_add_pd(d1566,d1567);
	d1560=_mm256_add_pd(d1560,d1566);d1565=_mm256_add_pd(d1565,d1566);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1564);
d1561=_mm256_fmadd_pd(d1565,tmp,d1561);
d1564=_mm256_fnmadd_pd(_mm256_mul_pd(d1565,v1561),_mm256_mul_pd(tmp, tmp),d1564);

	d1562=_mm256_add_pd(d1562,d1564);d1563=_mm256_add_pd(d1563,d1564);
	d1545=_mm256_fmadd_pd(d1562,v1547,d1545);d1547=_mm256_fmadd_pd(d1562,v1545,d1547);
	d1545=_mm256_fmadd_pd(d1561,v1547,d1545);d1547=_mm256_fmadd_pd(d1561,v1545,d1547);
	d1556=_mm256_add_pd(d1556,d1560);d1559=_mm256_add_pd(d1559,d1560);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1547);
d1558=_mm256_fmadd_pd(d1559,tmp,d1558);
d1547=_mm256_fnmadd_pd(_mm256_mul_pd(d1559,v1558),_mm256_mul_pd(tmp, tmp),d1547);

	d1547=_mm256_add_pd(d1547,d1558);d1557=_mm256_add_pd(d1557,d1558);
	d1552=_mm256_add_pd(d1552,d1556);d1555=_mm256_add_pd(d1555,d1556);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1545);
d1554=_mm256_fmadd_pd(d1555,tmp,d1554);
d1545=_mm256_fnmadd_pd(_mm256_mul_pd(d1555,v1554),_mm256_mul_pd(tmp, tmp),d1545);

	d1545=_mm256_add_pd(d1545,d1554);d1553=_mm256_add_pd(d1553,d1554);
	d1544=_mm256_add_pd(d1544,d1552);d1551=_mm256_add_pd(d1551,d1552);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1550);
d1548=_mm256_fmadd_pd(d1551,tmp,d1548);
d1550=_mm256_fnmadd_pd(_mm256_mul_pd(d1551,v1548),_mm256_mul_pd(tmp, tmp),d1550);

	d1549=_mm256_add_pd(d1549,d1550);d3=_mm256_add_pd(d3,d1550);
	d1545=_mm256_add_pd(d1545,d1549);d1547=_mm256_add_pd(d1547,d1549);
	d1545=_mm256_add_pd(d1545,d1548);d1547=_mm256_add_pd(d1547,d1548);
	d1546=_mm256_add_pd(d1546,d1547);
	d1544=_mm256_add_pd(d1544,d1546);d3=_mm256_add_pd(d3,d1546);
	d1524=_mm256_add_pd(d1524,d1545);
	d1543=_mm256_add_pd(d1543,d1544);
	d1537=_mm256_add_pd(d1537,d1543);d1542=_mm256_add_pd(d1542,d1543);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1541);
d1538=_mm256_fmadd_pd(d1542,tmp,d1538);
d1541=_mm256_fnmadd_pd(_mm256_mul_pd(d1542,v1538),_mm256_mul_pd(tmp, tmp),d1541);

	d1539=_mm256_add_pd(d1539,d1541);d1540=_mm256_add_pd(d1540,d1541);
	d1522=_mm256_fmadd_pd(d1539,v1524,d1522);d1524=_mm256_fmadd_pd(d1539,v1522,d1524);
	d1522=_mm256_fmadd_pd(d1538,v1524,d1522);d1524=_mm256_fmadd_pd(d1538,v1522,d1524);
	d1533=_mm256_add_pd(d1533,d1537);d1536=_mm256_add_pd(d1536,d1537);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1524);
d1535=_mm256_fmadd_pd(d1536,tmp,d1535);
d1524=_mm256_fnmadd_pd(_mm256_mul_pd(d1536,v1535),_mm256_mul_pd(tmp, tmp),d1524);

	d1524=_mm256_add_pd(d1524,d1535);d1534=_mm256_add_pd(d1534,d1535);
	d1529=_mm256_add_pd(d1529,d1533);d1532=_mm256_add_pd(d1532,d1533);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1522);
d1531=_mm256_fmadd_pd(d1532,tmp,d1531);
d1522=_mm256_fnmadd_pd(_mm256_mul_pd(d1532,v1531),_mm256_mul_pd(tmp, tmp),d1522);

	d1522=_mm256_add_pd(d1522,d1531);d1530=_mm256_add_pd(d1530,d1531);
	d1521=_mm256_add_pd(d1521,d1529);d1528=_mm256_add_pd(d1528,d1529);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1527);
d1525=_mm256_fmadd_pd(d1528,tmp,d1525);
d1527=_mm256_fnmadd_pd(_mm256_mul_pd(d1528,v1525),_mm256_mul_pd(tmp, tmp),d1527);

	d1526=_mm256_add_pd(d1526,d1527);d3=_mm256_add_pd(d3,d1527);
	d1522=_mm256_add_pd(d1522,d1526);d1524=_mm256_add_pd(d1524,d1526);
	d1522=_mm256_add_pd(d1522,d1525);d1524=_mm256_add_pd(d1524,d1525);
	d1523=_mm256_add_pd(d1523,d1524);
	d1521=_mm256_add_pd(d1521,d1523);d3=_mm256_add_pd(d3,d1523);
	d1501=_mm256_add_pd(d1501,d1522);
	d1520=_mm256_add_pd(d1520,d1521);
	d1514=_mm256_add_pd(d1514,d1520);d1519=_mm256_add_pd(d1519,d1520);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1518);
d1515=_mm256_fmadd_pd(d1519,tmp,d1515);
d1518=_mm256_fnmadd_pd(_mm256_mul_pd(d1519,v1515),_mm256_mul_pd(tmp, tmp),d1518);

	d1516=_mm256_add_pd(d1516,d1518);d1517=_mm256_add_pd(d1517,d1518);
	d1499=_mm256_fmadd_pd(d1516,v1501,d1499);d1501=_mm256_fmadd_pd(d1516,v1499,d1501);
	d1499=_mm256_fmadd_pd(d1515,v1501,d1499);d1501=_mm256_fmadd_pd(d1515,v1499,d1501);
	d1510=_mm256_add_pd(d1510,d1514);d1513=_mm256_add_pd(d1513,d1514);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1501);
d1512=_mm256_fmadd_pd(d1513,tmp,d1512);
d1501=_mm256_fnmadd_pd(_mm256_mul_pd(d1513,v1512),_mm256_mul_pd(tmp, tmp),d1501);

	d1501=_mm256_add_pd(d1501,d1512);d1511=_mm256_add_pd(d1511,d1512);
	d1506=_mm256_add_pd(d1506,d1510);d1509=_mm256_add_pd(d1509,d1510);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1499);
d1508=_mm256_fmadd_pd(d1509,tmp,d1508);
d1499=_mm256_fnmadd_pd(_mm256_mul_pd(d1509,v1508),_mm256_mul_pd(tmp, tmp),d1499);

	d1499=_mm256_add_pd(d1499,d1508);d1507=_mm256_add_pd(d1507,d1508);
	d1498=_mm256_add_pd(d1498,d1506);d1505=_mm256_add_pd(d1505,d1506);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1504);
d1502=_mm256_fmadd_pd(d1505,tmp,d1502);
d1504=_mm256_fnmadd_pd(_mm256_mul_pd(d1505,v1502),_mm256_mul_pd(tmp, tmp),d1504);

	d1503=_mm256_add_pd(d1503,d1504);d3=_mm256_add_pd(d3,d1504);
	d1499=_mm256_add_pd(d1499,d1503);d1501=_mm256_add_pd(d1501,d1503);
	d1499=_mm256_add_pd(d1499,d1502);d1501=_mm256_add_pd(d1501,d1502);
	d1500=_mm256_add_pd(d1500,d1501);
	d1498=_mm256_add_pd(d1498,d1500);d3=_mm256_add_pd(d3,d1500);
	d1478=_mm256_add_pd(d1478,d1499);
	d1497=_mm256_add_pd(d1497,d1498);
	d1491=_mm256_add_pd(d1491,d1497);d1496=_mm256_add_pd(d1496,d1497);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1495);
d1492=_mm256_fmadd_pd(d1496,tmp,d1492);
d1495=_mm256_fnmadd_pd(_mm256_mul_pd(d1496,v1492),_mm256_mul_pd(tmp, tmp),d1495);

	d1493=_mm256_add_pd(d1493,d1495);d1494=_mm256_add_pd(d1494,d1495);
	d1476=_mm256_fmadd_pd(d1493,v1478,d1476);d1478=_mm256_fmadd_pd(d1493,v1476,d1478);
	d1476=_mm256_fmadd_pd(d1492,v1478,d1476);d1478=_mm256_fmadd_pd(d1492,v1476,d1478);
	d1487=_mm256_add_pd(d1487,d1491);d1490=_mm256_add_pd(d1490,d1491);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1478);
d1489=_mm256_fmadd_pd(d1490,tmp,d1489);
d1478=_mm256_fnmadd_pd(_mm256_mul_pd(d1490,v1489),_mm256_mul_pd(tmp, tmp),d1478);

	d1478=_mm256_add_pd(d1478,d1489);d1488=_mm256_add_pd(d1488,d1489);
	d1483=_mm256_add_pd(d1483,d1487);d1486=_mm256_add_pd(d1486,d1487);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1476);
d1485=_mm256_fmadd_pd(d1486,tmp,d1485);
d1476=_mm256_fnmadd_pd(_mm256_mul_pd(d1486,v1485),_mm256_mul_pd(tmp, tmp),d1476);

	d1476=_mm256_add_pd(d1476,d1485);d1484=_mm256_add_pd(d1484,d1485);
	d1475=_mm256_add_pd(d1475,d1483);d1482=_mm256_add_pd(d1482,d1483);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1481);
d1479=_mm256_fmadd_pd(d1482,tmp,d1479);
d1481=_mm256_fnmadd_pd(_mm256_mul_pd(d1482,v1479),_mm256_mul_pd(tmp, tmp),d1481);

	d1480=_mm256_add_pd(d1480,d1481);d3=_mm256_add_pd(d3,d1481);
	d1476=_mm256_add_pd(d1476,d1480);d1478=_mm256_add_pd(d1478,d1480);
	d1476=_mm256_add_pd(d1476,d1479);d1478=_mm256_add_pd(d1478,d1479);
	d1477=_mm256_add_pd(d1477,d1478);
	d1475=_mm256_add_pd(d1475,d1477);d3=_mm256_add_pd(d3,d1477);
	d1455=_mm256_add_pd(d1455,d1476);
	d1474=_mm256_add_pd(d1474,d1475);
	d1468=_mm256_add_pd(d1468,d1474);d1473=_mm256_add_pd(d1473,d1474);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1472);
d1469=_mm256_fmadd_pd(d1473,tmp,d1469);
d1472=_mm256_fnmadd_pd(_mm256_mul_pd(d1473,v1469),_mm256_mul_pd(tmp, tmp),d1472);

	d1470=_mm256_add_pd(d1470,d1472);d1471=_mm256_add_pd(d1471,d1472);
	d1453=_mm256_fmadd_pd(d1470,v1455,d1453);d1455=_mm256_fmadd_pd(d1470,v1453,d1455);
	d1453=_mm256_fmadd_pd(d1469,v1455,d1453);d1455=_mm256_fmadd_pd(d1469,v1453,d1455);
	d1464=_mm256_add_pd(d1464,d1468);d1467=_mm256_add_pd(d1467,d1468);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1455);
d1466=_mm256_fmadd_pd(d1467,tmp,d1466);
d1455=_mm256_fnmadd_pd(_mm256_mul_pd(d1467,v1466),_mm256_mul_pd(tmp, tmp),d1455);

	d1455=_mm256_add_pd(d1455,d1466);d1465=_mm256_add_pd(d1465,d1466);
	d1460=_mm256_add_pd(d1460,d1464);d1463=_mm256_add_pd(d1463,d1464);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1453);
d1462=_mm256_fmadd_pd(d1463,tmp,d1462);
d1453=_mm256_fnmadd_pd(_mm256_mul_pd(d1463,v1462),_mm256_mul_pd(tmp, tmp),d1453);

	d1453=_mm256_add_pd(d1453,d1462);d1461=_mm256_add_pd(d1461,d1462);
	d1452=_mm256_add_pd(d1452,d1460);d1459=_mm256_add_pd(d1459,d1460);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1458);
d1456=_mm256_fmadd_pd(d1459,tmp,d1456);
d1458=_mm256_fnmadd_pd(_mm256_mul_pd(d1459,v1456),_mm256_mul_pd(tmp, tmp),d1458);

	d1457=_mm256_add_pd(d1457,d1458);d3=_mm256_add_pd(d3,d1458);
	d1453=_mm256_add_pd(d1453,d1457);d1455=_mm256_add_pd(d1455,d1457);
	d1453=_mm256_add_pd(d1453,d1456);d1455=_mm256_add_pd(d1455,d1456);
	d1454=_mm256_add_pd(d1454,d1455);
	d1452=_mm256_add_pd(d1452,d1454);d3=_mm256_add_pd(d3,d1454);
	d1432=_mm256_add_pd(d1432,d1453);
	d1451=_mm256_add_pd(d1451,d1452);
	d1445=_mm256_add_pd(d1445,d1451);d1450=_mm256_add_pd(d1450,d1451);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1449);
d1446=_mm256_fmadd_pd(d1450,tmp,d1446);
d1449=_mm256_fnmadd_pd(_mm256_mul_pd(d1450,v1446),_mm256_mul_pd(tmp, tmp),d1449);

	d1447=_mm256_add_pd(d1447,d1449);d1448=_mm256_add_pd(d1448,d1449);
	d1430=_mm256_fmadd_pd(d1447,v1432,d1430);d1432=_mm256_fmadd_pd(d1447,v1430,d1432);
	d1430=_mm256_fmadd_pd(d1446,v1432,d1430);d1432=_mm256_fmadd_pd(d1446,v1430,d1432);
	d1441=_mm256_add_pd(d1441,d1445);d1444=_mm256_add_pd(d1444,d1445);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1432);
d1443=_mm256_fmadd_pd(d1444,tmp,d1443);
d1432=_mm256_fnmadd_pd(_mm256_mul_pd(d1444,v1443),_mm256_mul_pd(tmp, tmp),d1432);

	d1432=_mm256_add_pd(d1432,d1443);d1442=_mm256_add_pd(d1442,d1443);
	d1437=_mm256_add_pd(d1437,d1441);d1440=_mm256_add_pd(d1440,d1441);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1430);
d1439=_mm256_fmadd_pd(d1440,tmp,d1439);
d1430=_mm256_fnmadd_pd(_mm256_mul_pd(d1440,v1439),_mm256_mul_pd(tmp, tmp),d1430);

	d1430=_mm256_add_pd(d1430,d1439);d1438=_mm256_add_pd(d1438,d1439);
	d1429=_mm256_add_pd(d1429,d1437);d1436=_mm256_add_pd(d1436,d1437);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1435);
d1433=_mm256_fmadd_pd(d1436,tmp,d1433);
d1435=_mm256_fnmadd_pd(_mm256_mul_pd(d1436,v1433),_mm256_mul_pd(tmp, tmp),d1435);

	d1434=_mm256_add_pd(d1434,d1435);d3=_mm256_add_pd(d3,d1435);
	d1430=_mm256_add_pd(d1430,d1434);d1432=_mm256_add_pd(d1432,d1434);
	d1430=_mm256_add_pd(d1430,d1433);d1432=_mm256_add_pd(d1432,d1433);
	d1431=_mm256_add_pd(d1431,d1432);
	d1429=_mm256_add_pd(d1429,d1431);d3=_mm256_add_pd(d3,d1431);
	d1409=_mm256_add_pd(d1409,d1430);
	d1428=_mm256_add_pd(d1428,d1429);
	d1422=_mm256_add_pd(d1422,d1428);d1427=_mm256_add_pd(d1427,d1428);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1426);
d1423=_mm256_fmadd_pd(d1427,tmp,d1423);
d1426=_mm256_fnmadd_pd(_mm256_mul_pd(d1427,v1423),_mm256_mul_pd(tmp, tmp),d1426);

	d1424=_mm256_add_pd(d1424,d1426);d1425=_mm256_add_pd(d1425,d1426);
	d1407=_mm256_fmadd_pd(d1424,v1409,d1407);d1409=_mm256_fmadd_pd(d1424,v1407,d1409);
	d1407=_mm256_fmadd_pd(d1423,v1409,d1407);d1409=_mm256_fmadd_pd(d1423,v1407,d1409);
	d1418=_mm256_add_pd(d1418,d1422);d1421=_mm256_add_pd(d1421,d1422);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1409);
d1420=_mm256_fmadd_pd(d1421,tmp,d1420);
d1409=_mm256_fnmadd_pd(_mm256_mul_pd(d1421,v1420),_mm256_mul_pd(tmp, tmp),d1409);

	d1409=_mm256_add_pd(d1409,d1420);d1419=_mm256_add_pd(d1419,d1420);
	d1414=_mm256_add_pd(d1414,d1418);d1417=_mm256_add_pd(d1417,d1418);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1407);
d1416=_mm256_fmadd_pd(d1417,tmp,d1416);
d1407=_mm256_fnmadd_pd(_mm256_mul_pd(d1417,v1416),_mm256_mul_pd(tmp, tmp),d1407);

	d1407=_mm256_add_pd(d1407,d1416);d1415=_mm256_add_pd(d1415,d1416);
	d1406=_mm256_add_pd(d1406,d1414);d1413=_mm256_add_pd(d1413,d1414);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1412);
d1410=_mm256_fmadd_pd(d1413,tmp,d1410);
d1412=_mm256_fnmadd_pd(_mm256_mul_pd(d1413,v1410),_mm256_mul_pd(tmp, tmp),d1412);

	d1411=_mm256_add_pd(d1411,d1412);d3=_mm256_add_pd(d3,d1412);
	d1407=_mm256_add_pd(d1407,d1411);d1409=_mm256_add_pd(d1409,d1411);
	d1407=_mm256_add_pd(d1407,d1410);d1409=_mm256_add_pd(d1409,d1410);
	d1408=_mm256_add_pd(d1408,d1409);
	d1406=_mm256_add_pd(d1406,d1408);d3=_mm256_add_pd(d3,d1408);
	d1386=_mm256_add_pd(d1386,d1407);
	d1405=_mm256_add_pd(d1405,d1406);
	d1399=_mm256_add_pd(d1399,d1405);d1404=_mm256_add_pd(d1404,d1405);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1403);
d1400=_mm256_fmadd_pd(d1404,tmp,d1400);
d1403=_mm256_fnmadd_pd(_mm256_mul_pd(d1404,v1400),_mm256_mul_pd(tmp, tmp),d1403);

	d1401=_mm256_add_pd(d1401,d1403);d1402=_mm256_add_pd(d1402,d1403);
	d1384=_mm256_fmadd_pd(d1401,v1386,d1384);d1386=_mm256_fmadd_pd(d1401,v1384,d1386);
	d1384=_mm256_fmadd_pd(d1400,v1386,d1384);d1386=_mm256_fmadd_pd(d1400,v1384,d1386);
	d1395=_mm256_add_pd(d1395,d1399);d1398=_mm256_add_pd(d1398,d1399);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1386);
d1397=_mm256_fmadd_pd(d1398,tmp,d1397);
d1386=_mm256_fnmadd_pd(_mm256_mul_pd(d1398,v1397),_mm256_mul_pd(tmp, tmp),d1386);

	d1386=_mm256_add_pd(d1386,d1397);d1396=_mm256_add_pd(d1396,d1397);
	d1391=_mm256_add_pd(d1391,d1395);d1394=_mm256_add_pd(d1394,d1395);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1384);
d1393=_mm256_fmadd_pd(d1394,tmp,d1393);
d1384=_mm256_fnmadd_pd(_mm256_mul_pd(d1394,v1393),_mm256_mul_pd(tmp, tmp),d1384);

	d1384=_mm256_add_pd(d1384,d1393);d1392=_mm256_add_pd(d1392,d1393);
	d1383=_mm256_add_pd(d1383,d1391);d1390=_mm256_add_pd(d1390,d1391);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1389);
d1387=_mm256_fmadd_pd(d1390,tmp,d1387);
d1389=_mm256_fnmadd_pd(_mm256_mul_pd(d1390,v1387),_mm256_mul_pd(tmp, tmp),d1389);

	d1388=_mm256_add_pd(d1388,d1389);d3=_mm256_add_pd(d3,d1389);
	d1384=_mm256_add_pd(d1384,d1388);d1386=_mm256_add_pd(d1386,d1388);
	d1384=_mm256_add_pd(d1384,d1387);d1386=_mm256_add_pd(d1386,d1387);
	d1385=_mm256_add_pd(d1385,d1386);
	d1383=_mm256_add_pd(d1383,d1385);d3=_mm256_add_pd(d3,d1385);
	d1363=_mm256_add_pd(d1363,d1384);
	d1382=_mm256_add_pd(d1382,d1383);
	d1376=_mm256_add_pd(d1376,d1382);d1381=_mm256_add_pd(d1381,d1382);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1380);
d1377=_mm256_fmadd_pd(d1381,tmp,d1377);
d1380=_mm256_fnmadd_pd(_mm256_mul_pd(d1381,v1377),_mm256_mul_pd(tmp, tmp),d1380);

	d1378=_mm256_add_pd(d1378,d1380);d1379=_mm256_add_pd(d1379,d1380);
	d1361=_mm256_fmadd_pd(d1378,v1363,d1361);d1363=_mm256_fmadd_pd(d1378,v1361,d1363);
	d1361=_mm256_fmadd_pd(d1377,v1363,d1361);d1363=_mm256_fmadd_pd(d1377,v1361,d1363);
	d1372=_mm256_add_pd(d1372,d1376);d1375=_mm256_add_pd(d1375,d1376);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1363);
d1374=_mm256_fmadd_pd(d1375,tmp,d1374);
d1363=_mm256_fnmadd_pd(_mm256_mul_pd(d1375,v1374),_mm256_mul_pd(tmp, tmp),d1363);

	d1363=_mm256_add_pd(d1363,d1374);d1373=_mm256_add_pd(d1373,d1374);
	d1368=_mm256_add_pd(d1368,d1372);d1371=_mm256_add_pd(d1371,d1372);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1361);
d1370=_mm256_fmadd_pd(d1371,tmp,d1370);
d1361=_mm256_fnmadd_pd(_mm256_mul_pd(d1371,v1370),_mm256_mul_pd(tmp, tmp),d1361);

	d1361=_mm256_add_pd(d1361,d1370);d1369=_mm256_add_pd(d1369,d1370);
	d1360=_mm256_add_pd(d1360,d1368);d1367=_mm256_add_pd(d1367,d1368);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1366);
d1364=_mm256_fmadd_pd(d1367,tmp,d1364);
d1366=_mm256_fnmadd_pd(_mm256_mul_pd(d1367,v1364),_mm256_mul_pd(tmp, tmp),d1366);

	d1365=_mm256_add_pd(d1365,d1366);d3=_mm256_add_pd(d3,d1366);
	d1361=_mm256_add_pd(d1361,d1365);d1363=_mm256_add_pd(d1363,d1365);
	d1361=_mm256_add_pd(d1361,d1364);d1363=_mm256_add_pd(d1363,d1364);
	d1362=_mm256_add_pd(d1362,d1363);
	d1360=_mm256_add_pd(d1360,d1362);d3=_mm256_add_pd(d3,d1362);
	d1340=_mm256_add_pd(d1340,d1361);
	d1359=_mm256_add_pd(d1359,d1360);
	d1353=_mm256_add_pd(d1353,d1359);d1358=_mm256_add_pd(d1358,d1359);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1357);
d1354=_mm256_fmadd_pd(d1358,tmp,d1354);
d1357=_mm256_fnmadd_pd(_mm256_mul_pd(d1358,v1354),_mm256_mul_pd(tmp, tmp),d1357);

	d1355=_mm256_add_pd(d1355,d1357);d1356=_mm256_add_pd(d1356,d1357);
	d1338=_mm256_fmadd_pd(d1355,v1340,d1338);d1340=_mm256_fmadd_pd(d1355,v1338,d1340);
	d1338=_mm256_fmadd_pd(d1354,v1340,d1338);d1340=_mm256_fmadd_pd(d1354,v1338,d1340);
	d1349=_mm256_add_pd(d1349,d1353);d1352=_mm256_add_pd(d1352,d1353);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1340);
d1351=_mm256_fmadd_pd(d1352,tmp,d1351);
d1340=_mm256_fnmadd_pd(_mm256_mul_pd(d1352,v1351),_mm256_mul_pd(tmp, tmp),d1340);

	d1340=_mm256_add_pd(d1340,d1351);d1350=_mm256_add_pd(d1350,d1351);
	d1345=_mm256_add_pd(d1345,d1349);d1348=_mm256_add_pd(d1348,d1349);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1338);
d1347=_mm256_fmadd_pd(d1348,tmp,d1347);
d1338=_mm256_fnmadd_pd(_mm256_mul_pd(d1348,v1347),_mm256_mul_pd(tmp, tmp),d1338);

	d1338=_mm256_add_pd(d1338,d1347);d1346=_mm256_add_pd(d1346,d1347);
	d1337=_mm256_add_pd(d1337,d1345);d1344=_mm256_add_pd(d1344,d1345);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1343);
d1341=_mm256_fmadd_pd(d1344,tmp,d1341);
d1343=_mm256_fnmadd_pd(_mm256_mul_pd(d1344,v1341),_mm256_mul_pd(tmp, tmp),d1343);

	d1342=_mm256_add_pd(d1342,d1343);d3=_mm256_add_pd(d3,d1343);
	d1338=_mm256_add_pd(d1338,d1342);d1340=_mm256_add_pd(d1340,d1342);
	d1338=_mm256_add_pd(d1338,d1341);d1340=_mm256_add_pd(d1340,d1341);
	d1339=_mm256_add_pd(d1339,d1340);
	d1337=_mm256_add_pd(d1337,d1339);d3=_mm256_add_pd(d3,d1339);
	d1317=_mm256_add_pd(d1317,d1338);
	d1336=_mm256_add_pd(d1336,d1337);
	d1330=_mm256_add_pd(d1330,d1336);d1335=_mm256_add_pd(d1335,d1336);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1334);
d1331=_mm256_fmadd_pd(d1335,tmp,d1331);
d1334=_mm256_fnmadd_pd(_mm256_mul_pd(d1335,v1331),_mm256_mul_pd(tmp, tmp),d1334);

	d1332=_mm256_add_pd(d1332,d1334);d1333=_mm256_add_pd(d1333,d1334);
	d1315=_mm256_fmadd_pd(d1332,v1317,d1315);d1317=_mm256_fmadd_pd(d1332,v1315,d1317);
	d1315=_mm256_fmadd_pd(d1331,v1317,d1315);d1317=_mm256_fmadd_pd(d1331,v1315,d1317);
	d1326=_mm256_add_pd(d1326,d1330);d1329=_mm256_add_pd(d1329,d1330);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1317);
d1328=_mm256_fmadd_pd(d1329,tmp,d1328);
d1317=_mm256_fnmadd_pd(_mm256_mul_pd(d1329,v1328),_mm256_mul_pd(tmp, tmp),d1317);

	d1317=_mm256_add_pd(d1317,d1328);d1327=_mm256_add_pd(d1327,d1328);
	d1322=_mm256_add_pd(d1322,d1326);d1325=_mm256_add_pd(d1325,d1326);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1315);
d1324=_mm256_fmadd_pd(d1325,tmp,d1324);
d1315=_mm256_fnmadd_pd(_mm256_mul_pd(d1325,v1324),_mm256_mul_pd(tmp, tmp),d1315);

	d1315=_mm256_add_pd(d1315,d1324);d1323=_mm256_add_pd(d1323,d1324);
	d1314=_mm256_add_pd(d1314,d1322);d1321=_mm256_add_pd(d1321,d1322);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1320);
d1318=_mm256_fmadd_pd(d1321,tmp,d1318);
d1320=_mm256_fnmadd_pd(_mm256_mul_pd(d1321,v1318),_mm256_mul_pd(tmp, tmp),d1320);

	d1319=_mm256_add_pd(d1319,d1320);d3=_mm256_add_pd(d3,d1320);
	d1315=_mm256_add_pd(d1315,d1319);d1317=_mm256_add_pd(d1317,d1319);
	d1315=_mm256_add_pd(d1315,d1318);d1317=_mm256_add_pd(d1317,d1318);
	d1316=_mm256_add_pd(d1316,d1317);
	d1314=_mm256_add_pd(d1314,d1316);d3=_mm256_add_pd(d3,d1316);
	d1294=_mm256_add_pd(d1294,d1315);
	d1313=_mm256_add_pd(d1313,d1314);
	d1307=_mm256_add_pd(d1307,d1313);d1312=_mm256_add_pd(d1312,d1313);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1311);
d1308=_mm256_fmadd_pd(d1312,tmp,d1308);
d1311=_mm256_fnmadd_pd(_mm256_mul_pd(d1312,v1308),_mm256_mul_pd(tmp, tmp),d1311);

	d1309=_mm256_add_pd(d1309,d1311);d1310=_mm256_add_pd(d1310,d1311);
	d1292=_mm256_fmadd_pd(d1309,v1294,d1292);d1294=_mm256_fmadd_pd(d1309,v1292,d1294);
	d1292=_mm256_fmadd_pd(d1308,v1294,d1292);d1294=_mm256_fmadd_pd(d1308,v1292,d1294);
	d1303=_mm256_add_pd(d1303,d1307);d1306=_mm256_add_pd(d1306,d1307);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1294);
d1305=_mm256_fmadd_pd(d1306,tmp,d1305);
d1294=_mm256_fnmadd_pd(_mm256_mul_pd(d1306,v1305),_mm256_mul_pd(tmp, tmp),d1294);

	d1294=_mm256_add_pd(d1294,d1305);d1304=_mm256_add_pd(d1304,d1305);
	d1299=_mm256_add_pd(d1299,d1303);d1302=_mm256_add_pd(d1302,d1303);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1292);
d1301=_mm256_fmadd_pd(d1302,tmp,d1301);
d1292=_mm256_fnmadd_pd(_mm256_mul_pd(d1302,v1301),_mm256_mul_pd(tmp, tmp),d1292);

	d1292=_mm256_add_pd(d1292,d1301);d1300=_mm256_add_pd(d1300,d1301);
	d1291=_mm256_add_pd(d1291,d1299);d1298=_mm256_add_pd(d1298,d1299);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1297);
d1295=_mm256_fmadd_pd(d1298,tmp,d1295);
d1297=_mm256_fnmadd_pd(_mm256_mul_pd(d1298,v1295),_mm256_mul_pd(tmp, tmp),d1297);

	d1296=_mm256_add_pd(d1296,d1297);d3=_mm256_add_pd(d3,d1297);
	d1292=_mm256_add_pd(d1292,d1296);d1294=_mm256_add_pd(d1294,d1296);
	d1292=_mm256_add_pd(d1292,d1295);d1294=_mm256_add_pd(d1294,d1295);
	d1293=_mm256_add_pd(d1293,d1294);
	d1291=_mm256_add_pd(d1291,d1293);d3=_mm256_add_pd(d3,d1293);
	d1271=_mm256_add_pd(d1271,d1292);
	d1290=_mm256_add_pd(d1290,d1291);
	d1284=_mm256_add_pd(d1284,d1290);d1289=_mm256_add_pd(d1289,d1290);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1288);
d1285=_mm256_fmadd_pd(d1289,tmp,d1285);
d1288=_mm256_fnmadd_pd(_mm256_mul_pd(d1289,v1285),_mm256_mul_pd(tmp, tmp),d1288);

	d1286=_mm256_add_pd(d1286,d1288);d1287=_mm256_add_pd(d1287,d1288);
	d1269=_mm256_fmadd_pd(d1286,v1271,d1269);d1271=_mm256_fmadd_pd(d1286,v1269,d1271);
	d1269=_mm256_fmadd_pd(d1285,v1271,d1269);d1271=_mm256_fmadd_pd(d1285,v1269,d1271);
	d1280=_mm256_add_pd(d1280,d1284);d1283=_mm256_add_pd(d1283,d1284);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1271);
d1282=_mm256_fmadd_pd(d1283,tmp,d1282);
d1271=_mm256_fnmadd_pd(_mm256_mul_pd(d1283,v1282),_mm256_mul_pd(tmp, tmp),d1271);

	d1271=_mm256_add_pd(d1271,d1282);d1281=_mm256_add_pd(d1281,d1282);
	d1276=_mm256_add_pd(d1276,d1280);d1279=_mm256_add_pd(d1279,d1280);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1269);
d1278=_mm256_fmadd_pd(d1279,tmp,d1278);
d1269=_mm256_fnmadd_pd(_mm256_mul_pd(d1279,v1278),_mm256_mul_pd(tmp, tmp),d1269);

	d1269=_mm256_add_pd(d1269,d1278);d1277=_mm256_add_pd(d1277,d1278);
	d1268=_mm256_add_pd(d1268,d1276);d1275=_mm256_add_pd(d1275,d1276);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1274);
d1272=_mm256_fmadd_pd(d1275,tmp,d1272);
d1274=_mm256_fnmadd_pd(_mm256_mul_pd(d1275,v1272),_mm256_mul_pd(tmp, tmp),d1274);

	d1273=_mm256_add_pd(d1273,d1274);d3=_mm256_add_pd(d3,d1274);
	d1269=_mm256_add_pd(d1269,d1273);d1271=_mm256_add_pd(d1271,d1273);
	d1269=_mm256_add_pd(d1269,d1272);d1271=_mm256_add_pd(d1271,d1272);
	d1270=_mm256_add_pd(d1270,d1271);
	d1268=_mm256_add_pd(d1268,d1270);d3=_mm256_add_pd(d3,d1270);
	d1248=_mm256_add_pd(d1248,d1269);
	d1267=_mm256_add_pd(d1267,d1268);
	d1261=_mm256_add_pd(d1261,d1267);d1266=_mm256_add_pd(d1266,d1267);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1265);
d1262=_mm256_fmadd_pd(d1266,tmp,d1262);
d1265=_mm256_fnmadd_pd(_mm256_mul_pd(d1266,v1262),_mm256_mul_pd(tmp, tmp),d1265);

	d1263=_mm256_add_pd(d1263,d1265);d1264=_mm256_add_pd(d1264,d1265);
	d1246=_mm256_fmadd_pd(d1263,v1248,d1246);d1248=_mm256_fmadd_pd(d1263,v1246,d1248);
	d1246=_mm256_fmadd_pd(d1262,v1248,d1246);d1248=_mm256_fmadd_pd(d1262,v1246,d1248);
	d1257=_mm256_add_pd(d1257,d1261);d1260=_mm256_add_pd(d1260,d1261);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1248);
d1259=_mm256_fmadd_pd(d1260,tmp,d1259);
d1248=_mm256_fnmadd_pd(_mm256_mul_pd(d1260,v1259),_mm256_mul_pd(tmp, tmp),d1248);

	d1248=_mm256_add_pd(d1248,d1259);d1258=_mm256_add_pd(d1258,d1259);
	d1253=_mm256_add_pd(d1253,d1257);d1256=_mm256_add_pd(d1256,d1257);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1246);
d1255=_mm256_fmadd_pd(d1256,tmp,d1255);
d1246=_mm256_fnmadd_pd(_mm256_mul_pd(d1256,v1255),_mm256_mul_pd(tmp, tmp),d1246);

	d1246=_mm256_add_pd(d1246,d1255);d1254=_mm256_add_pd(d1254,d1255);
	d1245=_mm256_add_pd(d1245,d1253);d1252=_mm256_add_pd(d1252,d1253);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1251);
d1249=_mm256_fmadd_pd(d1252,tmp,d1249);
d1251=_mm256_fnmadd_pd(_mm256_mul_pd(d1252,v1249),_mm256_mul_pd(tmp, tmp),d1251);

	d1250=_mm256_add_pd(d1250,d1251);d3=_mm256_add_pd(d3,d1251);
	d1246=_mm256_add_pd(d1246,d1250);d1248=_mm256_add_pd(d1248,d1250);
	d1246=_mm256_add_pd(d1246,d1249);d1248=_mm256_add_pd(d1248,d1249);
	d1247=_mm256_add_pd(d1247,d1248);
	d1245=_mm256_add_pd(d1245,d1247);d3=_mm256_add_pd(d3,d1247);
	d1225=_mm256_add_pd(d1225,d1246);
	d1244=_mm256_add_pd(d1244,d1245);
	d1238=_mm256_add_pd(d1238,d1244);d1243=_mm256_add_pd(d1243,d1244);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1242);
d1239=_mm256_fmadd_pd(d1243,tmp,d1239);
d1242=_mm256_fnmadd_pd(_mm256_mul_pd(d1243,v1239),_mm256_mul_pd(tmp, tmp),d1242);

	d1240=_mm256_add_pd(d1240,d1242);d1241=_mm256_add_pd(d1241,d1242);
	d1223=_mm256_fmadd_pd(d1240,v1225,d1223);d1225=_mm256_fmadd_pd(d1240,v1223,d1225);
	d1223=_mm256_fmadd_pd(d1239,v1225,d1223);d1225=_mm256_fmadd_pd(d1239,v1223,d1225);
	d1234=_mm256_add_pd(d1234,d1238);d1237=_mm256_add_pd(d1237,d1238);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1225);
d1236=_mm256_fmadd_pd(d1237,tmp,d1236);
d1225=_mm256_fnmadd_pd(_mm256_mul_pd(d1237,v1236),_mm256_mul_pd(tmp, tmp),d1225);

	d1225=_mm256_add_pd(d1225,d1236);d1235=_mm256_add_pd(d1235,d1236);
	d1230=_mm256_add_pd(d1230,d1234);d1233=_mm256_add_pd(d1233,d1234);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1223);
d1232=_mm256_fmadd_pd(d1233,tmp,d1232);
d1223=_mm256_fnmadd_pd(_mm256_mul_pd(d1233,v1232),_mm256_mul_pd(tmp, tmp),d1223);

	d1223=_mm256_add_pd(d1223,d1232);d1231=_mm256_add_pd(d1231,d1232);
	d1222=_mm256_add_pd(d1222,d1230);d1229=_mm256_add_pd(d1229,d1230);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1228);
d1226=_mm256_fmadd_pd(d1229,tmp,d1226);
d1228=_mm256_fnmadd_pd(_mm256_mul_pd(d1229,v1226),_mm256_mul_pd(tmp, tmp),d1228);

	d1227=_mm256_add_pd(d1227,d1228);d3=_mm256_add_pd(d3,d1228);
	d1223=_mm256_add_pd(d1223,d1227);d1225=_mm256_add_pd(d1225,d1227);
	d1223=_mm256_add_pd(d1223,d1226);d1225=_mm256_add_pd(d1225,d1226);
	d1224=_mm256_add_pd(d1224,d1225);
	d1222=_mm256_add_pd(d1222,d1224);d3=_mm256_add_pd(d3,d1224);
	d1202=_mm256_add_pd(d1202,d1223);
	d1221=_mm256_add_pd(d1221,d1222);
	d1215=_mm256_add_pd(d1215,d1221);d1220=_mm256_add_pd(d1220,d1221);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1219);
d1216=_mm256_fmadd_pd(d1220,tmp,d1216);
d1219=_mm256_fnmadd_pd(_mm256_mul_pd(d1220,v1216),_mm256_mul_pd(tmp, tmp),d1219);

	d1217=_mm256_add_pd(d1217,d1219);d1218=_mm256_add_pd(d1218,d1219);
	d1200=_mm256_fmadd_pd(d1217,v1202,d1200);d1202=_mm256_fmadd_pd(d1217,v1200,d1202);
	d1200=_mm256_fmadd_pd(d1216,v1202,d1200);d1202=_mm256_fmadd_pd(d1216,v1200,d1202);
	d1211=_mm256_add_pd(d1211,d1215);d1214=_mm256_add_pd(d1214,d1215);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1202);
d1213=_mm256_fmadd_pd(d1214,tmp,d1213);
d1202=_mm256_fnmadd_pd(_mm256_mul_pd(d1214,v1213),_mm256_mul_pd(tmp, tmp),d1202);

	d1202=_mm256_add_pd(d1202,d1213);d1212=_mm256_add_pd(d1212,d1213);
	d1207=_mm256_add_pd(d1207,d1211);d1210=_mm256_add_pd(d1210,d1211);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1200);
d1209=_mm256_fmadd_pd(d1210,tmp,d1209);
d1200=_mm256_fnmadd_pd(_mm256_mul_pd(d1210,v1209),_mm256_mul_pd(tmp, tmp),d1200);

	d1200=_mm256_add_pd(d1200,d1209);d1208=_mm256_add_pd(d1208,d1209);
	d1199=_mm256_add_pd(d1199,d1207);d1206=_mm256_add_pd(d1206,d1207);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1205);
d1203=_mm256_fmadd_pd(d1206,tmp,d1203);
d1205=_mm256_fnmadd_pd(_mm256_mul_pd(d1206,v1203),_mm256_mul_pd(tmp, tmp),d1205);

	d1204=_mm256_add_pd(d1204,d1205);d3=_mm256_add_pd(d3,d1205);
	d1200=_mm256_add_pd(d1200,d1204);d1202=_mm256_add_pd(d1202,d1204);
	d1200=_mm256_add_pd(d1200,d1203);d1202=_mm256_add_pd(d1202,d1203);
	d1201=_mm256_add_pd(d1201,d1202);
	d1199=_mm256_add_pd(d1199,d1201);d3=_mm256_add_pd(d3,d1201);
	d1179=_mm256_add_pd(d1179,d1200);
	d1198=_mm256_add_pd(d1198,d1199);
	d1192=_mm256_add_pd(d1192,d1198);d1197=_mm256_add_pd(d1197,d1198);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1196);
d1193=_mm256_fmadd_pd(d1197,tmp,d1193);
d1196=_mm256_fnmadd_pd(_mm256_mul_pd(d1197,v1193),_mm256_mul_pd(tmp, tmp),d1196);

	d1194=_mm256_add_pd(d1194,d1196);d1195=_mm256_add_pd(d1195,d1196);
	d1177=_mm256_fmadd_pd(d1194,v1179,d1177);d1179=_mm256_fmadd_pd(d1194,v1177,d1179);
	d1177=_mm256_fmadd_pd(d1193,v1179,d1177);d1179=_mm256_fmadd_pd(d1193,v1177,d1179);
	d1188=_mm256_add_pd(d1188,d1192);d1191=_mm256_add_pd(d1191,d1192);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1179);
d1190=_mm256_fmadd_pd(d1191,tmp,d1190);
d1179=_mm256_fnmadd_pd(_mm256_mul_pd(d1191,v1190),_mm256_mul_pd(tmp, tmp),d1179);

	d1179=_mm256_add_pd(d1179,d1190);d1189=_mm256_add_pd(d1189,d1190);
	d1184=_mm256_add_pd(d1184,d1188);d1187=_mm256_add_pd(d1187,d1188);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1177);
d1186=_mm256_fmadd_pd(d1187,tmp,d1186);
d1177=_mm256_fnmadd_pd(_mm256_mul_pd(d1187,v1186),_mm256_mul_pd(tmp, tmp),d1177);

	d1177=_mm256_add_pd(d1177,d1186);d1185=_mm256_add_pd(d1185,d1186);
	d1176=_mm256_add_pd(d1176,d1184);d1183=_mm256_add_pd(d1183,d1184);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1182);
d1180=_mm256_fmadd_pd(d1183,tmp,d1180);
d1182=_mm256_fnmadd_pd(_mm256_mul_pd(d1183,v1180),_mm256_mul_pd(tmp, tmp),d1182);

	d1181=_mm256_add_pd(d1181,d1182);d3=_mm256_add_pd(d3,d1182);
	d1177=_mm256_add_pd(d1177,d1181);d1179=_mm256_add_pd(d1179,d1181);
	d1177=_mm256_add_pd(d1177,d1180);d1179=_mm256_add_pd(d1179,d1180);
	d1178=_mm256_add_pd(d1178,d1179);
	d1176=_mm256_add_pd(d1176,d1178);d3=_mm256_add_pd(d3,d1178);
	d1156=_mm256_add_pd(d1156,d1177);
	d1175=_mm256_add_pd(d1175,d1176);
	d1169=_mm256_add_pd(d1169,d1175);d1174=_mm256_add_pd(d1174,d1175);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1173);
d1170=_mm256_fmadd_pd(d1174,tmp,d1170);
d1173=_mm256_fnmadd_pd(_mm256_mul_pd(d1174,v1170),_mm256_mul_pd(tmp, tmp),d1173);

	d1171=_mm256_add_pd(d1171,d1173);d1172=_mm256_add_pd(d1172,d1173);
	d1154=_mm256_fmadd_pd(d1171,v1156,d1154);d1156=_mm256_fmadd_pd(d1171,v1154,d1156);
	d1154=_mm256_fmadd_pd(d1170,v1156,d1154);d1156=_mm256_fmadd_pd(d1170,v1154,d1156);
	d1165=_mm256_add_pd(d1165,d1169);d1168=_mm256_add_pd(d1168,d1169);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1156);
d1167=_mm256_fmadd_pd(d1168,tmp,d1167);
d1156=_mm256_fnmadd_pd(_mm256_mul_pd(d1168,v1167),_mm256_mul_pd(tmp, tmp),d1156);

	d1156=_mm256_add_pd(d1156,d1167);d1166=_mm256_add_pd(d1166,d1167);
	d1161=_mm256_add_pd(d1161,d1165);d1164=_mm256_add_pd(d1164,d1165);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1154);
d1163=_mm256_fmadd_pd(d1164,tmp,d1163);
d1154=_mm256_fnmadd_pd(_mm256_mul_pd(d1164,v1163),_mm256_mul_pd(tmp, tmp),d1154);

	d1154=_mm256_add_pd(d1154,d1163);d1162=_mm256_add_pd(d1162,d1163);
	d1153=_mm256_add_pd(d1153,d1161);d1160=_mm256_add_pd(d1160,d1161);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1159);
d1157=_mm256_fmadd_pd(d1160,tmp,d1157);
d1159=_mm256_fnmadd_pd(_mm256_mul_pd(d1160,v1157),_mm256_mul_pd(tmp, tmp),d1159);

	d1158=_mm256_add_pd(d1158,d1159);d3=_mm256_add_pd(d3,d1159);
	d1154=_mm256_add_pd(d1154,d1158);d1156=_mm256_add_pd(d1156,d1158);
	d1154=_mm256_add_pd(d1154,d1157);d1156=_mm256_add_pd(d1156,d1157);
	d1155=_mm256_add_pd(d1155,d1156);
	d1153=_mm256_add_pd(d1153,d1155);d3=_mm256_add_pd(d3,d1155);
	d1133=_mm256_add_pd(d1133,d1154);
	d1152=_mm256_add_pd(d1152,d1153);
	d1146=_mm256_add_pd(d1146,d1152);d1151=_mm256_add_pd(d1151,d1152);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1150);
d1147=_mm256_fmadd_pd(d1151,tmp,d1147);
d1150=_mm256_fnmadd_pd(_mm256_mul_pd(d1151,v1147),_mm256_mul_pd(tmp, tmp),d1150);

	d1148=_mm256_add_pd(d1148,d1150);d1149=_mm256_add_pd(d1149,d1150);
	d1131=_mm256_fmadd_pd(d1148,v1133,d1131);d1133=_mm256_fmadd_pd(d1148,v1131,d1133);
	d1131=_mm256_fmadd_pd(d1147,v1133,d1131);d1133=_mm256_fmadd_pd(d1147,v1131,d1133);
	d1142=_mm256_add_pd(d1142,d1146);d1145=_mm256_add_pd(d1145,d1146);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1133);
d1144=_mm256_fmadd_pd(d1145,tmp,d1144);
d1133=_mm256_fnmadd_pd(_mm256_mul_pd(d1145,v1144),_mm256_mul_pd(tmp, tmp),d1133);

	d1133=_mm256_add_pd(d1133,d1144);d1143=_mm256_add_pd(d1143,d1144);
	d1138=_mm256_add_pd(d1138,d1142);d1141=_mm256_add_pd(d1141,d1142);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1131);
d1140=_mm256_fmadd_pd(d1141,tmp,d1140);
d1131=_mm256_fnmadd_pd(_mm256_mul_pd(d1141,v1140),_mm256_mul_pd(tmp, tmp),d1131);

	d1131=_mm256_add_pd(d1131,d1140);d1139=_mm256_add_pd(d1139,d1140);
	d1130=_mm256_add_pd(d1130,d1138);d1137=_mm256_add_pd(d1137,d1138);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1136);
d1134=_mm256_fmadd_pd(d1137,tmp,d1134);
d1136=_mm256_fnmadd_pd(_mm256_mul_pd(d1137,v1134),_mm256_mul_pd(tmp, tmp),d1136);

	d1135=_mm256_add_pd(d1135,d1136);d3=_mm256_add_pd(d3,d1136);
	d1131=_mm256_add_pd(d1131,d1135);d1133=_mm256_add_pd(d1133,d1135);
	d1131=_mm256_add_pd(d1131,d1134);d1133=_mm256_add_pd(d1133,d1134);
	d1132=_mm256_add_pd(d1132,d1133);
	d1130=_mm256_add_pd(d1130,d1132);d3=_mm256_add_pd(d3,d1132);
	d1110=_mm256_add_pd(d1110,d1131);
	d1129=_mm256_add_pd(d1129,d1130);
	d1123=_mm256_add_pd(d1123,d1129);d1128=_mm256_add_pd(d1128,d1129);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1127);
d1124=_mm256_fmadd_pd(d1128,tmp,d1124);
d1127=_mm256_fnmadd_pd(_mm256_mul_pd(d1128,v1124),_mm256_mul_pd(tmp, tmp),d1127);

	d1125=_mm256_add_pd(d1125,d1127);d1126=_mm256_add_pd(d1126,d1127);
	d1108=_mm256_fmadd_pd(d1125,v1110,d1108);d1110=_mm256_fmadd_pd(d1125,v1108,d1110);
	d1108=_mm256_fmadd_pd(d1124,v1110,d1108);d1110=_mm256_fmadd_pd(d1124,v1108,d1110);
	d1119=_mm256_add_pd(d1119,d1123);d1122=_mm256_add_pd(d1122,d1123);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1110);
d1121=_mm256_fmadd_pd(d1122,tmp,d1121);
d1110=_mm256_fnmadd_pd(_mm256_mul_pd(d1122,v1121),_mm256_mul_pd(tmp, tmp),d1110);

	d1110=_mm256_add_pd(d1110,d1121);d1120=_mm256_add_pd(d1120,d1121);
	d1115=_mm256_add_pd(d1115,d1119);d1118=_mm256_add_pd(d1118,d1119);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1108);
d1117=_mm256_fmadd_pd(d1118,tmp,d1117);
d1108=_mm256_fnmadd_pd(_mm256_mul_pd(d1118,v1117),_mm256_mul_pd(tmp, tmp),d1108);

	d1108=_mm256_add_pd(d1108,d1117);d1116=_mm256_add_pd(d1116,d1117);
	d1107=_mm256_add_pd(d1107,d1115);d1114=_mm256_add_pd(d1114,d1115);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1113);
d1111=_mm256_fmadd_pd(d1114,tmp,d1111);
d1113=_mm256_fnmadd_pd(_mm256_mul_pd(d1114,v1111),_mm256_mul_pd(tmp, tmp),d1113);

	d1112=_mm256_add_pd(d1112,d1113);d3=_mm256_add_pd(d3,d1113);
	d1108=_mm256_add_pd(d1108,d1112);d1110=_mm256_add_pd(d1110,d1112);
	d1108=_mm256_add_pd(d1108,d1111);d1110=_mm256_add_pd(d1110,d1111);
	d1109=_mm256_add_pd(d1109,d1110);
	d1107=_mm256_add_pd(d1107,d1109);d3=_mm256_add_pd(d3,d1109);
	d1087=_mm256_add_pd(d1087,d1108);
	d1106=_mm256_add_pd(d1106,d1107);
	d1100=_mm256_add_pd(d1100,d1106);d1105=_mm256_add_pd(d1105,d1106);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1104);
d1101=_mm256_fmadd_pd(d1105,tmp,d1101);
d1104=_mm256_fnmadd_pd(_mm256_mul_pd(d1105,v1101),_mm256_mul_pd(tmp, tmp),d1104);

	d1102=_mm256_add_pd(d1102,d1104);d1103=_mm256_add_pd(d1103,d1104);
	d1085=_mm256_fmadd_pd(d1102,v1087,d1085);d1087=_mm256_fmadd_pd(d1102,v1085,d1087);
	d1085=_mm256_fmadd_pd(d1101,v1087,d1085);d1087=_mm256_fmadd_pd(d1101,v1085,d1087);
	d1096=_mm256_add_pd(d1096,d1100);d1099=_mm256_add_pd(d1099,d1100);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1087);
d1098=_mm256_fmadd_pd(d1099,tmp,d1098);
d1087=_mm256_fnmadd_pd(_mm256_mul_pd(d1099,v1098),_mm256_mul_pd(tmp, tmp),d1087);

	d1087=_mm256_add_pd(d1087,d1098);d1097=_mm256_add_pd(d1097,d1098);
	d1092=_mm256_add_pd(d1092,d1096);d1095=_mm256_add_pd(d1095,d1096);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1085);
d1094=_mm256_fmadd_pd(d1095,tmp,d1094);
d1085=_mm256_fnmadd_pd(_mm256_mul_pd(d1095,v1094),_mm256_mul_pd(tmp, tmp),d1085);

	d1085=_mm256_add_pd(d1085,d1094);d1093=_mm256_add_pd(d1093,d1094);
	d1084=_mm256_add_pd(d1084,d1092);d1091=_mm256_add_pd(d1091,d1092);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1090);
d1088=_mm256_fmadd_pd(d1091,tmp,d1088);
d1090=_mm256_fnmadd_pd(_mm256_mul_pd(d1091,v1088),_mm256_mul_pd(tmp, tmp),d1090);

	d1089=_mm256_add_pd(d1089,d1090);d3=_mm256_add_pd(d3,d1090);
	d1085=_mm256_add_pd(d1085,d1089);d1087=_mm256_add_pd(d1087,d1089);
	d1085=_mm256_add_pd(d1085,d1088);d1087=_mm256_add_pd(d1087,d1088);
	d1086=_mm256_add_pd(d1086,d1087);
	d1084=_mm256_add_pd(d1084,d1086);d3=_mm256_add_pd(d3,d1086);
	d1064=_mm256_add_pd(d1064,d1085);
	d1083=_mm256_add_pd(d1083,d1084);
	d1077=_mm256_add_pd(d1077,d1083);d1082=_mm256_add_pd(d1082,d1083);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1081);
d1078=_mm256_fmadd_pd(d1082,tmp,d1078);
d1081=_mm256_fnmadd_pd(_mm256_mul_pd(d1082,v1078),_mm256_mul_pd(tmp, tmp),d1081);

	d1079=_mm256_add_pd(d1079,d1081);d1080=_mm256_add_pd(d1080,d1081);
	d1062=_mm256_fmadd_pd(d1079,v1064,d1062);d1064=_mm256_fmadd_pd(d1079,v1062,d1064);
	d1062=_mm256_fmadd_pd(d1078,v1064,d1062);d1064=_mm256_fmadd_pd(d1078,v1062,d1064);
	d1073=_mm256_add_pd(d1073,d1077);d1076=_mm256_add_pd(d1076,d1077);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1064);
d1075=_mm256_fmadd_pd(d1076,tmp,d1075);
d1064=_mm256_fnmadd_pd(_mm256_mul_pd(d1076,v1075),_mm256_mul_pd(tmp, tmp),d1064);

	d1064=_mm256_add_pd(d1064,d1075);d1074=_mm256_add_pd(d1074,d1075);
	d1069=_mm256_add_pd(d1069,d1073);d1072=_mm256_add_pd(d1072,d1073);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1062);
d1071=_mm256_fmadd_pd(d1072,tmp,d1071);
d1062=_mm256_fnmadd_pd(_mm256_mul_pd(d1072,v1071),_mm256_mul_pd(tmp, tmp),d1062);

	d1062=_mm256_add_pd(d1062,d1071);d1070=_mm256_add_pd(d1070,d1071);
	d1061=_mm256_add_pd(d1061,d1069);d1068=_mm256_add_pd(d1068,d1069);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1067);
d1065=_mm256_fmadd_pd(d1068,tmp,d1065);
d1067=_mm256_fnmadd_pd(_mm256_mul_pd(d1068,v1065),_mm256_mul_pd(tmp, tmp),d1067);

	d1066=_mm256_add_pd(d1066,d1067);d3=_mm256_add_pd(d3,d1067);
	d1062=_mm256_add_pd(d1062,d1066);d1064=_mm256_add_pd(d1064,d1066);
	d1062=_mm256_add_pd(d1062,d1065);d1064=_mm256_add_pd(d1064,d1065);
	d1063=_mm256_add_pd(d1063,d1064);
	d1061=_mm256_add_pd(d1061,d1063);d3=_mm256_add_pd(d3,d1063);
	d1041=_mm256_add_pd(d1041,d1062);
	d1060=_mm256_add_pd(d1060,d1061);
	d1054=_mm256_add_pd(d1054,d1060);d1059=_mm256_add_pd(d1059,d1060);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1058);
d1055=_mm256_fmadd_pd(d1059,tmp,d1055);
d1058=_mm256_fnmadd_pd(_mm256_mul_pd(d1059,v1055),_mm256_mul_pd(tmp, tmp),d1058);

	d1056=_mm256_add_pd(d1056,d1058);d1057=_mm256_add_pd(d1057,d1058);
	d1039=_mm256_fmadd_pd(d1056,v1041,d1039);d1041=_mm256_fmadd_pd(d1056,v1039,d1041);
	d1039=_mm256_fmadd_pd(d1055,v1041,d1039);d1041=_mm256_fmadd_pd(d1055,v1039,d1041);
	d1050=_mm256_add_pd(d1050,d1054);d1053=_mm256_add_pd(d1053,d1054);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1041);
d1052=_mm256_fmadd_pd(d1053,tmp,d1052);
d1041=_mm256_fnmadd_pd(_mm256_mul_pd(d1053,v1052),_mm256_mul_pd(tmp, tmp),d1041);

	d1041=_mm256_add_pd(d1041,d1052);d1051=_mm256_add_pd(d1051,d1052);
	d1046=_mm256_add_pd(d1046,d1050);d1049=_mm256_add_pd(d1049,d1050);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1039);
d1048=_mm256_fmadd_pd(d1049,tmp,d1048);
d1039=_mm256_fnmadd_pd(_mm256_mul_pd(d1049,v1048),_mm256_mul_pd(tmp, tmp),d1039);

	d1039=_mm256_add_pd(d1039,d1048);d1047=_mm256_add_pd(d1047,d1048);
	d1038=_mm256_add_pd(d1038,d1046);d1045=_mm256_add_pd(d1045,d1046);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1044);
d1042=_mm256_fmadd_pd(d1045,tmp,d1042);
d1044=_mm256_fnmadd_pd(_mm256_mul_pd(d1045,v1042),_mm256_mul_pd(tmp, tmp),d1044);

	d1043=_mm256_add_pd(d1043,d1044);d3=_mm256_add_pd(d3,d1044);
	d1039=_mm256_add_pd(d1039,d1043);d1041=_mm256_add_pd(d1041,d1043);
	d1039=_mm256_add_pd(d1039,d1042);d1041=_mm256_add_pd(d1041,d1042);
	d1040=_mm256_add_pd(d1040,d1041);
	d1038=_mm256_add_pd(d1038,d1040);d3=_mm256_add_pd(d3,d1040);
	d1018=_mm256_add_pd(d1018,d1039);
	d1037=_mm256_add_pd(d1037,d1038);
	d1031=_mm256_add_pd(d1031,d1037);d1036=_mm256_add_pd(d1036,d1037);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1035);
d1032=_mm256_fmadd_pd(d1036,tmp,d1032);
d1035=_mm256_fnmadd_pd(_mm256_mul_pd(d1036,v1032),_mm256_mul_pd(tmp, tmp),d1035);

	d1033=_mm256_add_pd(d1033,d1035);d1034=_mm256_add_pd(d1034,d1035);
	d1016=_mm256_fmadd_pd(d1033,v1018,d1016);d1018=_mm256_fmadd_pd(d1033,v1016,d1018);
	d1016=_mm256_fmadd_pd(d1032,v1018,d1016);d1018=_mm256_fmadd_pd(d1032,v1016,d1018);
	d1027=_mm256_add_pd(d1027,d1031);d1030=_mm256_add_pd(d1030,d1031);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1018);
d1029=_mm256_fmadd_pd(d1030,tmp,d1029);
d1018=_mm256_fnmadd_pd(_mm256_mul_pd(d1030,v1029),_mm256_mul_pd(tmp, tmp),d1018);

	d1018=_mm256_add_pd(d1018,d1029);d1028=_mm256_add_pd(d1028,d1029);
	d1023=_mm256_add_pd(d1023,d1027);d1026=_mm256_add_pd(d1026,d1027);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1016);
d1025=_mm256_fmadd_pd(d1026,tmp,d1025);
d1016=_mm256_fnmadd_pd(_mm256_mul_pd(d1026,v1025),_mm256_mul_pd(tmp, tmp),d1016);

	d1016=_mm256_add_pd(d1016,d1025);d1024=_mm256_add_pd(d1024,d1025);
	d1015=_mm256_add_pd(d1015,d1023);d1022=_mm256_add_pd(d1022,d1023);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1021);
d1019=_mm256_fmadd_pd(d1022,tmp,d1019);
d1021=_mm256_fnmadd_pd(_mm256_mul_pd(d1022,v1019),_mm256_mul_pd(tmp, tmp),d1021);

	d1020=_mm256_add_pd(d1020,d1021);d3=_mm256_add_pd(d3,d1021);
	d1016=_mm256_add_pd(d1016,d1020);d1018=_mm256_add_pd(d1018,d1020);
	d1016=_mm256_add_pd(d1016,d1019);d1018=_mm256_add_pd(d1018,d1019);
	d1017=_mm256_add_pd(d1017,d1018);
	d1015=_mm256_add_pd(d1015,d1017);d3=_mm256_add_pd(d3,d1017);
	d995=_mm256_add_pd(d995,d1016);
	d1014=_mm256_add_pd(d1014,d1015);
	d1008=_mm256_add_pd(d1008,d1014);d1013=_mm256_add_pd(d1013,d1014);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v1012);
d1009=_mm256_fmadd_pd(d1013,tmp,d1009);
d1012=_mm256_fnmadd_pd(_mm256_mul_pd(d1013,v1009),_mm256_mul_pd(tmp, tmp),d1012);

	d1010=_mm256_add_pd(d1010,d1012);d1011=_mm256_add_pd(d1011,d1012);
	d993=_mm256_fmadd_pd(d1010,v995,d993);d995=_mm256_fmadd_pd(d1010,v993,d995);
	d993=_mm256_fmadd_pd(d1009,v995,d993);d995=_mm256_fmadd_pd(d1009,v993,d995);
	d1004=_mm256_add_pd(d1004,d1008);d1007=_mm256_add_pd(d1007,d1008);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v995);
d1006=_mm256_fmadd_pd(d1007,tmp,d1006);
d995=_mm256_fnmadd_pd(_mm256_mul_pd(d1007,v1006),_mm256_mul_pd(tmp, tmp),d995);

	d995=_mm256_add_pd(d995,d1006);d1005=_mm256_add_pd(d1005,d1006);
	d1000=_mm256_add_pd(d1000,d1004);d1003=_mm256_add_pd(d1003,d1004);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v993);
d1002=_mm256_fmadd_pd(d1003,tmp,d1002);
d993=_mm256_fnmadd_pd(_mm256_mul_pd(d1003,v1002),_mm256_mul_pd(tmp, tmp),d993);

	d993=_mm256_add_pd(d993,d1002);d1001=_mm256_add_pd(d1001,d1002);
	d992=_mm256_add_pd(d992,d1000);d999=_mm256_add_pd(d999,d1000);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v998);
d996=_mm256_fmadd_pd(d999,tmp,d996);
d998=_mm256_fnmadd_pd(_mm256_mul_pd(d999,v996),_mm256_mul_pd(tmp, tmp),d998);

	d997=_mm256_add_pd(d997,d998);d3=_mm256_add_pd(d3,d998);
	d993=_mm256_add_pd(d993,d997);d995=_mm256_add_pd(d995,d997);
	d993=_mm256_add_pd(d993,d996);d995=_mm256_add_pd(d995,d996);
	d994=_mm256_add_pd(d994,d995);
	d992=_mm256_add_pd(d992,d994);d3=_mm256_add_pd(d3,d994);
	d972=_mm256_add_pd(d972,d993);
	d991=_mm256_add_pd(d991,d992);
	d985=_mm256_add_pd(d985,d991);d990=_mm256_add_pd(d990,d991);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v989);
d986=_mm256_fmadd_pd(d990,tmp,d986);
d989=_mm256_fnmadd_pd(_mm256_mul_pd(d990,v986),_mm256_mul_pd(tmp, tmp),d989);

	d987=_mm256_add_pd(d987,d989);d988=_mm256_add_pd(d988,d989);
	d970=_mm256_fmadd_pd(d987,v972,d970);d972=_mm256_fmadd_pd(d987,v970,d972);
	d970=_mm256_fmadd_pd(d986,v972,d970);d972=_mm256_fmadd_pd(d986,v970,d972);
	d981=_mm256_add_pd(d981,d985);d984=_mm256_add_pd(d984,d985);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v972);
d983=_mm256_fmadd_pd(d984,tmp,d983);
d972=_mm256_fnmadd_pd(_mm256_mul_pd(d984,v983),_mm256_mul_pd(tmp, tmp),d972);

	d972=_mm256_add_pd(d972,d983);d982=_mm256_add_pd(d982,d983);
	d977=_mm256_add_pd(d977,d981);d980=_mm256_add_pd(d980,d981);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v970);
d979=_mm256_fmadd_pd(d980,tmp,d979);
d970=_mm256_fnmadd_pd(_mm256_mul_pd(d980,v979),_mm256_mul_pd(tmp, tmp),d970);

	d970=_mm256_add_pd(d970,d979);d978=_mm256_add_pd(d978,d979);
	d969=_mm256_add_pd(d969,d977);d976=_mm256_add_pd(d976,d977);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v975);
d973=_mm256_fmadd_pd(d976,tmp,d973);
d975=_mm256_fnmadd_pd(_mm256_mul_pd(d976,v973),_mm256_mul_pd(tmp, tmp),d975);

	d974=_mm256_add_pd(d974,d975);d3=_mm256_add_pd(d3,d975);
	d970=_mm256_add_pd(d970,d974);d972=_mm256_add_pd(d972,d974);
	d970=_mm256_add_pd(d970,d973);d972=_mm256_add_pd(d972,d973);
	d971=_mm256_add_pd(d971,d972);
	d969=_mm256_add_pd(d969,d971);d3=_mm256_add_pd(d3,d971);
	d949=_mm256_add_pd(d949,d970);
	d968=_mm256_add_pd(d968,d969);
	d962=_mm256_add_pd(d962,d968);d967=_mm256_add_pd(d967,d968);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v966);
d963=_mm256_fmadd_pd(d967,tmp,d963);
d966=_mm256_fnmadd_pd(_mm256_mul_pd(d967,v963),_mm256_mul_pd(tmp, tmp),d966);

	d964=_mm256_add_pd(d964,d966);d965=_mm256_add_pd(d965,d966);
	d947=_mm256_fmadd_pd(d964,v949,d947);d949=_mm256_fmadd_pd(d964,v947,d949);
	d947=_mm256_fmadd_pd(d963,v949,d947);d949=_mm256_fmadd_pd(d963,v947,d949);
	d958=_mm256_add_pd(d958,d962);d961=_mm256_add_pd(d961,d962);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v949);
d960=_mm256_fmadd_pd(d961,tmp,d960);
d949=_mm256_fnmadd_pd(_mm256_mul_pd(d961,v960),_mm256_mul_pd(tmp, tmp),d949);

	d949=_mm256_add_pd(d949,d960);d959=_mm256_add_pd(d959,d960);
	d954=_mm256_add_pd(d954,d958);d957=_mm256_add_pd(d957,d958);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v947);
d956=_mm256_fmadd_pd(d957,tmp,d956);
d947=_mm256_fnmadd_pd(_mm256_mul_pd(d957,v956),_mm256_mul_pd(tmp, tmp),d947);

	d947=_mm256_add_pd(d947,d956);d955=_mm256_add_pd(d955,d956);
	d946=_mm256_add_pd(d946,d954);d953=_mm256_add_pd(d953,d954);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v952);
d950=_mm256_fmadd_pd(d953,tmp,d950);
d952=_mm256_fnmadd_pd(_mm256_mul_pd(d953,v950),_mm256_mul_pd(tmp, tmp),d952);

	d951=_mm256_add_pd(d951,d952);d3=_mm256_add_pd(d3,d952);
	d947=_mm256_add_pd(d947,d951);d949=_mm256_add_pd(d949,d951);
	d947=_mm256_add_pd(d947,d950);d949=_mm256_add_pd(d949,d950);
	d948=_mm256_add_pd(d948,d949);
	d946=_mm256_add_pd(d946,d948);d3=_mm256_add_pd(d3,d948);
	d926=_mm256_add_pd(d926,d947);
	d945=_mm256_add_pd(d945,d946);
	d939=_mm256_add_pd(d939,d945);d944=_mm256_add_pd(d944,d945);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v943);
d940=_mm256_fmadd_pd(d944,tmp,d940);
d943=_mm256_fnmadd_pd(_mm256_mul_pd(d944,v940),_mm256_mul_pd(tmp, tmp),d943);

	d941=_mm256_add_pd(d941,d943);d942=_mm256_add_pd(d942,d943);
	d924=_mm256_fmadd_pd(d941,v926,d924);d926=_mm256_fmadd_pd(d941,v924,d926);
	d924=_mm256_fmadd_pd(d940,v926,d924);d926=_mm256_fmadd_pd(d940,v924,d926);
	d935=_mm256_add_pd(d935,d939);d938=_mm256_add_pd(d938,d939);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v926);
d937=_mm256_fmadd_pd(d938,tmp,d937);
d926=_mm256_fnmadd_pd(_mm256_mul_pd(d938,v937),_mm256_mul_pd(tmp, tmp),d926);

	d926=_mm256_add_pd(d926,d937);d936=_mm256_add_pd(d936,d937);
	d931=_mm256_add_pd(d931,d935);d934=_mm256_add_pd(d934,d935);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v924);
d933=_mm256_fmadd_pd(d934,tmp,d933);
d924=_mm256_fnmadd_pd(_mm256_mul_pd(d934,v933),_mm256_mul_pd(tmp, tmp),d924);

	d924=_mm256_add_pd(d924,d933);d932=_mm256_add_pd(d932,d933);
	d923=_mm256_add_pd(d923,d931);d930=_mm256_add_pd(d930,d931);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v929);
d927=_mm256_fmadd_pd(d930,tmp,d927);
d929=_mm256_fnmadd_pd(_mm256_mul_pd(d930,v927),_mm256_mul_pd(tmp, tmp),d929);

	d928=_mm256_add_pd(d928,d929);d3=_mm256_add_pd(d3,d929);
	d924=_mm256_add_pd(d924,d928);d926=_mm256_add_pd(d926,d928);
	d924=_mm256_add_pd(d924,d927);d926=_mm256_add_pd(d926,d927);
	d925=_mm256_add_pd(d925,d926);
	d923=_mm256_add_pd(d923,d925);d3=_mm256_add_pd(d3,d925);
	d903=_mm256_add_pd(d903,d924);
	d922=_mm256_add_pd(d922,d923);
	d916=_mm256_add_pd(d916,d922);d921=_mm256_add_pd(d921,d922);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v920);
d917=_mm256_fmadd_pd(d921,tmp,d917);
d920=_mm256_fnmadd_pd(_mm256_mul_pd(d921,v917),_mm256_mul_pd(tmp, tmp),d920);

	d918=_mm256_add_pd(d918,d920);d919=_mm256_add_pd(d919,d920);
	d901=_mm256_fmadd_pd(d918,v903,d901);d903=_mm256_fmadd_pd(d918,v901,d903);
	d901=_mm256_fmadd_pd(d917,v903,d901);d903=_mm256_fmadd_pd(d917,v901,d903);
	d912=_mm256_add_pd(d912,d916);d915=_mm256_add_pd(d915,d916);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v903);
d914=_mm256_fmadd_pd(d915,tmp,d914);
d903=_mm256_fnmadd_pd(_mm256_mul_pd(d915,v914),_mm256_mul_pd(tmp, tmp),d903);

	d903=_mm256_add_pd(d903,d914);d913=_mm256_add_pd(d913,d914);
	d908=_mm256_add_pd(d908,d912);d911=_mm256_add_pd(d911,d912);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v901);
d910=_mm256_fmadd_pd(d911,tmp,d910);
d901=_mm256_fnmadd_pd(_mm256_mul_pd(d911,v910),_mm256_mul_pd(tmp, tmp),d901);

	d901=_mm256_add_pd(d901,d910);d909=_mm256_add_pd(d909,d910);
	d900=_mm256_add_pd(d900,d908);d907=_mm256_add_pd(d907,d908);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v906);
d904=_mm256_fmadd_pd(d907,tmp,d904);
d906=_mm256_fnmadd_pd(_mm256_mul_pd(d907,v904),_mm256_mul_pd(tmp, tmp),d906);

	d905=_mm256_add_pd(d905,d906);d3=_mm256_add_pd(d3,d906);
	d901=_mm256_add_pd(d901,d905);d903=_mm256_add_pd(d903,d905);
	d901=_mm256_add_pd(d901,d904);d903=_mm256_add_pd(d903,d904);
	d902=_mm256_add_pd(d902,d903);
	d900=_mm256_add_pd(d900,d902);d3=_mm256_add_pd(d3,d902);
	d880=_mm256_add_pd(d880,d901);
	d899=_mm256_add_pd(d899,d900);
	d893=_mm256_add_pd(d893,d899);d898=_mm256_add_pd(d898,d899);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v897);
d894=_mm256_fmadd_pd(d898,tmp,d894);
d897=_mm256_fnmadd_pd(_mm256_mul_pd(d898,v894),_mm256_mul_pd(tmp, tmp),d897);

	d895=_mm256_add_pd(d895,d897);d896=_mm256_add_pd(d896,d897);
	d878=_mm256_fmadd_pd(d895,v880,d878);d880=_mm256_fmadd_pd(d895,v878,d880);
	d878=_mm256_fmadd_pd(d894,v880,d878);d880=_mm256_fmadd_pd(d894,v878,d880);
	d889=_mm256_add_pd(d889,d893);d892=_mm256_add_pd(d892,d893);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v880);
d891=_mm256_fmadd_pd(d892,tmp,d891);
d880=_mm256_fnmadd_pd(_mm256_mul_pd(d892,v891),_mm256_mul_pd(tmp, tmp),d880);

	d880=_mm256_add_pd(d880,d891);d890=_mm256_add_pd(d890,d891);
	d885=_mm256_add_pd(d885,d889);d888=_mm256_add_pd(d888,d889);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v878);
d887=_mm256_fmadd_pd(d888,tmp,d887);
d878=_mm256_fnmadd_pd(_mm256_mul_pd(d888,v887),_mm256_mul_pd(tmp, tmp),d878);

	d878=_mm256_add_pd(d878,d887);d886=_mm256_add_pd(d886,d887);
	d877=_mm256_add_pd(d877,d885);d884=_mm256_add_pd(d884,d885);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v883);
d881=_mm256_fmadd_pd(d884,tmp,d881);
d883=_mm256_fnmadd_pd(_mm256_mul_pd(d884,v881),_mm256_mul_pd(tmp, tmp),d883);

	d882=_mm256_add_pd(d882,d883);d3=_mm256_add_pd(d3,d883);
	d878=_mm256_add_pd(d878,d882);d880=_mm256_add_pd(d880,d882);
	d878=_mm256_add_pd(d878,d881);d880=_mm256_add_pd(d880,d881);
	d879=_mm256_add_pd(d879,d880);
	d877=_mm256_add_pd(d877,d879);d3=_mm256_add_pd(d3,d879);
	d857=_mm256_add_pd(d857,d878);
	d876=_mm256_add_pd(d876,d877);
	d870=_mm256_add_pd(d870,d876);d875=_mm256_add_pd(d875,d876);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v874);
d871=_mm256_fmadd_pd(d875,tmp,d871);
d874=_mm256_fnmadd_pd(_mm256_mul_pd(d875,v871),_mm256_mul_pd(tmp, tmp),d874);

	d872=_mm256_add_pd(d872,d874);d873=_mm256_add_pd(d873,d874);
	d855=_mm256_fmadd_pd(d872,v857,d855);d857=_mm256_fmadd_pd(d872,v855,d857);
	d855=_mm256_fmadd_pd(d871,v857,d855);d857=_mm256_fmadd_pd(d871,v855,d857);
	d866=_mm256_add_pd(d866,d870);d869=_mm256_add_pd(d869,d870);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v857);
d868=_mm256_fmadd_pd(d869,tmp,d868);
d857=_mm256_fnmadd_pd(_mm256_mul_pd(d869,v868),_mm256_mul_pd(tmp, tmp),d857);

	d857=_mm256_add_pd(d857,d868);d867=_mm256_add_pd(d867,d868);
	d862=_mm256_add_pd(d862,d866);d865=_mm256_add_pd(d865,d866);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v855);
d864=_mm256_fmadd_pd(d865,tmp,d864);
d855=_mm256_fnmadd_pd(_mm256_mul_pd(d865,v864),_mm256_mul_pd(tmp, tmp),d855);

	d855=_mm256_add_pd(d855,d864);d863=_mm256_add_pd(d863,d864);
	d854=_mm256_add_pd(d854,d862);d861=_mm256_add_pd(d861,d862);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v860);
d858=_mm256_fmadd_pd(d861,tmp,d858);
d860=_mm256_fnmadd_pd(_mm256_mul_pd(d861,v858),_mm256_mul_pd(tmp, tmp),d860);

	d859=_mm256_add_pd(d859,d860);d3=_mm256_add_pd(d3,d860);
	d855=_mm256_add_pd(d855,d859);d857=_mm256_add_pd(d857,d859);
	d855=_mm256_add_pd(d855,d858);d857=_mm256_add_pd(d857,d858);
	d856=_mm256_add_pd(d856,d857);
	d854=_mm256_add_pd(d854,d856);d3=_mm256_add_pd(d3,d856);
	d834=_mm256_add_pd(d834,d855);
	d853=_mm256_add_pd(d853,d854);
	d847=_mm256_add_pd(d847,d853);d852=_mm256_add_pd(d852,d853);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v851);
d848=_mm256_fmadd_pd(d852,tmp,d848);
d851=_mm256_fnmadd_pd(_mm256_mul_pd(d852,v848),_mm256_mul_pd(tmp, tmp),d851);

	d849=_mm256_add_pd(d849,d851);d850=_mm256_add_pd(d850,d851);
	d832=_mm256_fmadd_pd(d849,v834,d832);d834=_mm256_fmadd_pd(d849,v832,d834);
	d832=_mm256_fmadd_pd(d848,v834,d832);d834=_mm256_fmadd_pd(d848,v832,d834);
	d843=_mm256_add_pd(d843,d847);d846=_mm256_add_pd(d846,d847);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v834);
d845=_mm256_fmadd_pd(d846,tmp,d845);
d834=_mm256_fnmadd_pd(_mm256_mul_pd(d846,v845),_mm256_mul_pd(tmp, tmp),d834);

	d834=_mm256_add_pd(d834,d845);d844=_mm256_add_pd(d844,d845);
	d839=_mm256_add_pd(d839,d843);d842=_mm256_add_pd(d842,d843);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v832);
d841=_mm256_fmadd_pd(d842,tmp,d841);
d832=_mm256_fnmadd_pd(_mm256_mul_pd(d842,v841),_mm256_mul_pd(tmp, tmp),d832);

	d832=_mm256_add_pd(d832,d841);d840=_mm256_add_pd(d840,d841);
	d831=_mm256_add_pd(d831,d839);d838=_mm256_add_pd(d838,d839);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v837);
d835=_mm256_fmadd_pd(d838,tmp,d835);
d837=_mm256_fnmadd_pd(_mm256_mul_pd(d838,v835),_mm256_mul_pd(tmp, tmp),d837);

	d836=_mm256_add_pd(d836,d837);d3=_mm256_add_pd(d3,d837);
	d832=_mm256_add_pd(d832,d836);d834=_mm256_add_pd(d834,d836);
	d832=_mm256_add_pd(d832,d835);d834=_mm256_add_pd(d834,d835);
	d833=_mm256_add_pd(d833,d834);
	d831=_mm256_add_pd(d831,d833);d3=_mm256_add_pd(d3,d833);
	d811=_mm256_add_pd(d811,d832);
	d830=_mm256_add_pd(d830,d831);
	d824=_mm256_add_pd(d824,d830);d829=_mm256_add_pd(d829,d830);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v828);
d825=_mm256_fmadd_pd(d829,tmp,d825);
d828=_mm256_fnmadd_pd(_mm256_mul_pd(d829,v825),_mm256_mul_pd(tmp, tmp),d828);

	d826=_mm256_add_pd(d826,d828);d827=_mm256_add_pd(d827,d828);
	d809=_mm256_fmadd_pd(d826,v811,d809);d811=_mm256_fmadd_pd(d826,v809,d811);
	d809=_mm256_fmadd_pd(d825,v811,d809);d811=_mm256_fmadd_pd(d825,v809,d811);
	d820=_mm256_add_pd(d820,d824);d823=_mm256_add_pd(d823,d824);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v811);
d822=_mm256_fmadd_pd(d823,tmp,d822);
d811=_mm256_fnmadd_pd(_mm256_mul_pd(d823,v822),_mm256_mul_pd(tmp, tmp),d811);

	d811=_mm256_add_pd(d811,d822);d821=_mm256_add_pd(d821,d822);
	d816=_mm256_add_pd(d816,d820);d819=_mm256_add_pd(d819,d820);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v809);
d818=_mm256_fmadd_pd(d819,tmp,d818);
d809=_mm256_fnmadd_pd(_mm256_mul_pd(d819,v818),_mm256_mul_pd(tmp, tmp),d809);

	d809=_mm256_add_pd(d809,d818);d817=_mm256_add_pd(d817,d818);
	d808=_mm256_add_pd(d808,d816);d815=_mm256_add_pd(d815,d816);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v814);
d812=_mm256_fmadd_pd(d815,tmp,d812);
d814=_mm256_fnmadd_pd(_mm256_mul_pd(d815,v812),_mm256_mul_pd(tmp, tmp),d814);

	d813=_mm256_add_pd(d813,d814);d3=_mm256_add_pd(d3,d814);
	d809=_mm256_add_pd(d809,d813);d811=_mm256_add_pd(d811,d813);
	d809=_mm256_add_pd(d809,d812);d811=_mm256_add_pd(d811,d812);
	d810=_mm256_add_pd(d810,d811);
	d808=_mm256_add_pd(d808,d810);d3=_mm256_add_pd(d3,d810);
	d788=_mm256_add_pd(d788,d809);
	d807=_mm256_add_pd(d807,d808);
	d801=_mm256_add_pd(d801,d807);d806=_mm256_add_pd(d806,d807);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v805);
d802=_mm256_fmadd_pd(d806,tmp,d802);
d805=_mm256_fnmadd_pd(_mm256_mul_pd(d806,v802),_mm256_mul_pd(tmp, tmp),d805);

	d803=_mm256_add_pd(d803,d805);d804=_mm256_add_pd(d804,d805);
	d786=_mm256_fmadd_pd(d803,v788,d786);d788=_mm256_fmadd_pd(d803,v786,d788);
	d786=_mm256_fmadd_pd(d802,v788,d786);d788=_mm256_fmadd_pd(d802,v786,d788);
	d797=_mm256_add_pd(d797,d801);d800=_mm256_add_pd(d800,d801);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v788);
d799=_mm256_fmadd_pd(d800,tmp,d799);
d788=_mm256_fnmadd_pd(_mm256_mul_pd(d800,v799),_mm256_mul_pd(tmp, tmp),d788);

	d788=_mm256_add_pd(d788,d799);d798=_mm256_add_pd(d798,d799);
	d793=_mm256_add_pd(d793,d797);d796=_mm256_add_pd(d796,d797);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v786);
d795=_mm256_fmadd_pd(d796,tmp,d795);
d786=_mm256_fnmadd_pd(_mm256_mul_pd(d796,v795),_mm256_mul_pd(tmp, tmp),d786);

	d786=_mm256_add_pd(d786,d795);d794=_mm256_add_pd(d794,d795);
	d785=_mm256_add_pd(d785,d793);d792=_mm256_add_pd(d792,d793);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v791);
d789=_mm256_fmadd_pd(d792,tmp,d789);
d791=_mm256_fnmadd_pd(_mm256_mul_pd(d792,v789),_mm256_mul_pd(tmp, tmp),d791);

	d790=_mm256_add_pd(d790,d791);d3=_mm256_add_pd(d3,d791);
	d786=_mm256_add_pd(d786,d790);d788=_mm256_add_pd(d788,d790);
	d786=_mm256_add_pd(d786,d789);d788=_mm256_add_pd(d788,d789);
	d787=_mm256_add_pd(d787,d788);
	d785=_mm256_add_pd(d785,d787);d3=_mm256_add_pd(d3,d787);
	d765=_mm256_add_pd(d765,d786);
	d784=_mm256_add_pd(d784,d785);
	d778=_mm256_add_pd(d778,d784);d783=_mm256_add_pd(d783,d784);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v782);
d779=_mm256_fmadd_pd(d783,tmp,d779);
d782=_mm256_fnmadd_pd(_mm256_mul_pd(d783,v779),_mm256_mul_pd(tmp, tmp),d782);

	d780=_mm256_add_pd(d780,d782);d781=_mm256_add_pd(d781,d782);
	d763=_mm256_fmadd_pd(d780,v765,d763);d765=_mm256_fmadd_pd(d780,v763,d765);
	d763=_mm256_fmadd_pd(d779,v765,d763);d765=_mm256_fmadd_pd(d779,v763,d765);
	d774=_mm256_add_pd(d774,d778);d777=_mm256_add_pd(d777,d778);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v765);
d776=_mm256_fmadd_pd(d777,tmp,d776);
d765=_mm256_fnmadd_pd(_mm256_mul_pd(d777,v776),_mm256_mul_pd(tmp, tmp),d765);

	d765=_mm256_add_pd(d765,d776);d775=_mm256_add_pd(d775,d776);
	d770=_mm256_add_pd(d770,d774);d773=_mm256_add_pd(d773,d774);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v763);
d772=_mm256_fmadd_pd(d773,tmp,d772);
d763=_mm256_fnmadd_pd(_mm256_mul_pd(d773,v772),_mm256_mul_pd(tmp, tmp),d763);

	d763=_mm256_add_pd(d763,d772);d771=_mm256_add_pd(d771,d772);
	d762=_mm256_add_pd(d762,d770);d769=_mm256_add_pd(d769,d770);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v768);
d766=_mm256_fmadd_pd(d769,tmp,d766);
d768=_mm256_fnmadd_pd(_mm256_mul_pd(d769,v766),_mm256_mul_pd(tmp, tmp),d768);

	d767=_mm256_add_pd(d767,d768);d3=_mm256_add_pd(d3,d768);
	d763=_mm256_add_pd(d763,d767);d765=_mm256_add_pd(d765,d767);
	d763=_mm256_add_pd(d763,d766);d765=_mm256_add_pd(d765,d766);
	d764=_mm256_add_pd(d764,d765);
	d762=_mm256_add_pd(d762,d764);d3=_mm256_add_pd(d3,d764);
	d742=_mm256_add_pd(d742,d763);
	d761=_mm256_add_pd(d761,d762);
	d755=_mm256_add_pd(d755,d761);d760=_mm256_add_pd(d760,d761);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v759);
d756=_mm256_fmadd_pd(d760,tmp,d756);
d759=_mm256_fnmadd_pd(_mm256_mul_pd(d760,v756),_mm256_mul_pd(tmp, tmp),d759);

	d757=_mm256_add_pd(d757,d759);d758=_mm256_add_pd(d758,d759);
	d740=_mm256_fmadd_pd(d757,v742,d740);d742=_mm256_fmadd_pd(d757,v740,d742);
	d740=_mm256_fmadd_pd(d756,v742,d740);d742=_mm256_fmadd_pd(d756,v740,d742);
	d751=_mm256_add_pd(d751,d755);d754=_mm256_add_pd(d754,d755);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v742);
d753=_mm256_fmadd_pd(d754,tmp,d753);
d742=_mm256_fnmadd_pd(_mm256_mul_pd(d754,v753),_mm256_mul_pd(tmp, tmp),d742);

	d742=_mm256_add_pd(d742,d753);d752=_mm256_add_pd(d752,d753);
	d747=_mm256_add_pd(d747,d751);d750=_mm256_add_pd(d750,d751);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v740);
d749=_mm256_fmadd_pd(d750,tmp,d749);
d740=_mm256_fnmadd_pd(_mm256_mul_pd(d750,v749),_mm256_mul_pd(tmp, tmp),d740);

	d740=_mm256_add_pd(d740,d749);d748=_mm256_add_pd(d748,d749);
	d739=_mm256_add_pd(d739,d747);d746=_mm256_add_pd(d746,d747);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v745);
d743=_mm256_fmadd_pd(d746,tmp,d743);
d745=_mm256_fnmadd_pd(_mm256_mul_pd(d746,v743),_mm256_mul_pd(tmp, tmp),d745);

	d744=_mm256_add_pd(d744,d745);d3=_mm256_add_pd(d3,d745);
	d740=_mm256_add_pd(d740,d744);d742=_mm256_add_pd(d742,d744);
	d740=_mm256_add_pd(d740,d743);d742=_mm256_add_pd(d742,d743);
	d741=_mm256_add_pd(d741,d742);
	d739=_mm256_add_pd(d739,d741);d3=_mm256_add_pd(d3,d741);
	d719=_mm256_add_pd(d719,d740);
	d738=_mm256_add_pd(d738,d739);
	d732=_mm256_add_pd(d732,d738);d737=_mm256_add_pd(d737,d738);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v736);
d733=_mm256_fmadd_pd(d737,tmp,d733);
d736=_mm256_fnmadd_pd(_mm256_mul_pd(d737,v733),_mm256_mul_pd(tmp, tmp),d736);

	d734=_mm256_add_pd(d734,d736);d735=_mm256_add_pd(d735,d736);
	d717=_mm256_fmadd_pd(d734,v719,d717);d719=_mm256_fmadd_pd(d734,v717,d719);
	d717=_mm256_fmadd_pd(d733,v719,d717);d719=_mm256_fmadd_pd(d733,v717,d719);
	d728=_mm256_add_pd(d728,d732);d731=_mm256_add_pd(d731,d732);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v719);
d730=_mm256_fmadd_pd(d731,tmp,d730);
d719=_mm256_fnmadd_pd(_mm256_mul_pd(d731,v730),_mm256_mul_pd(tmp, tmp),d719);

	d719=_mm256_add_pd(d719,d730);d729=_mm256_add_pd(d729,d730);
	d724=_mm256_add_pd(d724,d728);d727=_mm256_add_pd(d727,d728);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v717);
d726=_mm256_fmadd_pd(d727,tmp,d726);
d717=_mm256_fnmadd_pd(_mm256_mul_pd(d727,v726),_mm256_mul_pd(tmp, tmp),d717);

	d717=_mm256_add_pd(d717,d726);d725=_mm256_add_pd(d725,d726);
	d716=_mm256_add_pd(d716,d724);d723=_mm256_add_pd(d723,d724);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v722);
d720=_mm256_fmadd_pd(d723,tmp,d720);
d722=_mm256_fnmadd_pd(_mm256_mul_pd(d723,v720),_mm256_mul_pd(tmp, tmp),d722);

	d721=_mm256_add_pd(d721,d722);d3=_mm256_add_pd(d3,d722);
	d717=_mm256_add_pd(d717,d721);d719=_mm256_add_pd(d719,d721);
	d717=_mm256_add_pd(d717,d720);d719=_mm256_add_pd(d719,d720);
	d718=_mm256_add_pd(d718,d719);
	d716=_mm256_add_pd(d716,d718);d3=_mm256_add_pd(d3,d718);
	d696=_mm256_add_pd(d696,d717);
	d715=_mm256_add_pd(d715,d716);
	d709=_mm256_add_pd(d709,d715);d714=_mm256_add_pd(d714,d715);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v713);
d710=_mm256_fmadd_pd(d714,tmp,d710);
d713=_mm256_fnmadd_pd(_mm256_mul_pd(d714,v710),_mm256_mul_pd(tmp, tmp),d713);

	d711=_mm256_add_pd(d711,d713);d712=_mm256_add_pd(d712,d713);
	d694=_mm256_fmadd_pd(d711,v696,d694);d696=_mm256_fmadd_pd(d711,v694,d696);
	d694=_mm256_fmadd_pd(d710,v696,d694);d696=_mm256_fmadd_pd(d710,v694,d696);
	d705=_mm256_add_pd(d705,d709);d708=_mm256_add_pd(d708,d709);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v696);
d707=_mm256_fmadd_pd(d708,tmp,d707);
d696=_mm256_fnmadd_pd(_mm256_mul_pd(d708,v707),_mm256_mul_pd(tmp, tmp),d696);

	d696=_mm256_add_pd(d696,d707);d706=_mm256_add_pd(d706,d707);
	d701=_mm256_add_pd(d701,d705);d704=_mm256_add_pd(d704,d705);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v694);
d703=_mm256_fmadd_pd(d704,tmp,d703);
d694=_mm256_fnmadd_pd(_mm256_mul_pd(d704,v703),_mm256_mul_pd(tmp, tmp),d694);

	d694=_mm256_add_pd(d694,d703);d702=_mm256_add_pd(d702,d703);
	d693=_mm256_add_pd(d693,d701);d700=_mm256_add_pd(d700,d701);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v699);
d697=_mm256_fmadd_pd(d700,tmp,d697);
d699=_mm256_fnmadd_pd(_mm256_mul_pd(d700,v697),_mm256_mul_pd(tmp, tmp),d699);

	d698=_mm256_add_pd(d698,d699);d3=_mm256_add_pd(d3,d699);
	d694=_mm256_add_pd(d694,d698);d696=_mm256_add_pd(d696,d698);
	d694=_mm256_add_pd(d694,d697);d696=_mm256_add_pd(d696,d697);
	d695=_mm256_add_pd(d695,d696);
	d693=_mm256_add_pd(d693,d695);d3=_mm256_add_pd(d3,d695);
	d673=_mm256_add_pd(d673,d694);
	d692=_mm256_add_pd(d692,d693);
	d686=_mm256_add_pd(d686,d692);d691=_mm256_add_pd(d691,d692);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v690);
d687=_mm256_fmadd_pd(d691,tmp,d687);
d690=_mm256_fnmadd_pd(_mm256_mul_pd(d691,v687),_mm256_mul_pd(tmp, tmp),d690);

	d688=_mm256_add_pd(d688,d690);d689=_mm256_add_pd(d689,d690);
	d671=_mm256_fmadd_pd(d688,v673,d671);d673=_mm256_fmadd_pd(d688,v671,d673);
	d671=_mm256_fmadd_pd(d687,v673,d671);d673=_mm256_fmadd_pd(d687,v671,d673);
	d682=_mm256_add_pd(d682,d686);d685=_mm256_add_pd(d685,d686);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v673);
d684=_mm256_fmadd_pd(d685,tmp,d684);
d673=_mm256_fnmadd_pd(_mm256_mul_pd(d685,v684),_mm256_mul_pd(tmp, tmp),d673);

	d673=_mm256_add_pd(d673,d684);d683=_mm256_add_pd(d683,d684);
	d678=_mm256_add_pd(d678,d682);d681=_mm256_add_pd(d681,d682);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v671);
d680=_mm256_fmadd_pd(d681,tmp,d680);
d671=_mm256_fnmadd_pd(_mm256_mul_pd(d681,v680),_mm256_mul_pd(tmp, tmp),d671);

	d671=_mm256_add_pd(d671,d680);d679=_mm256_add_pd(d679,d680);
	d670=_mm256_add_pd(d670,d678);d677=_mm256_add_pd(d677,d678);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v676);
d674=_mm256_fmadd_pd(d677,tmp,d674);
d676=_mm256_fnmadd_pd(_mm256_mul_pd(d677,v674),_mm256_mul_pd(tmp, tmp),d676);

	d675=_mm256_add_pd(d675,d676);d3=_mm256_add_pd(d3,d676);
	d671=_mm256_add_pd(d671,d675);d673=_mm256_add_pd(d673,d675);
	d671=_mm256_add_pd(d671,d674);d673=_mm256_add_pd(d673,d674);
	d672=_mm256_add_pd(d672,d673);
	d670=_mm256_add_pd(d670,d672);d3=_mm256_add_pd(d3,d672);
	d650=_mm256_add_pd(d650,d671);
	d669=_mm256_add_pd(d669,d670);
	d663=_mm256_add_pd(d663,d669);d668=_mm256_add_pd(d668,d669);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v667);
d664=_mm256_fmadd_pd(d668,tmp,d664);
d667=_mm256_fnmadd_pd(_mm256_mul_pd(d668,v664),_mm256_mul_pd(tmp, tmp),d667);

	d665=_mm256_add_pd(d665,d667);d666=_mm256_add_pd(d666,d667);
	d648=_mm256_fmadd_pd(d665,v650,d648);d650=_mm256_fmadd_pd(d665,v648,d650);
	d648=_mm256_fmadd_pd(d664,v650,d648);d650=_mm256_fmadd_pd(d664,v648,d650);
	d659=_mm256_add_pd(d659,d663);d662=_mm256_add_pd(d662,d663);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v650);
d661=_mm256_fmadd_pd(d662,tmp,d661);
d650=_mm256_fnmadd_pd(_mm256_mul_pd(d662,v661),_mm256_mul_pd(tmp, tmp),d650);

	d650=_mm256_add_pd(d650,d661);d660=_mm256_add_pd(d660,d661);
	d655=_mm256_add_pd(d655,d659);d658=_mm256_add_pd(d658,d659);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v648);
d657=_mm256_fmadd_pd(d658,tmp,d657);
d648=_mm256_fnmadd_pd(_mm256_mul_pd(d658,v657),_mm256_mul_pd(tmp, tmp),d648);

	d648=_mm256_add_pd(d648,d657);d656=_mm256_add_pd(d656,d657);
	d647=_mm256_add_pd(d647,d655);d654=_mm256_add_pd(d654,d655);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v653);
d651=_mm256_fmadd_pd(d654,tmp,d651);
d653=_mm256_fnmadd_pd(_mm256_mul_pd(d654,v651),_mm256_mul_pd(tmp, tmp),d653);

	d652=_mm256_add_pd(d652,d653);d3=_mm256_add_pd(d3,d653);
	d648=_mm256_add_pd(d648,d652);d650=_mm256_add_pd(d650,d652);
	d648=_mm256_add_pd(d648,d651);d650=_mm256_add_pd(d650,d651);
	d649=_mm256_add_pd(d649,d650);
	d647=_mm256_add_pd(d647,d649);d3=_mm256_add_pd(d3,d649);
	d627=_mm256_add_pd(d627,d648);
	d646=_mm256_add_pd(d646,d647);
	d640=_mm256_add_pd(d640,d646);d645=_mm256_add_pd(d645,d646);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v644);
d641=_mm256_fmadd_pd(d645,tmp,d641);
d644=_mm256_fnmadd_pd(_mm256_mul_pd(d645,v641),_mm256_mul_pd(tmp, tmp),d644);

	d642=_mm256_add_pd(d642,d644);d643=_mm256_add_pd(d643,d644);
	d625=_mm256_fmadd_pd(d642,v627,d625);d627=_mm256_fmadd_pd(d642,v625,d627);
	d625=_mm256_fmadd_pd(d641,v627,d625);d627=_mm256_fmadd_pd(d641,v625,d627);
	d636=_mm256_add_pd(d636,d640);d639=_mm256_add_pd(d639,d640);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v627);
d638=_mm256_fmadd_pd(d639,tmp,d638);
d627=_mm256_fnmadd_pd(_mm256_mul_pd(d639,v638),_mm256_mul_pd(tmp, tmp),d627);

	d627=_mm256_add_pd(d627,d638);d637=_mm256_add_pd(d637,d638);
	d632=_mm256_add_pd(d632,d636);d635=_mm256_add_pd(d635,d636);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v625);
d634=_mm256_fmadd_pd(d635,tmp,d634);
d625=_mm256_fnmadd_pd(_mm256_mul_pd(d635,v634),_mm256_mul_pd(tmp, tmp),d625);

	d625=_mm256_add_pd(d625,d634);d633=_mm256_add_pd(d633,d634);
	d624=_mm256_add_pd(d624,d632);d631=_mm256_add_pd(d631,d632);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v630);
d628=_mm256_fmadd_pd(d631,tmp,d628);
d630=_mm256_fnmadd_pd(_mm256_mul_pd(d631,v628),_mm256_mul_pd(tmp, tmp),d630);

	d629=_mm256_add_pd(d629,d630);d3=_mm256_add_pd(d3,d630);
	d625=_mm256_add_pd(d625,d629);d627=_mm256_add_pd(d627,d629);
	d625=_mm256_add_pd(d625,d628);d627=_mm256_add_pd(d627,d628);
	d626=_mm256_add_pd(d626,d627);
	d624=_mm256_add_pd(d624,d626);d3=_mm256_add_pd(d3,d626);
	d604=_mm256_add_pd(d604,d625);
	d623=_mm256_add_pd(d623,d624);
	d617=_mm256_add_pd(d617,d623);d622=_mm256_add_pd(d622,d623);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v621);
d618=_mm256_fmadd_pd(d622,tmp,d618);
d621=_mm256_fnmadd_pd(_mm256_mul_pd(d622,v618),_mm256_mul_pd(tmp, tmp),d621);

	d619=_mm256_add_pd(d619,d621);d620=_mm256_add_pd(d620,d621);
	d602=_mm256_fmadd_pd(d619,v604,d602);d604=_mm256_fmadd_pd(d619,v602,d604);
	d602=_mm256_fmadd_pd(d618,v604,d602);d604=_mm256_fmadd_pd(d618,v602,d604);
	d613=_mm256_add_pd(d613,d617);d616=_mm256_add_pd(d616,d617);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v604);
d615=_mm256_fmadd_pd(d616,tmp,d615);
d604=_mm256_fnmadd_pd(_mm256_mul_pd(d616,v615),_mm256_mul_pd(tmp, tmp),d604);

	d604=_mm256_add_pd(d604,d615);d614=_mm256_add_pd(d614,d615);
	d609=_mm256_add_pd(d609,d613);d612=_mm256_add_pd(d612,d613);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v602);
d611=_mm256_fmadd_pd(d612,tmp,d611);
d602=_mm256_fnmadd_pd(_mm256_mul_pd(d612,v611),_mm256_mul_pd(tmp, tmp),d602);

	d602=_mm256_add_pd(d602,d611);d610=_mm256_add_pd(d610,d611);
	d601=_mm256_add_pd(d601,d609);d608=_mm256_add_pd(d608,d609);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v607);
d605=_mm256_fmadd_pd(d608,tmp,d605);
d607=_mm256_fnmadd_pd(_mm256_mul_pd(d608,v605),_mm256_mul_pd(tmp, tmp),d607);

	d606=_mm256_add_pd(d606,d607);d3=_mm256_add_pd(d3,d607);
	d602=_mm256_add_pd(d602,d606);d604=_mm256_add_pd(d604,d606);
	d602=_mm256_add_pd(d602,d605);d604=_mm256_add_pd(d604,d605);
	d603=_mm256_add_pd(d603,d604);
	d601=_mm256_add_pd(d601,d603);d3=_mm256_add_pd(d3,d603);
	d581=_mm256_add_pd(d581,d602);
	d600=_mm256_add_pd(d600,d601);
	d594=_mm256_add_pd(d594,d600);d599=_mm256_add_pd(d599,d600);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v598);
d595=_mm256_fmadd_pd(d599,tmp,d595);
d598=_mm256_fnmadd_pd(_mm256_mul_pd(d599,v595),_mm256_mul_pd(tmp, tmp),d598);

	d596=_mm256_add_pd(d596,d598);d597=_mm256_add_pd(d597,d598);
	d579=_mm256_fmadd_pd(d596,v581,d579);d581=_mm256_fmadd_pd(d596,v579,d581);
	d579=_mm256_fmadd_pd(d595,v581,d579);d581=_mm256_fmadd_pd(d595,v579,d581);
	d590=_mm256_add_pd(d590,d594);d593=_mm256_add_pd(d593,d594);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v581);
d592=_mm256_fmadd_pd(d593,tmp,d592);
d581=_mm256_fnmadd_pd(_mm256_mul_pd(d593,v592),_mm256_mul_pd(tmp, tmp),d581);

	d581=_mm256_add_pd(d581,d592);d591=_mm256_add_pd(d591,d592);
	d586=_mm256_add_pd(d586,d590);d589=_mm256_add_pd(d589,d590);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v579);
d588=_mm256_fmadd_pd(d589,tmp,d588);
d579=_mm256_fnmadd_pd(_mm256_mul_pd(d589,v588),_mm256_mul_pd(tmp, tmp),d579);

	d579=_mm256_add_pd(d579,d588);d587=_mm256_add_pd(d587,d588);
	d578=_mm256_add_pd(d578,d586);d585=_mm256_add_pd(d585,d586);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v584);
d582=_mm256_fmadd_pd(d585,tmp,d582);
d584=_mm256_fnmadd_pd(_mm256_mul_pd(d585,v582),_mm256_mul_pd(tmp, tmp),d584);

	d583=_mm256_add_pd(d583,d584);d3=_mm256_add_pd(d3,d584);
	d579=_mm256_add_pd(d579,d583);d581=_mm256_add_pd(d581,d583);
	d579=_mm256_add_pd(d579,d582);d581=_mm256_add_pd(d581,d582);
	d580=_mm256_add_pd(d580,d581);
	d578=_mm256_add_pd(d578,d580);d3=_mm256_add_pd(d3,d580);
	d558=_mm256_add_pd(d558,d579);
	d577=_mm256_add_pd(d577,d578);
	d571=_mm256_add_pd(d571,d577);d576=_mm256_add_pd(d576,d577);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v575);
d572=_mm256_fmadd_pd(d576,tmp,d572);
d575=_mm256_fnmadd_pd(_mm256_mul_pd(d576,v572),_mm256_mul_pd(tmp, tmp),d575);

	d573=_mm256_add_pd(d573,d575);d574=_mm256_add_pd(d574,d575);
	d556=_mm256_fmadd_pd(d573,v558,d556);d558=_mm256_fmadd_pd(d573,v556,d558);
	d556=_mm256_fmadd_pd(d572,v558,d556);d558=_mm256_fmadd_pd(d572,v556,d558);
	d567=_mm256_add_pd(d567,d571);d570=_mm256_add_pd(d570,d571);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v558);
d569=_mm256_fmadd_pd(d570,tmp,d569);
d558=_mm256_fnmadd_pd(_mm256_mul_pd(d570,v569),_mm256_mul_pd(tmp, tmp),d558);

	d558=_mm256_add_pd(d558,d569);d568=_mm256_add_pd(d568,d569);
	d563=_mm256_add_pd(d563,d567);d566=_mm256_add_pd(d566,d567);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v556);
d565=_mm256_fmadd_pd(d566,tmp,d565);
d556=_mm256_fnmadd_pd(_mm256_mul_pd(d566,v565),_mm256_mul_pd(tmp, tmp),d556);

	d556=_mm256_add_pd(d556,d565);d564=_mm256_add_pd(d564,d565);
	d555=_mm256_add_pd(d555,d563);d562=_mm256_add_pd(d562,d563);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v561);
d559=_mm256_fmadd_pd(d562,tmp,d559);
d561=_mm256_fnmadd_pd(_mm256_mul_pd(d562,v559),_mm256_mul_pd(tmp, tmp),d561);

	d560=_mm256_add_pd(d560,d561);d3=_mm256_add_pd(d3,d561);
	d556=_mm256_add_pd(d556,d560);d558=_mm256_add_pd(d558,d560);
	d556=_mm256_add_pd(d556,d559);d558=_mm256_add_pd(d558,d559);
	d557=_mm256_add_pd(d557,d558);
	d555=_mm256_add_pd(d555,d557);d3=_mm256_add_pd(d3,d557);
	d535=_mm256_add_pd(d535,d556);
	d554=_mm256_add_pd(d554,d555);
	d548=_mm256_add_pd(d548,d554);d553=_mm256_add_pd(d553,d554);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v552);
d549=_mm256_fmadd_pd(d553,tmp,d549);
d552=_mm256_fnmadd_pd(_mm256_mul_pd(d553,v549),_mm256_mul_pd(tmp, tmp),d552);

	d550=_mm256_add_pd(d550,d552);d551=_mm256_add_pd(d551,d552);
	d533=_mm256_fmadd_pd(d550,v535,d533);d535=_mm256_fmadd_pd(d550,v533,d535);
	d533=_mm256_fmadd_pd(d549,v535,d533);d535=_mm256_fmadd_pd(d549,v533,d535);
	d544=_mm256_add_pd(d544,d548);d547=_mm256_add_pd(d547,d548);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v535);
d546=_mm256_fmadd_pd(d547,tmp,d546);
d535=_mm256_fnmadd_pd(_mm256_mul_pd(d547,v546),_mm256_mul_pd(tmp, tmp),d535);

	d535=_mm256_add_pd(d535,d546);d545=_mm256_add_pd(d545,d546);
	d540=_mm256_add_pd(d540,d544);d543=_mm256_add_pd(d543,d544);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v533);
d542=_mm256_fmadd_pd(d543,tmp,d542);
d533=_mm256_fnmadd_pd(_mm256_mul_pd(d543,v542),_mm256_mul_pd(tmp, tmp),d533);

	d533=_mm256_add_pd(d533,d542);d541=_mm256_add_pd(d541,d542);
	d532=_mm256_add_pd(d532,d540);d539=_mm256_add_pd(d539,d540);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v538);
d536=_mm256_fmadd_pd(d539,tmp,d536);
d538=_mm256_fnmadd_pd(_mm256_mul_pd(d539,v536),_mm256_mul_pd(tmp, tmp),d538);

	d537=_mm256_add_pd(d537,d538);d3=_mm256_add_pd(d3,d538);
	d533=_mm256_add_pd(d533,d537);d535=_mm256_add_pd(d535,d537);
	d533=_mm256_add_pd(d533,d536);d535=_mm256_add_pd(d535,d536);
	d534=_mm256_add_pd(d534,d535);
	d532=_mm256_add_pd(d532,d534);d3=_mm256_add_pd(d3,d534);
	d512=_mm256_add_pd(d512,d533);
	d531=_mm256_add_pd(d531,d532);
	d525=_mm256_add_pd(d525,d531);d530=_mm256_add_pd(d530,d531);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v529);
d526=_mm256_fmadd_pd(d530,tmp,d526);
d529=_mm256_fnmadd_pd(_mm256_mul_pd(d530,v526),_mm256_mul_pd(tmp, tmp),d529);

	d527=_mm256_add_pd(d527,d529);d528=_mm256_add_pd(d528,d529);
	d510=_mm256_fmadd_pd(d527,v512,d510);d512=_mm256_fmadd_pd(d527,v510,d512);
	d510=_mm256_fmadd_pd(d526,v512,d510);d512=_mm256_fmadd_pd(d526,v510,d512);
	d521=_mm256_add_pd(d521,d525);d524=_mm256_add_pd(d524,d525);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v512);
d523=_mm256_fmadd_pd(d524,tmp,d523);
d512=_mm256_fnmadd_pd(_mm256_mul_pd(d524,v523),_mm256_mul_pd(tmp, tmp),d512);

	d512=_mm256_add_pd(d512,d523);d522=_mm256_add_pd(d522,d523);
	d517=_mm256_add_pd(d517,d521);d520=_mm256_add_pd(d520,d521);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v510);
d519=_mm256_fmadd_pd(d520,tmp,d519);
d510=_mm256_fnmadd_pd(_mm256_mul_pd(d520,v519),_mm256_mul_pd(tmp, tmp),d510);

	d510=_mm256_add_pd(d510,d519);d518=_mm256_add_pd(d518,d519);
	d509=_mm256_add_pd(d509,d517);d516=_mm256_add_pd(d516,d517);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v515);
d513=_mm256_fmadd_pd(d516,tmp,d513);
d515=_mm256_fnmadd_pd(_mm256_mul_pd(d516,v513),_mm256_mul_pd(tmp, tmp),d515);

	d514=_mm256_add_pd(d514,d515);d3=_mm256_add_pd(d3,d515);
	d510=_mm256_add_pd(d510,d514);d512=_mm256_add_pd(d512,d514);
	d510=_mm256_add_pd(d510,d513);d512=_mm256_add_pd(d512,d513);
	d511=_mm256_add_pd(d511,d512);
	d509=_mm256_add_pd(d509,d511);d3=_mm256_add_pd(d3,d511);
	d489=_mm256_add_pd(d489,d510);
	d508=_mm256_add_pd(d508,d509);
	d502=_mm256_add_pd(d502,d508);d507=_mm256_add_pd(d507,d508);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v506);
d503=_mm256_fmadd_pd(d507,tmp,d503);
d506=_mm256_fnmadd_pd(_mm256_mul_pd(d507,v503),_mm256_mul_pd(tmp, tmp),d506);

	d504=_mm256_add_pd(d504,d506);d505=_mm256_add_pd(d505,d506);
	d487=_mm256_fmadd_pd(d504,v489,d487);d489=_mm256_fmadd_pd(d504,v487,d489);
	d487=_mm256_fmadd_pd(d503,v489,d487);d489=_mm256_fmadd_pd(d503,v487,d489);
	d498=_mm256_add_pd(d498,d502);d501=_mm256_add_pd(d501,d502);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v489);
d500=_mm256_fmadd_pd(d501,tmp,d500);
d489=_mm256_fnmadd_pd(_mm256_mul_pd(d501,v500),_mm256_mul_pd(tmp, tmp),d489);

	d489=_mm256_add_pd(d489,d500);d499=_mm256_add_pd(d499,d500);
	d494=_mm256_add_pd(d494,d498);d497=_mm256_add_pd(d497,d498);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v487);
d496=_mm256_fmadd_pd(d497,tmp,d496);
d487=_mm256_fnmadd_pd(_mm256_mul_pd(d497,v496),_mm256_mul_pd(tmp, tmp),d487);

	d487=_mm256_add_pd(d487,d496);d495=_mm256_add_pd(d495,d496);
	d486=_mm256_add_pd(d486,d494);d493=_mm256_add_pd(d493,d494);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v492);
d490=_mm256_fmadd_pd(d493,tmp,d490);
d492=_mm256_fnmadd_pd(_mm256_mul_pd(d493,v490),_mm256_mul_pd(tmp, tmp),d492);

	d491=_mm256_add_pd(d491,d492);d3=_mm256_add_pd(d3,d492);
	d487=_mm256_add_pd(d487,d491);d489=_mm256_add_pd(d489,d491);
	d487=_mm256_add_pd(d487,d490);d489=_mm256_add_pd(d489,d490);
	d488=_mm256_add_pd(d488,d489);
	d486=_mm256_add_pd(d486,d488);d3=_mm256_add_pd(d3,d488);
	d466=_mm256_add_pd(d466,d487);
	d485=_mm256_add_pd(d485,d486);
	d479=_mm256_add_pd(d479,d485);d484=_mm256_add_pd(d484,d485);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v483);
d480=_mm256_fmadd_pd(d484,tmp,d480);
d483=_mm256_fnmadd_pd(_mm256_mul_pd(d484,v480),_mm256_mul_pd(tmp, tmp),d483);

	d481=_mm256_add_pd(d481,d483);d482=_mm256_add_pd(d482,d483);
	d464=_mm256_fmadd_pd(d481,v466,d464);d466=_mm256_fmadd_pd(d481,v464,d466);
	d464=_mm256_fmadd_pd(d480,v466,d464);d466=_mm256_fmadd_pd(d480,v464,d466);
	d475=_mm256_add_pd(d475,d479);d478=_mm256_add_pd(d478,d479);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v466);
d477=_mm256_fmadd_pd(d478,tmp,d477);
d466=_mm256_fnmadd_pd(_mm256_mul_pd(d478,v477),_mm256_mul_pd(tmp, tmp),d466);

	d466=_mm256_add_pd(d466,d477);d476=_mm256_add_pd(d476,d477);
	d471=_mm256_add_pd(d471,d475);d474=_mm256_add_pd(d474,d475);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v464);
d473=_mm256_fmadd_pd(d474,tmp,d473);
d464=_mm256_fnmadd_pd(_mm256_mul_pd(d474,v473),_mm256_mul_pd(tmp, tmp),d464);

	d464=_mm256_add_pd(d464,d473);d472=_mm256_add_pd(d472,d473);
	d463=_mm256_add_pd(d463,d471);d470=_mm256_add_pd(d470,d471);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v469);
d467=_mm256_fmadd_pd(d470,tmp,d467);
d469=_mm256_fnmadd_pd(_mm256_mul_pd(d470,v467),_mm256_mul_pd(tmp, tmp),d469);

	d468=_mm256_add_pd(d468,d469);d3=_mm256_add_pd(d3,d469);
	d464=_mm256_add_pd(d464,d468);d466=_mm256_add_pd(d466,d468);
	d464=_mm256_add_pd(d464,d467);d466=_mm256_add_pd(d466,d467);
	d465=_mm256_add_pd(d465,d466);
	d463=_mm256_add_pd(d463,d465);d3=_mm256_add_pd(d3,d465);
	d443=_mm256_add_pd(d443,d464);
	d462=_mm256_add_pd(d462,d463);
	d456=_mm256_add_pd(d456,d462);d461=_mm256_add_pd(d461,d462);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v460);
d457=_mm256_fmadd_pd(d461,tmp,d457);
d460=_mm256_fnmadd_pd(_mm256_mul_pd(d461,v457),_mm256_mul_pd(tmp, tmp),d460);

	d458=_mm256_add_pd(d458,d460);d459=_mm256_add_pd(d459,d460);
	d441=_mm256_fmadd_pd(d458,v443,d441);d443=_mm256_fmadd_pd(d458,v441,d443);
	d441=_mm256_fmadd_pd(d457,v443,d441);d443=_mm256_fmadd_pd(d457,v441,d443);
	d452=_mm256_add_pd(d452,d456);d455=_mm256_add_pd(d455,d456);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v443);
d454=_mm256_fmadd_pd(d455,tmp,d454);
d443=_mm256_fnmadd_pd(_mm256_mul_pd(d455,v454),_mm256_mul_pd(tmp, tmp),d443);

	d443=_mm256_add_pd(d443,d454);d453=_mm256_add_pd(d453,d454);
	d448=_mm256_add_pd(d448,d452);d451=_mm256_add_pd(d451,d452);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v441);
d450=_mm256_fmadd_pd(d451,tmp,d450);
d441=_mm256_fnmadd_pd(_mm256_mul_pd(d451,v450),_mm256_mul_pd(tmp, tmp),d441);

	d441=_mm256_add_pd(d441,d450);d449=_mm256_add_pd(d449,d450);
	d440=_mm256_add_pd(d440,d448);d447=_mm256_add_pd(d447,d448);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v446);
d444=_mm256_fmadd_pd(d447,tmp,d444);
d446=_mm256_fnmadd_pd(_mm256_mul_pd(d447,v444),_mm256_mul_pd(tmp, tmp),d446);

	d445=_mm256_add_pd(d445,d446);d3=_mm256_add_pd(d3,d446);
	d441=_mm256_add_pd(d441,d445);d443=_mm256_add_pd(d443,d445);
	d441=_mm256_add_pd(d441,d444);d443=_mm256_add_pd(d443,d444);
	d442=_mm256_add_pd(d442,d443);
	d440=_mm256_add_pd(d440,d442);d3=_mm256_add_pd(d3,d442);
	d420=_mm256_add_pd(d420,d441);
	d439=_mm256_add_pd(d439,d440);
	d433=_mm256_add_pd(d433,d439);d438=_mm256_add_pd(d438,d439);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v437);
d434=_mm256_fmadd_pd(d438,tmp,d434);
d437=_mm256_fnmadd_pd(_mm256_mul_pd(d438,v434),_mm256_mul_pd(tmp, tmp),d437);

	d435=_mm256_add_pd(d435,d437);d436=_mm256_add_pd(d436,d437);
	d418=_mm256_fmadd_pd(d435,v420,d418);d420=_mm256_fmadd_pd(d435,v418,d420);
	d418=_mm256_fmadd_pd(d434,v420,d418);d420=_mm256_fmadd_pd(d434,v418,d420);
	d429=_mm256_add_pd(d429,d433);d432=_mm256_add_pd(d432,d433);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v420);
d431=_mm256_fmadd_pd(d432,tmp,d431);
d420=_mm256_fnmadd_pd(_mm256_mul_pd(d432,v431),_mm256_mul_pd(tmp, tmp),d420);

	d420=_mm256_add_pd(d420,d431);d430=_mm256_add_pd(d430,d431);
	d425=_mm256_add_pd(d425,d429);d428=_mm256_add_pd(d428,d429);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v418);
d427=_mm256_fmadd_pd(d428,tmp,d427);
d418=_mm256_fnmadd_pd(_mm256_mul_pd(d428,v427),_mm256_mul_pd(tmp, tmp),d418);

	d418=_mm256_add_pd(d418,d427);d426=_mm256_add_pd(d426,d427);
	d417=_mm256_add_pd(d417,d425);d424=_mm256_add_pd(d424,d425);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v423);
d421=_mm256_fmadd_pd(d424,tmp,d421);
d423=_mm256_fnmadd_pd(_mm256_mul_pd(d424,v421),_mm256_mul_pd(tmp, tmp),d423);

	d422=_mm256_add_pd(d422,d423);d3=_mm256_add_pd(d3,d423);
	d418=_mm256_add_pd(d418,d422);d420=_mm256_add_pd(d420,d422);
	d418=_mm256_add_pd(d418,d421);d420=_mm256_add_pd(d420,d421);
	d419=_mm256_add_pd(d419,d420);
	d417=_mm256_add_pd(d417,d419);d3=_mm256_add_pd(d3,d419);
	d397=_mm256_add_pd(d397,d418);
	d416=_mm256_add_pd(d416,d417);
	d410=_mm256_add_pd(d410,d416);d415=_mm256_add_pd(d415,d416);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v414);
d411=_mm256_fmadd_pd(d415,tmp,d411);
d414=_mm256_fnmadd_pd(_mm256_mul_pd(d415,v411),_mm256_mul_pd(tmp, tmp),d414);

	d412=_mm256_add_pd(d412,d414);d413=_mm256_add_pd(d413,d414);
	d395=_mm256_fmadd_pd(d412,v397,d395);d397=_mm256_fmadd_pd(d412,v395,d397);
	d395=_mm256_fmadd_pd(d411,v397,d395);d397=_mm256_fmadd_pd(d411,v395,d397);
	d406=_mm256_add_pd(d406,d410);d409=_mm256_add_pd(d409,d410);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v397);
d408=_mm256_fmadd_pd(d409,tmp,d408);
d397=_mm256_fnmadd_pd(_mm256_mul_pd(d409,v408),_mm256_mul_pd(tmp, tmp),d397);

	d397=_mm256_add_pd(d397,d408);d407=_mm256_add_pd(d407,d408);
	d402=_mm256_add_pd(d402,d406);d405=_mm256_add_pd(d405,d406);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v395);
d404=_mm256_fmadd_pd(d405,tmp,d404);
d395=_mm256_fnmadd_pd(_mm256_mul_pd(d405,v404),_mm256_mul_pd(tmp, tmp),d395);

	d395=_mm256_add_pd(d395,d404);d403=_mm256_add_pd(d403,d404);
	d394=_mm256_add_pd(d394,d402);d401=_mm256_add_pd(d401,d402);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v400);
d398=_mm256_fmadd_pd(d401,tmp,d398);
d400=_mm256_fnmadd_pd(_mm256_mul_pd(d401,v398),_mm256_mul_pd(tmp, tmp),d400);

	d399=_mm256_add_pd(d399,d400);d3=_mm256_add_pd(d3,d400);
	d395=_mm256_add_pd(d395,d399);d397=_mm256_add_pd(d397,d399);
	d395=_mm256_add_pd(d395,d398);d397=_mm256_add_pd(d397,d398);
	d396=_mm256_add_pd(d396,d397);
	d394=_mm256_add_pd(d394,d396);d3=_mm256_add_pd(d3,d396);
	d374=_mm256_add_pd(d374,d395);
	d393=_mm256_add_pd(d393,d394);
	d387=_mm256_add_pd(d387,d393);d392=_mm256_add_pd(d392,d393);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v391);
d388=_mm256_fmadd_pd(d392,tmp,d388);
d391=_mm256_fnmadd_pd(_mm256_mul_pd(d392,v388),_mm256_mul_pd(tmp, tmp),d391);

	d389=_mm256_add_pd(d389,d391);d390=_mm256_add_pd(d390,d391);
	d372=_mm256_fmadd_pd(d389,v374,d372);d374=_mm256_fmadd_pd(d389,v372,d374);
	d372=_mm256_fmadd_pd(d388,v374,d372);d374=_mm256_fmadd_pd(d388,v372,d374);
	d383=_mm256_add_pd(d383,d387);d386=_mm256_add_pd(d386,d387);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v374);
d385=_mm256_fmadd_pd(d386,tmp,d385);
d374=_mm256_fnmadd_pd(_mm256_mul_pd(d386,v385),_mm256_mul_pd(tmp, tmp),d374);

	d374=_mm256_add_pd(d374,d385);d384=_mm256_add_pd(d384,d385);
	d379=_mm256_add_pd(d379,d383);d382=_mm256_add_pd(d382,d383);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v372);
d381=_mm256_fmadd_pd(d382,tmp,d381);
d372=_mm256_fnmadd_pd(_mm256_mul_pd(d382,v381),_mm256_mul_pd(tmp, tmp),d372);

	d372=_mm256_add_pd(d372,d381);d380=_mm256_add_pd(d380,d381);
	d371=_mm256_add_pd(d371,d379);d378=_mm256_add_pd(d378,d379);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v377);
d375=_mm256_fmadd_pd(d378,tmp,d375);
d377=_mm256_fnmadd_pd(_mm256_mul_pd(d378,v375),_mm256_mul_pd(tmp, tmp),d377);

	d376=_mm256_add_pd(d376,d377);d3=_mm256_add_pd(d3,d377);
	d372=_mm256_add_pd(d372,d376);d374=_mm256_add_pd(d374,d376);
	d372=_mm256_add_pd(d372,d375);d374=_mm256_add_pd(d374,d375);
	d373=_mm256_add_pd(d373,d374);
	d371=_mm256_add_pd(d371,d373);d3=_mm256_add_pd(d3,d373);
	d351=_mm256_add_pd(d351,d372);
	d370=_mm256_add_pd(d370,d371);
	d364=_mm256_add_pd(d364,d370);d369=_mm256_add_pd(d369,d370);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v368);
d365=_mm256_fmadd_pd(d369,tmp,d365);
d368=_mm256_fnmadd_pd(_mm256_mul_pd(d369,v365),_mm256_mul_pd(tmp, tmp),d368);

	d366=_mm256_add_pd(d366,d368);d367=_mm256_add_pd(d367,d368);
	d349=_mm256_fmadd_pd(d366,v351,d349);d351=_mm256_fmadd_pd(d366,v349,d351);
	d349=_mm256_fmadd_pd(d365,v351,d349);d351=_mm256_fmadd_pd(d365,v349,d351);
	d360=_mm256_add_pd(d360,d364);d363=_mm256_add_pd(d363,d364);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v351);
d362=_mm256_fmadd_pd(d363,tmp,d362);
d351=_mm256_fnmadd_pd(_mm256_mul_pd(d363,v362),_mm256_mul_pd(tmp, tmp),d351);

	d351=_mm256_add_pd(d351,d362);d361=_mm256_add_pd(d361,d362);
	d356=_mm256_add_pd(d356,d360);d359=_mm256_add_pd(d359,d360);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v349);
d358=_mm256_fmadd_pd(d359,tmp,d358);
d349=_mm256_fnmadd_pd(_mm256_mul_pd(d359,v358),_mm256_mul_pd(tmp, tmp),d349);

	d349=_mm256_add_pd(d349,d358);d357=_mm256_add_pd(d357,d358);
	d348=_mm256_add_pd(d348,d356);d355=_mm256_add_pd(d355,d356);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v354);
d352=_mm256_fmadd_pd(d355,tmp,d352);
d354=_mm256_fnmadd_pd(_mm256_mul_pd(d355,v352),_mm256_mul_pd(tmp, tmp),d354);

	d353=_mm256_add_pd(d353,d354);d3=_mm256_add_pd(d3,d354);
	d349=_mm256_add_pd(d349,d353);d351=_mm256_add_pd(d351,d353);
	d349=_mm256_add_pd(d349,d352);d351=_mm256_add_pd(d351,d352);
	d350=_mm256_add_pd(d350,d351);
	d348=_mm256_add_pd(d348,d350);d3=_mm256_add_pd(d3,d350);
	d328=_mm256_add_pd(d328,d349);
	d347=_mm256_add_pd(d347,d348);
	d341=_mm256_add_pd(d341,d347);d346=_mm256_add_pd(d346,d347);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v345);
d342=_mm256_fmadd_pd(d346,tmp,d342);
d345=_mm256_fnmadd_pd(_mm256_mul_pd(d346,v342),_mm256_mul_pd(tmp, tmp),d345);

	d343=_mm256_add_pd(d343,d345);d344=_mm256_add_pd(d344,d345);
	d326=_mm256_fmadd_pd(d343,v328,d326);d328=_mm256_fmadd_pd(d343,v326,d328);
	d326=_mm256_fmadd_pd(d342,v328,d326);d328=_mm256_fmadd_pd(d342,v326,d328);
	d337=_mm256_add_pd(d337,d341);d340=_mm256_add_pd(d340,d341);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v328);
d339=_mm256_fmadd_pd(d340,tmp,d339);
d328=_mm256_fnmadd_pd(_mm256_mul_pd(d340,v339),_mm256_mul_pd(tmp, tmp),d328);

	d328=_mm256_add_pd(d328,d339);d338=_mm256_add_pd(d338,d339);
	d333=_mm256_add_pd(d333,d337);d336=_mm256_add_pd(d336,d337);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v326);
d335=_mm256_fmadd_pd(d336,tmp,d335);
d326=_mm256_fnmadd_pd(_mm256_mul_pd(d336,v335),_mm256_mul_pd(tmp, tmp),d326);

	d326=_mm256_add_pd(d326,d335);d334=_mm256_add_pd(d334,d335);
	d325=_mm256_add_pd(d325,d333);d332=_mm256_add_pd(d332,d333);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v331);
d329=_mm256_fmadd_pd(d332,tmp,d329);
d331=_mm256_fnmadd_pd(_mm256_mul_pd(d332,v329),_mm256_mul_pd(tmp, tmp),d331);

	d330=_mm256_add_pd(d330,d331);d3=_mm256_add_pd(d3,d331);
	d326=_mm256_add_pd(d326,d330);d328=_mm256_add_pd(d328,d330);
	d326=_mm256_add_pd(d326,d329);d328=_mm256_add_pd(d328,d329);
	d327=_mm256_add_pd(d327,d328);
	d325=_mm256_add_pd(d325,d327);d3=_mm256_add_pd(d3,d327);
	d305=_mm256_add_pd(d305,d326);
	d324=_mm256_add_pd(d324,d325);
	d318=_mm256_add_pd(d318,d324);d323=_mm256_add_pd(d323,d324);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v322);
d319=_mm256_fmadd_pd(d323,tmp,d319);
d322=_mm256_fnmadd_pd(_mm256_mul_pd(d323,v319),_mm256_mul_pd(tmp, tmp),d322);

	d320=_mm256_add_pd(d320,d322);d321=_mm256_add_pd(d321,d322);
	d303=_mm256_fmadd_pd(d320,v305,d303);d305=_mm256_fmadd_pd(d320,v303,d305);
	d303=_mm256_fmadd_pd(d319,v305,d303);d305=_mm256_fmadd_pd(d319,v303,d305);
	d314=_mm256_add_pd(d314,d318);d317=_mm256_add_pd(d317,d318);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v305);
d316=_mm256_fmadd_pd(d317,tmp,d316);
d305=_mm256_fnmadd_pd(_mm256_mul_pd(d317,v316),_mm256_mul_pd(tmp, tmp),d305);

	d305=_mm256_add_pd(d305,d316);d315=_mm256_add_pd(d315,d316);
	d310=_mm256_add_pd(d310,d314);d313=_mm256_add_pd(d313,d314);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v303);
d312=_mm256_fmadd_pd(d313,tmp,d312);
d303=_mm256_fnmadd_pd(_mm256_mul_pd(d313,v312),_mm256_mul_pd(tmp, tmp),d303);

	d303=_mm256_add_pd(d303,d312);d311=_mm256_add_pd(d311,d312);
	d302=_mm256_add_pd(d302,d310);d309=_mm256_add_pd(d309,d310);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v308);
d306=_mm256_fmadd_pd(d309,tmp,d306);
d308=_mm256_fnmadd_pd(_mm256_mul_pd(d309,v306),_mm256_mul_pd(tmp, tmp),d308);

	d307=_mm256_add_pd(d307,d308);d3=_mm256_add_pd(d3,d308);
	d303=_mm256_add_pd(d303,d307);d305=_mm256_add_pd(d305,d307);
	d303=_mm256_add_pd(d303,d306);d305=_mm256_add_pd(d305,d306);
	d304=_mm256_add_pd(d304,d305);
	d302=_mm256_add_pd(d302,d304);d3=_mm256_add_pd(d3,d304);
	d282=_mm256_add_pd(d282,d303);
	d301=_mm256_add_pd(d301,d302);
	d295=_mm256_add_pd(d295,d301);d300=_mm256_add_pd(d300,d301);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v299);
d296=_mm256_fmadd_pd(d300,tmp,d296);
d299=_mm256_fnmadd_pd(_mm256_mul_pd(d300,v296),_mm256_mul_pd(tmp, tmp),d299);

	d297=_mm256_add_pd(d297,d299);d298=_mm256_add_pd(d298,d299);
	d280=_mm256_fmadd_pd(d297,v282,d280);d282=_mm256_fmadd_pd(d297,v280,d282);
	d280=_mm256_fmadd_pd(d296,v282,d280);d282=_mm256_fmadd_pd(d296,v280,d282);
	d291=_mm256_add_pd(d291,d295);d294=_mm256_add_pd(d294,d295);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v282);
d293=_mm256_fmadd_pd(d294,tmp,d293);
d282=_mm256_fnmadd_pd(_mm256_mul_pd(d294,v293),_mm256_mul_pd(tmp, tmp),d282);

	d282=_mm256_add_pd(d282,d293);d292=_mm256_add_pd(d292,d293);
	d287=_mm256_add_pd(d287,d291);d290=_mm256_add_pd(d290,d291);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v280);
d289=_mm256_fmadd_pd(d290,tmp,d289);
d280=_mm256_fnmadd_pd(_mm256_mul_pd(d290,v289),_mm256_mul_pd(tmp, tmp),d280);

	d280=_mm256_add_pd(d280,d289);d288=_mm256_add_pd(d288,d289);
	d279=_mm256_add_pd(d279,d287);d286=_mm256_add_pd(d286,d287);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v285);
d283=_mm256_fmadd_pd(d286,tmp,d283);
d285=_mm256_fnmadd_pd(_mm256_mul_pd(d286,v283),_mm256_mul_pd(tmp, tmp),d285);

	d284=_mm256_add_pd(d284,d285);d3=_mm256_add_pd(d3,d285);
	d280=_mm256_add_pd(d280,d284);d282=_mm256_add_pd(d282,d284);
	d280=_mm256_add_pd(d280,d283);d282=_mm256_add_pd(d282,d283);
	d281=_mm256_add_pd(d281,d282);
	d279=_mm256_add_pd(d279,d281);d3=_mm256_add_pd(d3,d281);
	d259=_mm256_add_pd(d259,d280);
	d278=_mm256_add_pd(d278,d279);
	d272=_mm256_add_pd(d272,d278);d277=_mm256_add_pd(d277,d278);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v276);
d273=_mm256_fmadd_pd(d277,tmp,d273);
d276=_mm256_fnmadd_pd(_mm256_mul_pd(d277,v273),_mm256_mul_pd(tmp, tmp),d276);

	d274=_mm256_add_pd(d274,d276);d275=_mm256_add_pd(d275,d276);
	d257=_mm256_fmadd_pd(d274,v259,d257);d259=_mm256_fmadd_pd(d274,v257,d259);
	d257=_mm256_fmadd_pd(d273,v259,d257);d259=_mm256_fmadd_pd(d273,v257,d259);
	d268=_mm256_add_pd(d268,d272);d271=_mm256_add_pd(d271,d272);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v259);
d270=_mm256_fmadd_pd(d271,tmp,d270);
d259=_mm256_fnmadd_pd(_mm256_mul_pd(d271,v270),_mm256_mul_pd(tmp, tmp),d259);

	d259=_mm256_add_pd(d259,d270);d269=_mm256_add_pd(d269,d270);
	d264=_mm256_add_pd(d264,d268);d267=_mm256_add_pd(d267,d268);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v257);
d266=_mm256_fmadd_pd(d267,tmp,d266);
d257=_mm256_fnmadd_pd(_mm256_mul_pd(d267,v266),_mm256_mul_pd(tmp, tmp),d257);

	d257=_mm256_add_pd(d257,d266);d265=_mm256_add_pd(d265,d266);
	d256=_mm256_add_pd(d256,d264);d263=_mm256_add_pd(d263,d264);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v262);
d260=_mm256_fmadd_pd(d263,tmp,d260);
d262=_mm256_fnmadd_pd(_mm256_mul_pd(d263,v260),_mm256_mul_pd(tmp, tmp),d262);

	d261=_mm256_add_pd(d261,d262);d3=_mm256_add_pd(d3,d262);
	d257=_mm256_add_pd(d257,d261);d259=_mm256_add_pd(d259,d261);
	d257=_mm256_add_pd(d257,d260);d259=_mm256_add_pd(d259,d260);
	d258=_mm256_add_pd(d258,d259);
	d256=_mm256_add_pd(d256,d258);d3=_mm256_add_pd(d3,d258);
	d236=_mm256_add_pd(d236,d257);
	d255=_mm256_add_pd(d255,d256);
	d249=_mm256_add_pd(d249,d255);d254=_mm256_add_pd(d254,d255);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v253);
d250=_mm256_fmadd_pd(d254,tmp,d250);
d253=_mm256_fnmadd_pd(_mm256_mul_pd(d254,v250),_mm256_mul_pd(tmp, tmp),d253);

	d251=_mm256_add_pd(d251,d253);d252=_mm256_add_pd(d252,d253);
	d234=_mm256_fmadd_pd(d251,v236,d234);d236=_mm256_fmadd_pd(d251,v234,d236);
	d234=_mm256_fmadd_pd(d250,v236,d234);d236=_mm256_fmadd_pd(d250,v234,d236);
	d245=_mm256_add_pd(d245,d249);d248=_mm256_add_pd(d248,d249);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v236);
d247=_mm256_fmadd_pd(d248,tmp,d247);
d236=_mm256_fnmadd_pd(_mm256_mul_pd(d248,v247),_mm256_mul_pd(tmp, tmp),d236);

	d236=_mm256_add_pd(d236,d247);d246=_mm256_add_pd(d246,d247);
	d241=_mm256_add_pd(d241,d245);d244=_mm256_add_pd(d244,d245);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v234);
d243=_mm256_fmadd_pd(d244,tmp,d243);
d234=_mm256_fnmadd_pd(_mm256_mul_pd(d244,v243),_mm256_mul_pd(tmp, tmp),d234);

	d234=_mm256_add_pd(d234,d243);d242=_mm256_add_pd(d242,d243);
	d233=_mm256_add_pd(d233,d241);d240=_mm256_add_pd(d240,d241);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v239);
d237=_mm256_fmadd_pd(d240,tmp,d237);
d239=_mm256_fnmadd_pd(_mm256_mul_pd(d240,v237),_mm256_mul_pd(tmp, tmp),d239);

	d238=_mm256_add_pd(d238,d239);d3=_mm256_add_pd(d3,d239);
	d234=_mm256_add_pd(d234,d238);d236=_mm256_add_pd(d236,d238);
	d234=_mm256_add_pd(d234,d237);d236=_mm256_add_pd(d236,d237);
	d235=_mm256_add_pd(d235,d236);
	d233=_mm256_add_pd(d233,d235);d3=_mm256_add_pd(d3,d235);
	d213=_mm256_add_pd(d213,d234);
	d232=_mm256_add_pd(d232,d233);
	d226=_mm256_add_pd(d226,d232);d231=_mm256_add_pd(d231,d232);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v230);
d227=_mm256_fmadd_pd(d231,tmp,d227);
d230=_mm256_fnmadd_pd(_mm256_mul_pd(d231,v227),_mm256_mul_pd(tmp, tmp),d230);

	d228=_mm256_add_pd(d228,d230);d229=_mm256_add_pd(d229,d230);
	d211=_mm256_fmadd_pd(d228,v213,d211);d213=_mm256_fmadd_pd(d228,v211,d213);
	d211=_mm256_fmadd_pd(d227,v213,d211);d213=_mm256_fmadd_pd(d227,v211,d213);
	d222=_mm256_add_pd(d222,d226);d225=_mm256_add_pd(d225,d226);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v213);
d224=_mm256_fmadd_pd(d225,tmp,d224);
d213=_mm256_fnmadd_pd(_mm256_mul_pd(d225,v224),_mm256_mul_pd(tmp, tmp),d213);

	d213=_mm256_add_pd(d213,d224);d223=_mm256_add_pd(d223,d224);
	d218=_mm256_add_pd(d218,d222);d221=_mm256_add_pd(d221,d222);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v211);
d220=_mm256_fmadd_pd(d221,tmp,d220);
d211=_mm256_fnmadd_pd(_mm256_mul_pd(d221,v220),_mm256_mul_pd(tmp, tmp),d211);

	d211=_mm256_add_pd(d211,d220);d219=_mm256_add_pd(d219,d220);
	d210=_mm256_add_pd(d210,d218);d217=_mm256_add_pd(d217,d218);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v216);
d214=_mm256_fmadd_pd(d217,tmp,d214);
d216=_mm256_fnmadd_pd(_mm256_mul_pd(d217,v214),_mm256_mul_pd(tmp, tmp),d216);

	d215=_mm256_add_pd(d215,d216);d3=_mm256_add_pd(d3,d216);
	d211=_mm256_add_pd(d211,d215);d213=_mm256_add_pd(d213,d215);
	d211=_mm256_add_pd(d211,d214);d213=_mm256_add_pd(d213,d214);
	d212=_mm256_add_pd(d212,d213);
	d210=_mm256_add_pd(d210,d212);d3=_mm256_add_pd(d3,d212);
	d190=_mm256_add_pd(d190,d211);
	d209=_mm256_add_pd(d209,d210);
	d203=_mm256_add_pd(d203,d209);d208=_mm256_add_pd(d208,d209);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v207);
d204=_mm256_fmadd_pd(d208,tmp,d204);
d207=_mm256_fnmadd_pd(_mm256_mul_pd(d208,v204),_mm256_mul_pd(tmp, tmp),d207);

	d205=_mm256_add_pd(d205,d207);d206=_mm256_add_pd(d206,d207);
	d188=_mm256_fmadd_pd(d205,v190,d188);d190=_mm256_fmadd_pd(d205,v188,d190);
	d188=_mm256_fmadd_pd(d204,v190,d188);d190=_mm256_fmadd_pd(d204,v188,d190);
	d199=_mm256_add_pd(d199,d203);d202=_mm256_add_pd(d202,d203);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v190);
d201=_mm256_fmadd_pd(d202,tmp,d201);
d190=_mm256_fnmadd_pd(_mm256_mul_pd(d202,v201),_mm256_mul_pd(tmp, tmp),d190);

	d190=_mm256_add_pd(d190,d201);d200=_mm256_add_pd(d200,d201);
	d195=_mm256_add_pd(d195,d199);d198=_mm256_add_pd(d198,d199);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v188);
d197=_mm256_fmadd_pd(d198,tmp,d197);
d188=_mm256_fnmadd_pd(_mm256_mul_pd(d198,v197),_mm256_mul_pd(tmp, tmp),d188);

	d188=_mm256_add_pd(d188,d197);d196=_mm256_add_pd(d196,d197);
	d187=_mm256_add_pd(d187,d195);d194=_mm256_add_pd(d194,d195);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v193);
d191=_mm256_fmadd_pd(d194,tmp,d191);
d193=_mm256_fnmadd_pd(_mm256_mul_pd(d194,v191),_mm256_mul_pd(tmp, tmp),d193);

	d192=_mm256_add_pd(d192,d193);d3=_mm256_add_pd(d3,d193);
	d188=_mm256_add_pd(d188,d192);d190=_mm256_add_pd(d190,d192);
	d188=_mm256_add_pd(d188,d191);d190=_mm256_add_pd(d190,d191);
	d189=_mm256_add_pd(d189,d190);
	d187=_mm256_add_pd(d187,d189);d3=_mm256_add_pd(d3,d189);
	d167=_mm256_add_pd(d167,d188);
	d186=_mm256_add_pd(d186,d187);
	d180=_mm256_add_pd(d180,d186);d185=_mm256_add_pd(d185,d186);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v184);
d181=_mm256_fmadd_pd(d185,tmp,d181);
d184=_mm256_fnmadd_pd(_mm256_mul_pd(d185,v181),_mm256_mul_pd(tmp, tmp),d184);

	d182=_mm256_add_pd(d182,d184);d183=_mm256_add_pd(d183,d184);
	d165=_mm256_fmadd_pd(d182,v167,d165);d167=_mm256_fmadd_pd(d182,v165,d167);
	d165=_mm256_fmadd_pd(d181,v167,d165);d167=_mm256_fmadd_pd(d181,v165,d167);
	d176=_mm256_add_pd(d176,d180);d179=_mm256_add_pd(d179,d180);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v167);
d178=_mm256_fmadd_pd(d179,tmp,d178);
d167=_mm256_fnmadd_pd(_mm256_mul_pd(d179,v178),_mm256_mul_pd(tmp, tmp),d167);

	d167=_mm256_add_pd(d167,d178);d177=_mm256_add_pd(d177,d178);
	d172=_mm256_add_pd(d172,d176);d175=_mm256_add_pd(d175,d176);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v165);
d174=_mm256_fmadd_pd(d175,tmp,d174);
d165=_mm256_fnmadd_pd(_mm256_mul_pd(d175,v174),_mm256_mul_pd(tmp, tmp),d165);

	d165=_mm256_add_pd(d165,d174);d173=_mm256_add_pd(d173,d174);
	d164=_mm256_add_pd(d164,d172);d171=_mm256_add_pd(d171,d172);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v170);
d168=_mm256_fmadd_pd(d171,tmp,d168);
d170=_mm256_fnmadd_pd(_mm256_mul_pd(d171,v168),_mm256_mul_pd(tmp, tmp),d170);

	d169=_mm256_add_pd(d169,d170);d3=_mm256_add_pd(d3,d170);
	d165=_mm256_add_pd(d165,d169);d167=_mm256_add_pd(d167,d169);
	d165=_mm256_add_pd(d165,d168);d167=_mm256_add_pd(d167,d168);
	d166=_mm256_add_pd(d166,d167);
	d164=_mm256_add_pd(d164,d166);d3=_mm256_add_pd(d3,d166);
	d144=_mm256_add_pd(d144,d165);
	d163=_mm256_add_pd(d163,d164);
	d157=_mm256_add_pd(d157,d163);d162=_mm256_add_pd(d162,d163);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v161);
d158=_mm256_fmadd_pd(d162,tmp,d158);
d161=_mm256_fnmadd_pd(_mm256_mul_pd(d162,v158),_mm256_mul_pd(tmp, tmp),d161);

	d159=_mm256_add_pd(d159,d161);d160=_mm256_add_pd(d160,d161);
	d142=_mm256_fmadd_pd(d159,v144,d142);d144=_mm256_fmadd_pd(d159,v142,d144);
	d142=_mm256_fmadd_pd(d158,v144,d142);d144=_mm256_fmadd_pd(d158,v142,d144);
	d153=_mm256_add_pd(d153,d157);d156=_mm256_add_pd(d156,d157);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v144);
d155=_mm256_fmadd_pd(d156,tmp,d155);
d144=_mm256_fnmadd_pd(_mm256_mul_pd(d156,v155),_mm256_mul_pd(tmp, tmp),d144);

	d144=_mm256_add_pd(d144,d155);d154=_mm256_add_pd(d154,d155);
	d149=_mm256_add_pd(d149,d153);d152=_mm256_add_pd(d152,d153);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v142);
d151=_mm256_fmadd_pd(d152,tmp,d151);
d142=_mm256_fnmadd_pd(_mm256_mul_pd(d152,v151),_mm256_mul_pd(tmp, tmp),d142);

	d142=_mm256_add_pd(d142,d151);d150=_mm256_add_pd(d150,d151);
	d141=_mm256_add_pd(d141,d149);d148=_mm256_add_pd(d148,d149);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v147);
d145=_mm256_fmadd_pd(d148,tmp,d145);
d147=_mm256_fnmadd_pd(_mm256_mul_pd(d148,v145),_mm256_mul_pd(tmp, tmp),d147);

	d146=_mm256_add_pd(d146,d147);d3=_mm256_add_pd(d3,d147);
	d142=_mm256_add_pd(d142,d146);d144=_mm256_add_pd(d144,d146);
	d142=_mm256_add_pd(d142,d145);d144=_mm256_add_pd(d144,d145);
	d143=_mm256_add_pd(d143,d144);
	d141=_mm256_add_pd(d141,d143);d3=_mm256_add_pd(d3,d143);
	d121=_mm256_add_pd(d121,d142);
	d140=_mm256_add_pd(d140,d141);
	d134=_mm256_add_pd(d134,d140);d139=_mm256_add_pd(d139,d140);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v138);
d135=_mm256_fmadd_pd(d139,tmp,d135);
d138=_mm256_fnmadd_pd(_mm256_mul_pd(d139,v135),_mm256_mul_pd(tmp, tmp),d138);

	d136=_mm256_add_pd(d136,d138);d137=_mm256_add_pd(d137,d138);
	d119=_mm256_fmadd_pd(d136,v121,d119);d121=_mm256_fmadd_pd(d136,v119,d121);
	d119=_mm256_fmadd_pd(d135,v121,d119);d121=_mm256_fmadd_pd(d135,v119,d121);
	d130=_mm256_add_pd(d130,d134);d133=_mm256_add_pd(d133,d134);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v121);
d132=_mm256_fmadd_pd(d133,tmp,d132);
d121=_mm256_fnmadd_pd(_mm256_mul_pd(d133,v132),_mm256_mul_pd(tmp, tmp),d121);

	d121=_mm256_add_pd(d121,d132);d131=_mm256_add_pd(d131,d132);
	d126=_mm256_add_pd(d126,d130);d129=_mm256_add_pd(d129,d130);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v119);
d128=_mm256_fmadd_pd(d129,tmp,d128);
d119=_mm256_fnmadd_pd(_mm256_mul_pd(d129,v128),_mm256_mul_pd(tmp, tmp),d119);

	d119=_mm256_add_pd(d119,d128);d127=_mm256_add_pd(d127,d128);
	d118=_mm256_add_pd(d118,d126);d125=_mm256_add_pd(d125,d126);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v124);
d122=_mm256_fmadd_pd(d125,tmp,d122);
d124=_mm256_fnmadd_pd(_mm256_mul_pd(d125,v122),_mm256_mul_pd(tmp, tmp),d124);

	d123=_mm256_add_pd(d123,d124);d3=_mm256_add_pd(d3,d124);
	d119=_mm256_add_pd(d119,d123);d121=_mm256_add_pd(d121,d123);
	d119=_mm256_add_pd(d119,d122);d121=_mm256_add_pd(d121,d122);
	d120=_mm256_add_pd(d120,d121);
	d118=_mm256_add_pd(d118,d120);d3=_mm256_add_pd(d3,d120);
	d98=_mm256_add_pd(d98,d119);
	d117=_mm256_add_pd(d117,d118);
	d111=_mm256_add_pd(d111,d117);d116=_mm256_add_pd(d116,d117);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v115);
d112=_mm256_fmadd_pd(d116,tmp,d112);
d115=_mm256_fnmadd_pd(_mm256_mul_pd(d116,v112),_mm256_mul_pd(tmp, tmp),d115);

	d113=_mm256_add_pd(d113,d115);d114=_mm256_add_pd(d114,d115);
	d96=_mm256_fmadd_pd(d113,v98,d96);d98=_mm256_fmadd_pd(d113,v96,d98);
	d96=_mm256_fmadd_pd(d112,v98,d96);d98=_mm256_fmadd_pd(d112,v96,d98);
	d107=_mm256_add_pd(d107,d111);d110=_mm256_add_pd(d110,d111);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v98);
d109=_mm256_fmadd_pd(d110,tmp,d109);
d98=_mm256_fnmadd_pd(_mm256_mul_pd(d110,v109),_mm256_mul_pd(tmp, tmp),d98);

	d98=_mm256_add_pd(d98,d109);d108=_mm256_add_pd(d108,d109);
	d103=_mm256_add_pd(d103,d107);d106=_mm256_add_pd(d106,d107);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v96);
d105=_mm256_fmadd_pd(d106,tmp,d105);
d96=_mm256_fnmadd_pd(_mm256_mul_pd(d106,v105),_mm256_mul_pd(tmp, tmp),d96);

	d96=_mm256_add_pd(d96,d105);d104=_mm256_add_pd(d104,d105);
	d95=_mm256_add_pd(d95,d103);d102=_mm256_add_pd(d102,d103);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v101);
d99=_mm256_fmadd_pd(d102,tmp,d99);
d101=_mm256_fnmadd_pd(_mm256_mul_pd(d102,v99),_mm256_mul_pd(tmp, tmp),d101);

	d100=_mm256_add_pd(d100,d101);d3=_mm256_add_pd(d3,d101);
	d96=_mm256_add_pd(d96,d100);d98=_mm256_add_pd(d98,d100);
	d96=_mm256_add_pd(d96,d99);d98=_mm256_add_pd(d98,d99);
	d97=_mm256_add_pd(d97,d98);
	d95=_mm256_add_pd(d95,d97);d3=_mm256_add_pd(d3,d97);
	d75=_mm256_add_pd(d75,d96);
	d94=_mm256_add_pd(d94,d95);
	d88=_mm256_add_pd(d88,d94);d93=_mm256_add_pd(d93,d94);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v92);
d89=_mm256_fmadd_pd(d93,tmp,d89);
d92=_mm256_fnmadd_pd(_mm256_mul_pd(d93,v89),_mm256_mul_pd(tmp, tmp),d92);

	d90=_mm256_add_pd(d90,d92);d91=_mm256_add_pd(d91,d92);
	d73=_mm256_fmadd_pd(d90,v75,d73);d75=_mm256_fmadd_pd(d90,v73,d75);
	d73=_mm256_fmadd_pd(d89,v75,d73);d75=_mm256_fmadd_pd(d89,v73,d75);
	d84=_mm256_add_pd(d84,d88);d87=_mm256_add_pd(d87,d88);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v75);
d86=_mm256_fmadd_pd(d87,tmp,d86);
d75=_mm256_fnmadd_pd(_mm256_mul_pd(d87,v86),_mm256_mul_pd(tmp, tmp),d75);

	d75=_mm256_add_pd(d75,d86);d85=_mm256_add_pd(d85,d86);
	d80=_mm256_add_pd(d80,d84);d83=_mm256_add_pd(d83,d84);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v73);
d82=_mm256_fmadd_pd(d83,tmp,d82);
d73=_mm256_fnmadd_pd(_mm256_mul_pd(d83,v82),_mm256_mul_pd(tmp, tmp),d73);

	d73=_mm256_add_pd(d73,d82);d81=_mm256_add_pd(d81,d82);
	d72=_mm256_add_pd(d72,d80);d79=_mm256_add_pd(d79,d80);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v78);
d76=_mm256_fmadd_pd(d79,tmp,d76);
d78=_mm256_fnmadd_pd(_mm256_mul_pd(d79,v76),_mm256_mul_pd(tmp, tmp),d78);

	d77=_mm256_add_pd(d77,d78);d3=_mm256_add_pd(d3,d78);
	d73=_mm256_add_pd(d73,d77);d75=_mm256_add_pd(d75,d77);
	d73=_mm256_add_pd(d73,d76);d75=_mm256_add_pd(d75,d76);
	d74=_mm256_add_pd(d74,d75);
	d72=_mm256_add_pd(d72,d74);d3=_mm256_add_pd(d3,d74);
	d52=_mm256_add_pd(d52,d73);
	d71=_mm256_add_pd(d71,d72);
	d65=_mm256_add_pd(d65,d71);d70=_mm256_add_pd(d70,d71);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v69);
d66=_mm256_fmadd_pd(d70,tmp,d66);
d69=_mm256_fnmadd_pd(_mm256_mul_pd(d70,v66),_mm256_mul_pd(tmp, tmp),d69);

	d67=_mm256_add_pd(d67,d69);d68=_mm256_add_pd(d68,d69);
	d50=_mm256_fmadd_pd(d67,v52,d50);d52=_mm256_fmadd_pd(d67,v50,d52);
	d50=_mm256_fmadd_pd(d66,v52,d50);d52=_mm256_fmadd_pd(d66,v50,d52);
	d61=_mm256_add_pd(d61,d65);d64=_mm256_add_pd(d64,d65);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v52);
d63=_mm256_fmadd_pd(d64,tmp,d63);
d52=_mm256_fnmadd_pd(_mm256_mul_pd(d64,v63),_mm256_mul_pd(tmp, tmp),d52);

	d52=_mm256_add_pd(d52,d63);d62=_mm256_add_pd(d62,d63);
	d57=_mm256_add_pd(d57,d61);d60=_mm256_add_pd(d60,d61);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v50);
d59=_mm256_fmadd_pd(d60,tmp,d59);
d50=_mm256_fnmadd_pd(_mm256_mul_pd(d60,v59),_mm256_mul_pd(tmp, tmp),d50);

	d50=_mm256_add_pd(d50,d59);d58=_mm256_add_pd(d58,d59);
	d49=_mm256_add_pd(d49,d57);d56=_mm256_add_pd(d56,d57);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v55);
d53=_mm256_fmadd_pd(d56,tmp,d53);
d55=_mm256_fnmadd_pd(_mm256_mul_pd(d56,v53),_mm256_mul_pd(tmp, tmp),d55);

	d54=_mm256_add_pd(d54,d55);d3=_mm256_add_pd(d3,d55);
	d50=_mm256_add_pd(d50,d54);d52=_mm256_add_pd(d52,d54);
	d50=_mm256_add_pd(d50,d53);d52=_mm256_add_pd(d52,d53);
	d51=_mm256_add_pd(d51,d52);
	d49=_mm256_add_pd(d49,d51);d3=_mm256_add_pd(d3,d51);
	d29=_mm256_add_pd(d29,d50);
	d48=_mm256_add_pd(d48,d49);
	d42=_mm256_add_pd(d42,d48);d47=_mm256_add_pd(d47,d48);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v46);
d43=_mm256_fmadd_pd(d47,tmp,d43);
d46=_mm256_fnmadd_pd(_mm256_mul_pd(d47,v43),_mm256_mul_pd(tmp, tmp),d46);

	d44=_mm256_add_pd(d44,d46);d45=_mm256_add_pd(d45,d46);
	d27=_mm256_fmadd_pd(d44,v29,d27);d29=_mm256_fmadd_pd(d44,v27,d29);
	d27=_mm256_fmadd_pd(d43,v29,d27);d29=_mm256_fmadd_pd(d43,v27,d29);
	d38=_mm256_add_pd(d38,d42);d41=_mm256_add_pd(d41,d42);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v29);
d40=_mm256_fmadd_pd(d41,tmp,d40);
d29=_mm256_fnmadd_pd(_mm256_mul_pd(d41,v40),_mm256_mul_pd(tmp, tmp),d29);

	d29=_mm256_add_pd(d29,d40);d39=_mm256_add_pd(d39,d40);
	d34=_mm256_add_pd(d34,d38);d37=_mm256_add_pd(d37,d38);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v27);
d36=_mm256_fmadd_pd(d37,tmp,d36);
d27=_mm256_fnmadd_pd(_mm256_mul_pd(d37,v36),_mm256_mul_pd(tmp, tmp),d27);

	d27=_mm256_add_pd(d27,d36);d35=_mm256_add_pd(d35,d36);
	d26=_mm256_add_pd(d26,d34);d33=_mm256_add_pd(d33,d34);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v32);
d30=_mm256_fmadd_pd(d33,tmp,d30);
d32=_mm256_fnmadd_pd(_mm256_mul_pd(d33,v30),_mm256_mul_pd(tmp, tmp),d32);

	d31=_mm256_add_pd(d31,d32);d3=_mm256_add_pd(d3,d32);
	d27=_mm256_add_pd(d27,d31);d29=_mm256_add_pd(d29,d31);
	d27=_mm256_add_pd(d27,d30);d29=_mm256_add_pd(d29,d30);
	d28=_mm256_add_pd(d28,d29);
	d26=_mm256_add_pd(d26,d28);d3=_mm256_add_pd(d3,d28);
	d5=_mm256_add_pd(d5,d27);
	d25=_mm256_add_pd(d25,d26);
	d19=_mm256_add_pd(d19,d25);d24=_mm256_add_pd(d24,d25);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v23);
d20=_mm256_fmadd_pd(d24,tmp,d20);
d23=_mm256_fnmadd_pd(_mm256_mul_pd(d24,v20),_mm256_mul_pd(tmp, tmp),d23);

	d21=_mm256_add_pd(d21,d23);d22=_mm256_add_pd(d22,d23);
	d4=_mm256_fmadd_pd(d21,v5,d4);d5=_mm256_fmadd_pd(d21,v4,d5);
	d4=_mm256_fmadd_pd(d20,v5,d4);d5=_mm256_fmadd_pd(d20,v4,d5);
	d15=_mm256_add_pd(d15,d19);d18=_mm256_add_pd(d18,d19);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v5);
d17=_mm256_fmadd_pd(d18,tmp,d17);
d5=_mm256_fnmadd_pd(_mm256_mul_pd(d18,v17),_mm256_mul_pd(tmp, tmp),d5);

	d5=_mm256_add_pd(d5,d17);d16=_mm256_add_pd(d16,d17);
	d11=_mm256_add_pd(d11,d15);d14=_mm256_add_pd(d14,d15);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v4);
d13=_mm256_fmadd_pd(d14,tmp,d13);
d4=_mm256_fnmadd_pd(_mm256_mul_pd(d14,v13),_mm256_mul_pd(tmp, tmp),d4);

	d4=_mm256_add_pd(d4,d13);d12=_mm256_add_pd(d12,d13);
	d6=_mm256_add_pd(d6,d11);d10=_mm256_add_pd(d10,d11);
	tmp = _mm256_div_pd(_mm256_set1_pd(1.0),v9);
d7=_mm256_fmadd_pd(d10,tmp,d7);
d9=_mm256_fnmadd_pd(_mm256_mul_pd(d10,v7),_mm256_mul_pd(tmp, tmp),d9);

	d8=_mm256_add_pd(d8,d9);d3=_mm256_add_pd(d3,d9);
	d4=_mm256_add_pd(d4,d8);d5=_mm256_add_pd(d5,d8);
	d4=_mm256_add_pd(d4,d7);d5=_mm256_add_pd(d5,d7);
	d2=_mm256_add_pd(d2,d5);
	d2=_mm256_add_pd(d2,d4);
	d1=_mm256_add_pd(d1,d3);
	d0=_mm256_add_pd(d0,d2);
}
