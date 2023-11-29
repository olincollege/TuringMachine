#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[1128] <= 0.5) {
                            if (x[451] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #2
                        if (x[435] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[813] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #3
                        if (x[1336] <= 0.5) {
                            if (x[1305] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #4
                        if (x[1114] <= 0.5) {
                            if (x[45] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #5
                        if (x[308] <= 0.5) {
                            if (x[838] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #6
                        if (x[835] <= 0.5) {
                            if (x[310] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #7
                        if (x[480] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1363] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #8
                        if (x[696] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[193] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #9
                        if (x[1239] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[651] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #10
                        if (x[1059] <= 0.5) {
                            if (x[683] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #11
                        if (x[1017] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[986] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #12
                        if (x[1142] <= 0.5) {
                            if (x[727] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #13
                        if (x[696] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1218] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #14
                        if (x[680] <= 0.5) {
                            if (x[1337] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #15
                        if (x[1340] <= 0.5) {
                            if (x[1332] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #16
                        if (x[72] <= 0.5) {
                            if (x[1155] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #17
                        if (x[724] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1068] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #18
                        if (x[48] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[631] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #19
                        if (x[358] <= 0.5) {
                            if (x[1110] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #20
                        if (x[72] <= 0.5) {
                            if (x[424] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #21
                        if (x[1482] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[745] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #22
                        if (x[710] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[650] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #23
                        if (x[646] <= 0.5) {
                            if (x[1105] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #24
                        if (x[1353] <= 0.5) {
                            if (x[1129] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #25
                        if (x[805] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[435] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #26
                        if (x[1321] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[709] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #27
                        if (x[1233] <= 0.5) {
                            if (x[1061] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #28
                        if (x[49] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[371] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #29
                        if (x[307] <= 0.5) {
                            if (x[744] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #30
                        if (x[1094] <= 0.5) {
                            if (x[1334] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #31
                        if (x[1355] <= 0.5) {
                            if (x[1118] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #32
                        if (x[724] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[813] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #33
                        if (x[495] <= 0.5) {
                            if (x[809] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #34
                        if (x[959] <= 0.5) {
                            if (x[146] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #35
                        if (x[847] <= 0.5) {
                            if (x[787] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #36
                        if (x[713] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1584] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #37
                        if (x[781] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[713] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #38
                        if (x[1100] <= 0.5) {
                            if (x[29] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #39
                        if (x[532] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[712] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #40
                        if (x[1307] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[831] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #41
                        if (x[1364] <= 0.5) {
                            if (x[586] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #42
                        if (x[217] <= 0.5) {
                            if (x[823] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #43
                        if (x[942] <= 0.5) {
                            if (x[1261] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #44
                        if (x[509] <= 0.5) {
                            if (x[1143] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #45
                        if (x[1304] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[33] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #46
                        if (x[819] <= 0.5) {
                            if (x[51] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #47
                        if (x[1083] <= 0.5) {
                            if (x[696] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #48
                        if (x[270] <= 0.5) {
                            if (x[1123] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #49
                        if (x[1363] <= 0.5) {
                            if (x[24] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #50
                        if (x[1102] <= 0.5) {
                            if (x[1216] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #51
                        if (x[987] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1584] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #52
                        if (x[1154] <= 0.5) {
                            if (x[436] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #53
                        if (x[833] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1154] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #54
                        if (x[726] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[465] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #55
                        if (x[1377] <= 0.5) {
                            if (x[843] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #56
                        if (x[1001] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1113] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #57
                        if (x[814] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1512] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #58
                        if (x[205] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[698] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #59
                        if (x[828] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1114] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #60
                        if (x[1332] <= 0.5) {
                            if (x[780] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #61
                        if (x[235] <= 0.5) {
                            if (x[1124] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #62
                        if (x[834] <= 0.5) {
                            if (x[379] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #63
                        if (x[724] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1306] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #64
                        if (x[1209] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1017] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #65
                        if (x[387] <= 0.5) {
                            if (x[49] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #66
                        if (x[117] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[844] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #67
                        if (x[236] <= 0.5) {
                            if (x[293] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #68
                        if (x[665] <= 0.5) {
                            if (x[1509] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #69
                        if (x[37] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[817] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #70
                        if (x[1321] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[765] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #71
                        if (x[1247] <= 0.5) {
                            if (x[1497] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #72
                        if (x[766] <= 0.5) {
                            if (x[1492] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #73
                        if (x[1139] <= 0.5) {
                            if (x[280] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #74
                        if (x[808] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1093] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #75
                        if (x[1083] <= 0.5) {
                            if (x[666] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #76
                        if (x[842] <= 0.5) {
                            if (x[496] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #77
                        if (x[373] <= 0.5) {
                            if (x[1046] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #78
                        if (x[204] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1538] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #79
                        if (x[812] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1139] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #80
                        if (x[713] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1087] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #81
                        if (x[406] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[661] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #82
                        if (x[72] <= 0.5) {
                            if (x[1084] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #83
                        if (x[1337] <= 0.5) {
                            if (x[651] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #84
                        if (x[988] <= 0.5) {
                            if (x[661] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #85
                        if (x[1129] <= 0.5) {
                            if (x[1509] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #86
                        if (x[308] <= 0.5) {
                            if (x[1362] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #87
                        if (x[809] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1058] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #88
                        if (x[782] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1093] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #89
                        if (x[1151] <= 0.5) {
                            if (x[450] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #90
                        if (x[1218] <= 0.5) {
                            if (x[391] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #91
                        if (x[1115] <= 0.5) {
                            if (x[386] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #92
                        if (x[48] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[959] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #93
                        if (x[1141] <= 0.5) {
                            if (x[972] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #94
                        if (x[28] <= 0.5) {
                            if (x[1082] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #95
                        if (x[132] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[783] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #96
                        if (x[480] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[510] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #97
                        if (x[1033] <= 0.5) {
                            if (x[1527] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #98
                        if (x[1523] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1287] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #99
                        if (x[1597] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[467] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #100
                        if (x[482] <= 0.5) {
                            if (x[854] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #101
                        if (x[812] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1153] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #102
                        if (x[46] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1115] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #103
                        if (x[1307] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[742] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #104
                        if (x[651] <= 0.5) {
                            if (x[822] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #105
                        if (x[40] <= 0.5) {
                            if (x[511] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #106
                        if (x[1596] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[146] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #107
                        if (x[797] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1073] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #108
                        if (x[74] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #109
                        if (x[1248] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[337] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #110
                        if (x[1521] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[853] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #111
                        if (x[761] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1111] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #112
                        if (x[1107] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[841] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #113
                        if (x[1287] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[765] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #114
                        if (x[826] <= 0.5) {
                            if (x[508] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #115
                        if (x[1209] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1218] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #116
                        if (x[587] <= 0.5) {
                            if (x[1539] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #117
                        if (x[775] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[420] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #118
                        if (x[1413] <= 0.5) {
                            if (x[35] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #119
                        if (x[1539] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1124] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #120
                        if (x[1029] <= 0.5) {
                            if (x[682] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #121
                        if (x[1383] <= 0.5) {
                            if (x[517] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #122
                        if (x[782] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[986] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #123
                        if (x[1245] <= 0.5) {
                            if (x[740] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #124
                        if (x[1121] <= 0.5) {
                            if (x[1524] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #125
                        if (x[1100] <= 0.5) {
                            if (x[646] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #126
                        if (x[710] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[328] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #127
                        if (x[956] <= 0.5) {
                            if (x[1224] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #128
                        if (x[1415] <= 0.5) {
                            if (x[1509] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #129
                        if (x[1139] <= 0.5) {
                            if (x[341] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #130
                        if (x[22] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[285] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #131
                        if (x[1125] <= 0.5) {
                            if (x[1319] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #132
                        if (x[1001] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[158] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #133
                        if (x[646] <= 0.5) {
                            if (x[1082] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #134
                        if (x[235] <= 0.5) {
                            if (x[1133] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #135
                        if (x[1104] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[22] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #136
                        if (x[468] <= 0.5) {
                            if (x[1130] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #137
                        if (x[698] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1245] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #138
                        if (x[1216] <= 0.5) {
                            if (x[745] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #139
                        if (x[158] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1103] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #140
                        if (x[1029] <= 0.5) {
                            if (x[1155] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #141
                        if (x[22] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[838] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #142
                        if (x[1263] <= 0.5) {
                            if (x[1048] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #143
                        if (x[1383] <= 0.5) {
                            if (x[841] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #144
                        if (x[1512] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[72] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #145
                        if (x[270] <= 0.5) {
                            if (x[973] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #146
                        if (x[293] <= 0.5) {
                            if (x[971] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #147
                        if (x[270] <= 0.5) {
                            if (x[439] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #148
                        if (x[33] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[827] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #149
                        if (x[839] <= 0.5) {
                            if (x[32] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #150
                        if (x[1114] <= 0.5) {
                            if (x[37] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #151
                        if (x[1016] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[756] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #152
                        if (x[1512] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[811] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #153
                        if (x[1369] <= 0.5) {
                            if (x[454] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #154
                        if (x[1111] <= 0.5) {
                            if (x[59] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #155
                        if (x[48] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[789] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #156
                        if (x[850] <= 0.5) {
                            if (x[44] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #157
                        if (x[1506] <= 0.5) {
                            if (x[1033] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #158
                        if (x[775] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[725] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #159
                        if (x[233] <= 0.5) {
                            if (x[466] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #160
                        if (x[837] <= 0.5) {
                            if (x[1077] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #161
                        if (x[309] <= 0.5) {
                            if (x[61] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #162
                        if (x[822] <= 0.5) {
                            if (x[38] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #163
                        if (x[450] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1117] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #164
                        if (x[587] <= 0.5) {
                            if (x[1151] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #165
                        if (x[336] <= 0.5) {
                            if (x[697] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #166
                        if (x[1066] <= 0.5) {
                            if (x[1028] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #167
                        if (x[342] <= 0.5) {
                            if (x[710] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #168
                        if (x[450] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1398] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #169
                        if (x[838] <= 0.5) {
                            if (x[974] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #170
                        if (x[1133] <= 0.5) {
                            if (x[1354] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #171
                        if (x[457] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1088] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #172
                        if (x[631] <= 0.5) {
                            if (x[439] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #173
                        if (x[988] <= 0.5) {
                            if (x[812] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #174
                        if (x[49] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[840] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #175
                        if (x[1598] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[837] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #176
                        if (x[73] <= 0.5) {
                            if (x[438] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #177
                        if (x[292] <= 0.5) {
                            if (x[1063] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #178
                        if (x[1110] <= 0.5) {
                            if (x[794] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #179
                        if (x[1287] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[696] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #180
                        if (x[326] <= 0.5) {
                            if (x[1122] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #181
                        if (x[840] <= 0.5) {
                            if (x[808] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #182
                        if (x[973] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1081] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #183
                        if (x[508] <= 0.5) {
                            if (x[188] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #184
                        if (x[781] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[163] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #185
                        if (x[72] <= 0.5) {
                            if (x[1132] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #186
                        if (x[143] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1340] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #187
                        if (x[1355] <= 0.5) {
                            if (x[1122] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #188
                        if (x[358] <= 0.5) {
                            if (x[437] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #189
                        if (x[841] <= 0.5) {
                            if (x[646] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #190
                        if (x[1058] <= 0.5) {
                            if (x[942] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #191
                        if (x[760] <= 0.5) {
                            if (x[1133] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #192
                        if (x[709] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[466] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #193
                        if (x[1069] <= 0.5) {
                            if (x[1363] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #194
                        if (x[1060] <= 0.5) {
                            if (x[767] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #195
                        if (x[1350] <= 0.5) {
                            if (x[322] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #196
                        if (x[1303] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[494] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #197
                        if (x[1059] <= 0.5) {
                            if (x[1142] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #198
                        if (x[1478] <= 0.5) {
                            if (x[419] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #199
                        if (x[508] <= 0.5) {
                            if (x[1099] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #200
                        if (x[357] <= 0.5) {
                            if (x[1102] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #201
                        if (x[1494] <= 0.5) {
                            if (x[452] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #202
                        if (x[236] <= 0.5) {
                            if (x[682] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #203
                        if (x[800] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[451] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #204
                        if (x[61] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[652] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #205
                        if (x[233] <= 0.5) {
                            if (x[586] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #206
                        if (x[1217] <= 0.5) {
                            if (x[51] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #207
                        if (x[1400] <= 0.5) {
                            if (x[1521] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #208
                        if (x[1081] <= 0.5) {
                            if (x[695] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #209
                        if (x[1048] <= 0.5) {
                            if (x[73] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #210
                        if (x[1524] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1118] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #211
                        if (x[1209] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[820] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #212
                        if (x[437] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1369] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #213
                        if (x[972] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1132] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #214
                        if (x[841] <= 0.5) {
                            if (x[683] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #215
                        if (x[1353] <= 0.5) {
                            if (x[1110] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #216
                        if (x[419] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[295] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #217
                        if (x[1137] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1304] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #218
                        if (x[1348] <= 0.5) {
                            if (x[956] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #219
                        if (x[754] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[19] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #220
                        if (x[19] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[650] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #221
                        if (x[494] <= 0.5) {
                            if (x[203] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #222
                        if (x[988] <= 0.5) {
                            if (x[741] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #223
                        if (x[293] <= 0.5) {
                            if (x[1509] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #224
                        if (x[73] <= 0.5) {
                            if (x[1046] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #225
                        if (x[806] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[756] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #226
                        if (x[236] <= 0.5) {
                            if (x[322] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #227
                        if (x[725] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[60] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #228
                        if (x[805] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1497] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #229
                        if (x[1142] <= 0.5) {
                            if (x[496] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #230
                        if (x[481] <= 0.5) {
                            if (x[373] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #231
                        if (x[709] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1479] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #232
                        if (x[829] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1142] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #233
                        if (x[34] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1114] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #234
                        if (x[1351] <= 0.5) {
                            if (x[927] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #235
                        if (x[1091] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[847] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #236
                        if (x[203] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1029] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #237
                        if (x[1099] <= 0.5) {
                            if (x[1507] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #238
                        if (x[1130] <= 0.5) {
                            if (x[1078] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #239
                        if (x[842] <= 0.5) {
                            if (x[1336] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #240
                        if (x[1108] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1507] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #241
                        if (x[1102] <= 0.5) {
                            if (x[1048] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #242
                        if (x[407] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1493] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #243
                        if (x[144] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[650] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #244
                        if (x[1126] <= 0.5) {
                            if (x[379] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #245
                        if (x[387] <= 0.5) {
                            if (x[46] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #246
                        if (x[496] <= 0.5) {
                            if (x[1245] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #247
                        if (x[956] <= 0.5) {
                            if (x[839] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #248
                        if (x[407] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1491] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #249
                        if (x[50] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[784] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #250
                        if (x[33] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[780] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #251
                        if (x[1534] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1354] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #252
                        if (x[683] <= 0.5) {
                            if (x[712] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #253
                        if (x[1524] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[683] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #254
                        if (x[839] <= 0.5) {
                            if (x[21] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #255
                        if (x[767] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[437] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #256
                        if (x[1081] <= 0.5) {
                            if (x[437] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #257
                        if (x[356] <= 0.5) {
                            if (x[1066] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #258
                        if (x[465] <= 0.5) {
                            if (x[1405] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #259
                        if (x[233] <= 0.5) {
                            if (x[379] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #260
                        if (x[1015] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[144] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #261
                        if (x[233] <= 0.5) {
                            if (x[805] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #262
                        if (x[1384] <= 0.5) {
                            if (x[1349] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #263
                        if (x[1398] <= 0.5) {
                            if (x[972] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #264
                        if (x[357] <= 0.5) {
                            if (x[841] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #265
                        if (x[1209] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[321] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #266
                        if (x[1127] <= 0.5) {
                            if (x[294] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #267
                        if (x[781] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[843] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #268
                        if (x[826] <= 0.5) {
                            if (x[1077] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #269
                        if (x[1140] <= 0.5) {
                            if (x[364] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #270
                        if (x[725] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1110] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #271
                        if (x[817] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[823] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #272
                        if (x[1493] <= 0.5) {
                            if (x[1351] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #273
                        if (x[1524] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[811] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #274
                        if (x[820] <= 0.5) {
                            if (x[804] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #275
                        if (x[1129] <= 0.5) {
                            if (x[1429] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #276
                        if (x[712] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1598] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #277
                        if (x[681] <= 0.5) {
                            if (x[759] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #278
                        if (x[711] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[401] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #279
                        if (x[787] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[236] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #280
                        if (x[812] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[452] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #281
                        if (x[779] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[841] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #282
                        if (x[1033] <= 0.5) {
                            if (x[1087] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #283
                        if (x[1154] <= 0.5) {
                            if (x[726] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #284
                        if (x[1127] <= 0.5) {
                            if (x[46] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #285
                        if (x[1596] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[221] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #286
                        if (x[956] <= 0.5) {
                            if (x[743] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #287
                        if (x[1151] <= 0.5) {
                            if (x[144] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #288
                        if (x[192] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[834] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #289
                        if (x[711] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1339] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #290
                        if (x[509] <= 0.5) {
                            if (x[281] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #291
                        if (x[812] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[741] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #292
                        if (x[16] <= 0.5) {
                            if (x[836] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #293
                        if (x[312] <= 0.5) {
                            if (x[405] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #294
                        if (x[794] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[502] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #295
                        if (x[372] <= 0.5) {
                            if (x[974] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #296
                        if (x[1092] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[767] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #297
                        if (x[1116] <= 0.5) {
                            if (x[1152] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #298
                        if (x[38] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[454] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #299
                        if (x[726] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1096] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #300
                        if (x[956] <= 0.5) {
                            if (x[407] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #301
                        if (x[1108] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[825] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #302
                        if (x[480] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1539] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #303
                        if (x[203] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[391] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #304
                        if (x[783] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1522] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #305
                        if (x[768] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[974] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #306
                        if (x[1127] <= 0.5) {
                            if (x[908] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #307
                        if (x[801] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[512] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #308
                        if (x[710] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[326] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #309
                        if (x[1120] <= 0.5) {
                            if (x[281] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #310
                        if (x[217] <= 0.5) {
                            if (x[1115] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #311
                        if (x[337] <= 0.5) {
                            if (x[854] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #312
                        if (x[797] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[972] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #313
                        if (x[1404] <= 0.5) {
                            if (x[1155] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #314
                        if (x[1082] <= 0.5) {
                            if (x[1061] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #315
                        if (x[1522] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[839] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #316
                        if (x[831] <= 0.5) {
                            if (x[28] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #317
                        if (x[1093] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[207] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #318
                        if (x[423] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[294] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #319
                        if (x[854] <= 0.5) {
                            if (x[293] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #320
                        if (x[1508] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[811] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #321
                        if (x[16] <= 0.5) {
                            if (x[157] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #322
                        if (x[1231] <= 0.5) {
                            if (x[391] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #323
                        if (x[255] <= 0.5) {
                            if (x[825] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #324
                        if (x[791] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[130] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #325
                        if (x[512] <= 0.5) {
                            if (x[58] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #326
                        if (x[1033] <= 0.5) {
                            if (x[1527] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #327
                        if (x[1598] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1260] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #328
                        if (x[51] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1384] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #329
                        if (x[1415] <= 0.5) {
                            if (x[405] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #330
                        if (x[787] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1239] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #331
                        if (x[234] <= 0.5) {
                            if (x[1003] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #332
                        if (x[163] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[281] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #333
                        if (x[1428] <= 0.5) {
                            if (x[438] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #334
                        if (x[1134] <= 0.5) {
                            if (x[1182] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #335
                        if (x[1095] <= 0.5) {
                            if (x[144] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #336
                        if (x[698] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[774] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #337
                        if (x[510] <= 0.5) {
                            if (x[1492] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #338
                        if (x[744] <= 0.5) {
                            if (x[326] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #339
                        if (x[987] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1082] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #340
                        if (x[1108] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[454] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #341
                        if (x[854] <= 0.5) {
                            if (x[525] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #342
                        if (x[1154] <= 0.5) {
                            if (x[1336] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #343
                        if (x[784] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1061] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #344
                        if (x[665] <= 0.5) {
                            if (x[727] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #345
                        if (x[1001] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[745] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #346
                        if (x[727] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[985] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #347
                        if (x[646] <= 0.5) {
                            if (x[118] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #348
                        if (x[1111] <= 0.5) {
                            if (x[1245] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #349
                        if (x[235] <= 0.5) {
                            if (x[204] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #350
                        if (x[852] <= 0.5) {
                            if (x[809] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #351
                        if (x[406] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1155] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #352
                        if (x[217] <= 0.5) {
                            if (x[1306] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #353
                        if (x[391] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1090] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #354
                        if (x[1100] <= 0.5) {
                            if (x[1428] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #355
                        if (x[48] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1102] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #356
                        if (x[838] <= 0.5) {
                            if (x[1088] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #357
                        if (x[800] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1133] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #358
                        if (x[785] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[31] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #359
                        if (x[481] <= 0.5) {
                            if (x[487] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #360
                        if (x[510] <= 0.5) {
                            if (x[388] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #361
                        if (x[147] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[587] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #362
                        if (x[1096] <= 0.5) {
                            if (x[756] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #363
                        if (x[616] <= 0.5) {
                            if (x[1127] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #364
                        if (x[117] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[219] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #365
                        if (x[1350] <= 0.5) {
                            if (x[192] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #366
                        if (x[1522] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1014] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #367
                        if (x[408] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1155] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #368
                        if (x[794] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1508] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #369
                        if (x[148] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[793] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #370
                        if (x[371] <= 0.5) {
                            if (x[731] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #371
                        if (x[791] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[423] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #372
                        if (x[1059] <= 0.5) {
                            if (x[364] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #373
                        if (x[388] <= 0.5) {
                            if (x[1047] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #374
                        if (x[163] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1400] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #375
                        if (x[726] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[364] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #376
                        if (x[1260] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1069] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #377
                        if (x[480] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1137] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #378
                        if (x[1351] <= 0.5) {
                            if (x[761] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #379
                        if (x[1084] <= 0.5) {
                            if (x[24] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #380
                        if (x[508] <= 0.5) {
                            if (x[1218] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #381
                        if (x[148] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1398] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #382
                        if (x[814] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1075] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #383
                        if (x[235] <= 0.5) {
                            if (x[1479] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #384
                        if (x[1523] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[308] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #385
                        if (x[494] <= 0.5) {
                            if (x[1133] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #386
                        if (x[311] <= 0.5) {
                            if (x[1137] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #387
                        if (x[62] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1480] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #388
                        if (x[1492] <= 0.5) {
                            if (x[453] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #389
                        if (x[803] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[742] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #390
                        if (x[863] <= 0.5) {
                            if (x[1557] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #391
                        if (x[1595] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[840] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #392
                        if (x[587] <= 0.5) {
                            if (x[1028] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #393
                        if (x[790] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[744] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #394
                        if (x[58] <= 0.5) {
                            if (x[1084] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #395
                        if (x[805] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[739] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #396
                        if (x[800] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1116] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #397
                        if (x[1119] <= 0.5) {
                            if (x[1384] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #398
                        if (x[943] <= 0.5) {
                            if (x[1130] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #399
                        if (x[192] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[848] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #400
                        if (x[42] <= 0.5) {
                            if (x[18] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #401
                        if (x[1233] <= 0.5) {
                            if (x[49] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #402
                        if (x[668] <= 0.5) {
                            if (x[450] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #403
                        if (x[780] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[757] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #404
                        if (x[682] <= 0.5) {
                            if (x[147] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #405
                        if (x[437] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1340] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #406
                        if (x[1595] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[77] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #407
                        if (x[1109] <= 0.5) {
                            if (x[20] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #408
                        if (x[1014] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[452] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #409
                        if (x[1118] <= 0.5) {
                            if (x[74] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #410
                        if (x[1539] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[388] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #411
                        if (x[482] <= 0.5) {
                            if (x[1479] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #412
                        if (x[1096] <= 0.5) {
                            if (x[1597] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #413
                        if (x[1089] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[834] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #414
                        if (x[631] <= 0.5) {
                            if (x[1059] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #415
                        if (x[420] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[321] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #416
                        if (x[816] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1377] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #417
                        if (x[775] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1524] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #418
                        if (x[779] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[818] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #419
                        if (x[281] <= 0.5) {
                            if (x[467] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #420
                        if (x[36] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[823] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #421
                        if (x[38] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1069] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #422
                        if (x[497] <= 0.5) {
                            if (x[1121] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #423
                        if (x[467] <= 0.5) {
                            if (x[118] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #424
                        if (x[1113] <= 0.5) {
                            if (x[327] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #425
                        if (x[424] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[754] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #426
                        if (x[217] <= 0.5) {
                            if (x[219] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #427
                        if (x[783] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[820] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #428
                        if (x[309] <= 0.5) {
                            if (x[1333] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #429
                        if (x[1091] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[405] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #430
                        if (x[837] <= 0.5) {
                            if (x[1428] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #431
                        if (x[1155] <= 0.5) {
                            if (x[217] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #432
                        if (x[927] <= 0.5) {
                            if (x[1404] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #433
                        if (x[1033] <= 0.5) {
                            if (x[824] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #434
                        if (x[798] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[988] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #435
                        if (x[1319] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1112] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #436
                        if (x[851] <= 0.5) {
                            if (x[760] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #437
                        if (x[1014] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[117] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #438
                        if (x[37] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[652] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #439
                        if (x[1002] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1350] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #440
                        if (x[837] <= 0.5) {
                            if (x[1414] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #441
                        if (x[322] <= 0.5) {
                            if (x[1123] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #442
                        if (x[1122] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1232] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #443
                        if (x[1584] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[725] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #444
                        if (x[373] <= 0.5) {
                            if (x[727] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #445
                        if (x[695] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1083] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #446
                        if (x[666] <= 0.5) {
                            if (x[712] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #447
                        if (x[810] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[146] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #448
                        if (x[1348] <= 0.5) {
                            if (x[1506] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #449
                        if (x[424] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[837] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #450
                        if (x[295] <= 0.5) {
                            if (x[986] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #451
                        if (x[371] <= 0.5) {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #452
                        if (x[147] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1132] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #453
                        if (x[451] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1111] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #454
                        if (x[1209] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1017] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #455
                        if (x[811] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[64] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #456
                        if (x[1494] <= 0.5) {
                            if (x[1062] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #457
                        if (x[532] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[391] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #458
                        if (x[1594] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1060] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #459
                        if (x[358] <= 0.5) {
                            if (x[450] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #460
                        if (x[131] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1099] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #461
                        if (x[806] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[760] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #462
                        if (x[324] <= 0.5) {
                            if (x[1101] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #463
                        if (x[1385] <= 0.5) {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #464
                        if (x[26] <= 0.5) {
                            if (x[1377] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #465
                        if (x[467] <= 0.5) {
                            if (x[764] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #466
                        if (x[851] <= 0.5) {
                            if (x[1456] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #467
                        if (x[236] <= 0.5) {
                            if (x[285] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #468
                        if (x[1260] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[193] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #469
                        if (x[1151] <= 0.5) {
                            if (x[1218] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #470
                        if (x[1096] <= 0.5) {
                            if (x[766] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #471
                        if (x[1124] <= 0.5) {
                            if (x[1319] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #472
                        if (x[851] <= 0.5) {
                            if (x[1337] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #473
                        if (x[988] <= 0.5) {
                            if (x[326] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #474
                        if (x[509] <= 0.5) {
                            if (x[26] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #475
                        if (x[1047] <= 0.5) {
                            if (x[1095] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #476
                        if (x[45] <= 0.5) {
                            if (x[437] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #477
                        if (x[1234] <= 0.5) {
                            if (x[31] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #478
                        if (x[1456] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1098] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #479
                        if (x[1119] <= 0.5) {
                            if (x[1477] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #480
                        if (x[959] <= 0.5) {
                            if (x[853] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #481
                        if (x[465] <= 0.5) {
                            if (x[1260] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #482
                        if (x[45] <= 0.5) {
                            if (x[1098] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #483
                        if (x[163] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[739] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #484
                        if (x[62] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[372] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #485
                        if (x[697] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1068] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #486
                        if (x[1348] <= 0.5) {
                            if (x[1383] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #487
                        if (x[744] <= 0.5) {
                            if (x[739] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #488
                        if (x[1136] <= 0.5) {
                            if (x[1507] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #489
                        if (x[1100] <= 0.5) {
                            if (x[28] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #490
                        if (x[1088] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1073] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #491
                        if (x[293] <= 0.5) {
                            if (x[1118] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #492
                        if (x[162] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[372] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #493
                        if (x[928] <= 0.5) {
                            if (x[532] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #494
                        if (x[145] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[955] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #495
                        if (x[1100] <= 0.5) {
                            if (x[1492] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #496
                        if (x[1399] <= 0.5) {
                            if (x[1085] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #497
                        if (x[420] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1369] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #498
                        if (x[797] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[731] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #499
                        if (x[1507] <= 0.5) {
                            if (x[511] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #500
                        if (x[653] <= 0.5) {
                            if (x[837] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #501
                        if (x[494] <= 0.5) {
                            if (x[1492] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #502
                        if (x[829] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1067] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #503
                        if (x[679] <= 0.5) {
                            if (x[1028] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #504
                        if (x[205] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[32] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #505
                        if (x[959] <= 0.5) {
                            if (x[743] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #506
                        if (x[784] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[424] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #507
                        if (x[1108] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[372] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #508
                        if (x[31] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[255] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #509
                        if (x[356] <= 0.5) {
                            if (x[22] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #510
                        if (x[796] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1029] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #511
                        if (x[665] <= 0.5) {
                            if (x[986] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #512
                        if (x[832] <= 0.5) {
                            if (x[772] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #513
                        if (x[724] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1119] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #514
                        if (x[336] <= 0.5) {
                            if (x[1132] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #515
                        if (x[1101] <= 0.5) {
                            if (x[1336] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #516
                        if (x[849] <= 0.5) {
                            if (x[378] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #517
                        if (x[1135] <= 0.5) {
                            if (x[281] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #518
                        if (x[280] <= 0.5) {
                            if (x[481] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #519
                        if (x[834] <= 0.5) {
                            if (x[1218] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #520
                        if (x[482] <= 0.5) {
                            if (x[467] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #521
                        if (x[727] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[532] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #522
                        if (x[1073] <= 0.5) {
                            if (x[386] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #523
                        if (x[297] <= 0.5) {
                            if (x[822] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #524
                        if (x[1508] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[586] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #525
                        if (x[1139] <= 0.5) {
                            if (x[1033] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #526
                        if (x[1080] <= 0.5) {
                            if (x[371] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #527
                        if (x[943] <= 0.5) {
                            if (x[1094] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #528
                        if (x[987] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[307] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #529
                        if (x[765] <= 0.5) {
                            if (x[761] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #530
                        if (x[731] <= 0.5) {
                            if (x[308] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #531
                        if (x[1508] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[480] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #532
                        if (x[650] <= 0.5) {
                            if (x[1151] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #533
                        if (x[803] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1248] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #534
                        if (x[1029] <= 0.5) {
                            if (x[650] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #535
                        if (x[712] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[292] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #536
                        if (x[973] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[785] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #537
                        if (x[1539] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1097] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #538
                        if (x[852] <= 0.5) {
                            if (x[337] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #539
                        if (x[1068] <= 0.5) {
                            if (x[1521] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #540
                        if (x[1332] <= 0.5) {
                            if (x[956] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #541
                        if (x[822] <= 0.5) {
                            if (x[1231] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #542
                        if (x[37] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1141] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #543
                        if (x[955] <= 0.5) {
                            if (x[1080] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #544
                        if (x[815] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1061] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #545
                        if (x[1383] <= 0.5) {
                            if (x[409] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #546
                        if (x[1479] <= 0.5) {
                            if (x[1539] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #547
                        if (x[1319] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1362] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #548
                        if (x[1404] <= 0.5) {
                            if (x[683] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #549
                        if (x[145] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1304] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #550
                        if (x[823] <= 0.5) {
                            if (x[765] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #551
                        if (x[1509] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[805] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #552
                        if (x[450] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[43] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #553
                        if (x[236] <= 0.5) {
                            if (x[768] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #554
                        if (x[1429] <= 0.5) {
                            if (x[1508] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #555
                        if (x[437] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1096] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #556
                        if (x[1067] <= 0.5) {
                            if (x[755] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #557
                        if (x[388] <= 0.5) {
                            if (x[50] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #558
                        if (x[783] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1127] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #559
                        if (x[16] <= 0.5) {
                            if (x[1081] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #560
                        if (x[386] <= 0.5) {
                            if (x[450] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #561
                        if (x[1509] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[326] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #562
                        if (x[1113] <= 0.5) {
                            if (x[652] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #563
                        if (x[740] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[651] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #564
                        if (x[1079] <= 0.5) {
                            if (x[55] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #565
                        if (x[818] <= 0.5) {
                            if (x[810] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #566
                        if (x[297] <= 0.5) {
                            if (x[390] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #567
                        if (x[1261] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1593] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #568
                        if (x[1353] <= 0.5) {
                            if (x[1031] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #569
                        if (x[31] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[255] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #570
                        if (x[1152] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[783] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #571
                        if (x[496] <= 0.5) {
                            if (x[800] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #572
                        if (x[51] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[808] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #573
                        if (x[51] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1492] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #574
                        if (x[661] <= 0.5) {
                            if (x[727] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #575
                        if (x[50] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1095] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #576
                        if (x[307] <= 0.5) {
                            if (x[695] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #577
                        if (x[482] <= 0.5) {
                            if (x[1117] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #578
                        if (x[811] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[49] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #579
                        if (x[1104] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[822] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #580
                        if (x[1277] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1015] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #581
                        if (x[1362] <= 0.5) {
                            if (x[878] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #582
                        if (x[420] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[679] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #583
                        if (x[1245] <= 0.5) {
                            if (x[1262] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #584
                        if (x[853] <= 0.5) {
                            if (x[810] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #585
                        if (x[847] <= 0.5) {
                            if (x[207] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #586
                        if (x[849] <= 0.5) {
                            if (x[144] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #587
                        if (x[1263] <= 0.5) {
                            if (x[1506] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #588
                        if (x[1133] <= 0.5) {
                            if (x[799] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #589
                        if (x[786] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[972] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #590
                        if (x[826] <= 0.5) {
                            if (x[1321] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #591
                        if (x[280] <= 0.5) {
                            if (x[497] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #592
                        if (x[1153] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[601] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #593
                        if (x[1126] <= 0.5) {
                            if (x[206] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #594
                        if (x[21] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[297] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #595
                        if (x[76] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[958] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #596
                        if (x[802] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[746] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #597
                        if (x[391] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[761] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #598
                        if (x[72] <= 0.5) {
                            if (x[1152] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #599
                        if (x[1307] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1351] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #600
                        if (x[1091] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1126] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #601
                        if (x[1090] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1084] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #602
                        if (x[437] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1099] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #603
                        if (x[833] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[341] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #604
                        if (x[863] <= 0.5) {
                            if (x[1067] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #605
                        if (x[1415] <= 0.5) {
                            if (x[1142] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #606
                        if (x[451] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1134] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #607
                        if (x[908] <= 0.5) {
                            if (x[393] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #608
                        if (x[1141] <= 0.5) {
                            if (x[1302] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #609
                        if (x[1353] <= 0.5) {
                            if (x[130] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #610
                        if (x[372] <= 0.5) {
                            if (x[511] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #611
                        if (x[421] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1104] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #612
                        if (x[1137] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1133] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #613
                        if (x[1534] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[309] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #614
                        if (x[811] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1130] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #615
                        if (x[1142] <= 0.5) {
                            if (x[32] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #616
                        if (x[509] <= 0.5) {
                            if (x[356] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #617
                        if (x[813] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[50] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #618
                        if (x[38] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1014] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #619
                        if (x[1031] <= 0.5) {
                            if (x[616] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #620
                        if (x[1334] <= 0.5) {
                            if (x[824] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #621
                        if (x[1278] <= 0.5) {
                            if (x[386] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #622
                        if (x[796] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[221] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #623
                        if (x[816] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1139] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #624
                        if (x[1109] <= 0.5) {
                            if (x[783] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #625
                        if (x[1399] <= 0.5) {
                            if (x[712] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #626
                        if (x[1260] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1068] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #627
                        if (x[1059] <= 0.5) {
                            if (x[1084] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #628
                        if (x[774] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[221] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #629
                        if (x[1101] <= 0.5) {
                            if (x[764] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #630
                        if (x[221] <= 0.5) {
                            if (x[1400] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #631
                        if (x[63] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[502] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #632
                        if (x[893] <= 0.5) {
                            if (x[32] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #633
                        if (x[1106] <= 0.5) {
                            if (x[1339] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #634
                        if (x[1119] <= 0.5) {
                            if (x[661] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #635
                        if (x[77] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[761] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #636
                        if (x[33] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[818] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #637
                        if (x[1075] <= 0.5) {
                            if (x[761] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #638
                        if (x[680] <= 0.5) {
                            if (x[771] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #639
                        if (x[454] <= 0.5) {
                            if (x[761] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #640
                        if (x[854] <= 0.5) {
                            if (x[55] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #641
                        if (x[1095] <= 0.5) {
                            if (x[746] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #642
                        if (x[819] <= 0.5) {
                            if (x[146] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #643
                        if (x[1347] <= 0.5) {
                            if (x[502] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #644
                        if (x[465] <= 0.5) {
                            if (x[341] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #645
                        if (x[421] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1003] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #646
                        if (x[1354] <= 0.5) {
                            if (x[1117] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #647
                        if (x[131] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1104] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #648
                        if (x[1152] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1492] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #649
                        if (x[1002] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[755] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #650
                        if (x[972] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[203] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #651
                        if (x[390] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1263] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #652
                        if (x[681] <= 0.5) {
                            if (x[421] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #653
                        if (x[1104] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[147] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #654
                        if (x[1594] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[38] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #655
                        if (x[232] <= 0.5) {
                            if (x[1303] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #656
                        if (x[806] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1111] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #657
                        if (x[47] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1084] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #658
                        if (x[800] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[851] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #659
                        if (x[825] <= 0.5) {
                            if (x[1104] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #660
                        if (x[818] <= 0.5) {
                            if (x[512] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #661
                        if (x[16] <= 0.5) {
                            if (x[49] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #662
                        if (x[1509] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1097] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #663
                        if (x[64] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[825] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #664
                        if (x[409] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[206] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #665
                        if (x[698] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[956] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #666
                        if (x[795] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[823] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #667
                        if (x[118] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1154] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #668
                        if (x[1033] <= 0.5) {
                            if (x[323] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #669
                        if (x[205] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1093] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #670
                        if (x[1524] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1595] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #671
                        if (x[35] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1413] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #672
                        if (x[837] <= 0.5) {
                            if (x[779] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #673
                        if (x[1321] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1112] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #674
                        if (x[794] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[145] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #675
                        if (x[34] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[786] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #676
                        if (x[726] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[652] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #677
                        if (x[1246] <= 0.5) {
                            if (x[1456] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #678
                        if (x[1369] <= 0.5) {
                            if (x[1509] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #679
                        if (x[1522] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[863] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #680
                        if (x[1033] <= 0.5) {
                            if (x[1428] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #681
                        if (x[419] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[844] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #682
                        if (x[207] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1097] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #683
                        if (x[927] <= 0.5) {
                            if (x[853] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #684
                        if (x[1152] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1492] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #685
                        if (x[1154] <= 0.5) {
                            if (x[974] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #686
                        if (x[434] <= 0.5) {
                            if (x[694] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #687
                        if (x[958] <= 0.5) {
                            if (x[842] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #688
                        if (x[388] <= 0.5) {
                            if (x[1133] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #689
                        if (x[1247] <= 0.5) {
                            if (x[232] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #690
                        if (x[327] <= 0.5) {
                            if (x[20] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #691
                        if (x[1370] <= 0.5) {
                            if (x[1079] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #692
                        if (x[973] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[28] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #693
                        if (x[1001] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1512] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #694
                        if (x[147] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[207] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #695
                        if (x[1108] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[616] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #696
                        if (x[811] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[21] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #697
                        if (x[422] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[852] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #698
                        if (x[785] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[756] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #699
                        if (x[451] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[401] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #700
                        if (x[806] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[986] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #701
                        if (x[1364] <= 0.5) {
                            if (x[1278] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #702
                        if (x[818] <= 0.5) {
                            if (x[388] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #703
                        if (x[1047] <= 0.5) {
                            if (x[294] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #704
                        if (x[436] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1303] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #705
                        if (x[232] <= 0.5) {
                            if (x[1110] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #706
                        if (x[1102] <= 0.5) {
                            if (x[770] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #707
                        if (x[1116] <= 0.5) {
                            if (x[1477] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #708
                        if (x[1399] <= 0.5) {
                            if (x[472] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #709
                        if (x[1105] <= 0.5) {
                            if (x[1598] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #710
                        if (x[292] <= 0.5) {
                            if (x[766] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #711
                        if (x[77] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[851] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #712
                        if (x[1209] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1068] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #713
                        if (x[1114] <= 0.5) {
                            if (x[336] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #714
                        if (x[336] <= 0.5) {
                            if (x[452] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #715
                        if (x[64] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[824] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #716
                        if (x[358] <= 0.5) {
                            if (x[832] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #717
                        if (x[806] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[495] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #718
                        if (x[1114] <= 0.5) {
                            if (x[1260] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #719
                        if (x[616] <= 0.5) {
                            if (x[481] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #720
                        if (x[943] <= 0.5) {
                            if (x[233] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #721
                        if (x[652] <= 0.5) {
                            if (x[1363] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #722
                        if (x[1045] <= 0.5) {
                            if (x[1114] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #723
                        if (x[1048] <= 0.5) {
                            if (x[1398] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #724
                        if (x[270] <= 0.5) {
                            if (x[1073] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #725
                        if (x[681] <= 0.5) {
                            if (x[837] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #726
                        if (x[1399] <= 0.5) {
                            if (x[974] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #727
                        if (x[1224] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[803] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #728
                        if (x[1089] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1263] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #729
                        if (x[1318] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1018] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #730
                        if (x[942] <= 0.5) {
                            if (x[724] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #731
                        if (x[405] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[54] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #732
                        if (x[1234] <= 0.5) {
                            if (x[1125] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #733
                        if (x[1262] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[219] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #734
                        if (x[1337] <= 0.5) {
                            if (x[326] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #735
                        if (x[1098] <= 0.5) {
                            if (x[327] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #736
                        if (x[206] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #737
                        if (x[322] <= 0.5) {
                            if (x[1031] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #738
                        if (x[696] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[956] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #739
                        if (x[454] <= 0.5) {
                            if (x[1239] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #740
                        if (x[371] <= 0.5) {
                            if (x[408] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #741
                        if (x[327] <= 0.5) {
                            if (x[49] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #742
                        if (x[36] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1124] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #743
                        if (x[1355] <= 0.5) {
                            if (x[465] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #744
                        if (x[1260] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[817] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #745
                        if (x[754] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1239] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #746
                        if (x[192] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[37] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #747
                        if (x[292] <= 0.5) {
                            if (x[1079] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #748
                        if (x[379] <= 0.5) {
                            if (x[1099] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #749
                        if (x[1139] <= 0.5) {
                            if (x[667] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #750
                        if (x[853] <= 0.5) {
                            if (x[1122] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #751
                        if (x[1400] <= 0.5) {
                            if (x[724] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #752
                        if (x[511] <= 0.5) {
                            if (x[39] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #753
                        if (x[1336] <= 0.5) {
                            if (x[616] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #754
                        if (x[312] <= 0.5) {
                            if (x[32] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #755
                        if (x[755] <= 0.5) {
                            if (x[1557] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #756
                        if (x[130] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[255] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #757
                        if (x[1534] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1133] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #758
                        if (x[840] <= 0.5) {
                            if (x[572] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #759
                        if (x[697] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[768] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #760
                        if (x[1097] <= 0.5) {
                            if (x[1509] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #761
                        if (x[292] <= 0.5) {
                            if (x[1096] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #762
                        if (x[1132] <= 0.5) {
                            if (x[731] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #763
                        if (x[1234] <= 0.5) {
                            if (x[727] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #764
                        if (x[311] <= 0.5) {
                            if (x[1336] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #765
                        if (x[512] <= 0.5) {
                            if (x[832] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #766
                        if (x[817] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[988] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #767
                        if (x[1063] <= 0.5) {
                            if (x[841] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #768
                        if (x[942] <= 0.5) {
                            if (x[452] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #769
                        if (x[1350] <= 0.5) {
                            if (x[1084] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #770
                        if (x[1370] <= 0.5) {
                            if (x[838] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #771
                        if (x[1063] <= 0.5) {
                            if (x[467] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #772
                        if (x[390] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1398] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #773
                        if (x[203] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[31] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #774
                        if (x[28] <= 0.5) {
                            if (x[695] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #775
                        if (x[789] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[853] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #776
                        if (x[147] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[796] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #777
                        if (x[796] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1111] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #778
                        if (x[787] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1063] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #779
                        if (x[745] <= 0.5) {
                            if (x[821] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #780
                        if (x[1140] <= 0.5) {
                            if (x[495] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #781
                        if (x[1133] <= 0.5) {
                            if (x[1414] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #782
                        if (x[1105] <= 0.5) {
                            if (x[710] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #783
                        if (x[235] <= 0.5) {
                            if (x[586] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #784
                        if (x[1108] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1182] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #785
                        if (x[787] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[710] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #786
                        if (x[1107] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1133] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #787
                        if (x[713] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[192] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #788
                        if (x[823] <= 0.5) {
                            if (x[203] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #789
                        if (x[144] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[356] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #790
                        if (x[665] <= 0.5) {
                            if (x[727] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #791
                        if (x[64] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[665] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #792
                        if (x[1384] <= 0.5) {
                            if (x[971] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #793
                        if (x[1350] <= 0.5) {
                            if (x[1014] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #794
                        if (x[1384] <= 0.5) {
                            if (x[392] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #795
                        if (x[1135] <= 0.5) {
                            if (x[817] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #796
                        if (x[75] <= 0.5) {
                            if (x[1539] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #797
                        if (x[798] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[144] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #798
                        if (x[1134] <= 0.5) {
                            if (x[1232] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #799
                        if (x[832] <= 0.5) {
                            if (x[379] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #800
                        if (x[956] <= 0.5) {
                            if (x[19] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #801
                        if (x[131] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[296] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #802
                        if (x[788] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[854] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #803
                        if (x[1247] <= 0.5) {
                            if (x[1522] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #804
                        if (x[74] <= 0.5) {
                            if (x[419] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #805
                        if (x[1362] <= 0.5) {
                            if (x[774] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #806
                        if (x[31] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1598] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #807
                        if (x[1128] <= 0.5) {
                            if (x[1000] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #808
                        if (x[162] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1569] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #809
                        if (x[356] <= 0.5) {
                            if (x[833] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #810
                        if (x[1354] <= 0.5) {
                            if (x[423] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #811
                        if (x[1134] <= 0.5) {
                            if (x[1075] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #812
                        if (x[423] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[826] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #813
                        if (x[1032] <= 0.5) {
                            if (x[667] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #814
                        if (x[844] <= 0.5) {
                            if (x[1302] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #815
                        if (x[1101] <= 0.5) {
                            if (x[1595] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #816
                        if (x[393] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[255] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #817
                        if (x[1494] <= 0.5) {
                            if (x[826] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #818
                        if (x[928] <= 0.5) {
                            if (x[62] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #819
                        if (x[64] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[789] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #820
                        if (x[852] <= 0.5) {
                            if (x[1305] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #821
                        if (x[495] <= 0.5) {
                            if (x[587] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #822
                        if (x[944] <= 0.5) {
                            if (x[1130] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #823
                        if (x[805] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[49] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #824
                        if (x[1082] <= 0.5) {
                            if (x[405] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #825
                        if (x[1126] <= 0.5) {
                            if (x[808] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #826
                        if (x[1117] <= 0.5) {
                            if (x[927] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #827
                        if (x[928] <= 0.5) {
                            if (x[33] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #828
                        if (x[731] <= 0.5) {
                            if (x[816] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #829
                        if (x[1119] <= 0.5) {
                            if (x[117] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #830
                        if (x[1595] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[435] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #831
                        if (x[667] <= 0.5) {
                            if (x[1028] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #832
                        if (x[1364] <= 0.5) {
                            if (x[787] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #833
                        if (x[1136] <= 0.5) {
                            if (x[726] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #834
                        if (x[1233] <= 0.5) {
                            if (x[758] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #835
                        if (x[808] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1538] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #836
                        if (x[50] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1136] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #837
                        if (x[31] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[192] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #838
                        if (x[741] <= 0.5) {
                            if (x[1069] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #839
                        if (x[726] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1569] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #840
                        if (x[710] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[786] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #841
                        if (x[308] <= 0.5) {
                            if (x[1363] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #842
                        if (x[798] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1106] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #843
                        if (x[390] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1110] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #844
                        if (x[22] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1596] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #845
                        if (x[1091] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[63] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #846
                        if (x[371] <= 0.5) {
                            if (x[1142] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #847
                        if (x[1081] <= 0.5) {
                            if (x[146] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #848
                        if (x[1104] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[438] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #849
                        if (x[472] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[807] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #850
                        if (x[393] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[832] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #851
                        if (x[1122] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1596] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #852
                        if (x[36] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[203] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #853
                        if (x[1118] <= 0.5) {
                            if (x[1232] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #854
                        if (x[1478] <= 0.5) {
                            if (x[1094] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #855
                        if (x[130] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[683] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #856
                        if (x[1084] <= 0.5) {
                            if (x[50] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #857
                        if (x[802] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1538] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #858
                        if (x[586] <= 0.5) {
                            if (x[1082] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #859
                        if (x[1239] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1217] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #860
                        if (x[144] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[454] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #861
                        if (x[765] <= 0.5) {
                            if (x[1322] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #862
                        if (x[221] <= 0.5) {
                            if (x[1368] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #863
                        if (x[785] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1033] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #864
                        if (x[1246] <= 0.5) {
                            if (x[1137] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #865
                        if (x[48] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[356] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #866
                        if (x[1521] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1321] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #867
                        if (x[451] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[853] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #868
                        if (x[1377] <= 0.5) {
                            if (x[1099] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #869
                        if (x[1400] <= 0.5) {
                            if (x[1100] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #870
                        if (x[1369] <= 0.5) {
                            if (x[144] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #871
                        if (x[1081] <= 0.5) {
                            if (x[49] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #872
                        if (x[955] <= 0.5) {
                            if (x[49] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #873
                        if (x[743] <= 0.5) {
                            if (x[255] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #874
                        if (x[437] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[819] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #875
                        if (x[1113] <= 0.5) {
                            if (x[798] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #876
                        if (x[616] <= 0.5) {
                            if (x[63] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #877
                        if (x[1353] <= 0.5) {
                            if (x[973] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #878
                        if (x[697] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1232] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #879
                        if (x[1088] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1083] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #880
                        if (x[853] <= 0.5) {
                            if (x[438] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #881
                        if (x[1139] <= 0.5) {
                            if (x[342] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #882
                        if (x[1322] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1106] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #883
                        if (x[1118] <= 0.5) {
                            if (x[307] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #884
                        if (x[840] <= 0.5) {
                            if (x[203] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #885
                        if (x[821] <= 0.5) {
                            if (x[959] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #886
                        if (x[207] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[48] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #887
                        if (x[1277] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[220] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #888
                        if (x[1494] <= 0.5) {
                            if (x[757] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #889
                        if (x[667] <= 0.5) {
                            if (x[842] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #890
                        if (x[806] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[163] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #891
                        if (x[852] <= 0.5) {
                            if (x[1368] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #892
                        if (x[833] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[834] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #893
                        if (x[760] <= 0.5) {
                            if (x[1139] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #894
                        if (x[407] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[270] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #895
                        if (x[1306] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1105] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #896
                        if (x[1480] <= 0.5) {
                            if (x[1095] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #897
                        if (x[1337] <= 0.5) {
                            if (x[192] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #898
                        if (x[1104] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #899
                        if (x[1090] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[833] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #900
                        if (x[758] <= 0.5) {
                            if (x[807] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #901
                        if (x[188] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[832] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #902
                        if (x[1094] <= 0.5) {
                            if (x[781] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #903
                        if (x[1135] <= 0.5) {
                            if (x[682] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #904
                        if (x[310] <= 0.5) {
                            if (x[1061] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #905
                        if (x[835] <= 0.5) {
                            if (x[816] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #906
                        if (x[1082] <= 0.5) {
                            if (x[1398] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #907
                        if (x[1033] <= 0.5) {
                            if (x[24] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #908
                        if (x[33] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1143] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #909
                        if (x[724] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[761] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #910
                        if (x[205] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[509] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #911
                        if (x[805] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[148] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #912
                        if (x[132] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[682] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #913
                        if (x[761] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1031] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #914
                        if (x[809] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[818] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #915
                        if (x[204] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1119] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #916
                        if (x[143] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[849] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #917
                        if (x[780] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1333] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #918
                        if (x[1033] <= 0.5) {
                            if (x[652] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #919
                        if (x[908] <= 0.5) {
                            if (x[1350] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #920
                        if (x[816] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[221] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #921
                        if (x[798] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[497] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #922
                        if (x[235] <= 0.5) {
                            if (x[844] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #923
                        if (x[853] <= 0.5) {
                            if (x[1090] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #924
                        if (x[812] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[405] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #925
                        if (x[435] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1142] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #926
                        if (x[1033] <= 0.5) {
                            if (x[1130] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #927
                        if (x[424] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1231] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #928
                        if (x[393] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1384] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #929
                        if (x[807] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[818] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #930
                        if (x[758] <= 0.5) {
                            if (x[1303] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #931
                        if (x[944] <= 0.5) {
                            if (x[407] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #932
                        if (x[1094] <= 0.5) {
                            if (x[784] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #933
                        if (x[1414] <= 0.5) {
                            if (x[711] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #934
                        if (x[1059] <= 0.5) {
                            if (x[1151] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #935
                        if (x[812] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[144] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #936
                        if (x[786] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1105] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #937
                        if (x[1261] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1369] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #938
                        if (x[1339] <= 0.5) {
                            if (x[854] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #939
                        if (x[893] <= 0.5) {
                            if (x[1333] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #940
                        if (x[779] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1332] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #941
                        if (x[1003] <= 0.5) {
                            if (x[371] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #942
                        if (x[29] <= 0.5) {
                            if (x[837] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #943
                        if (x[832] <= 0.5) {
                            if (x[1414] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #944
                        if (x[424] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1428] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #945
                        if (x[786] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[146] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #946
                        if (x[812] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1106] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #947
                        if (x[255] <= 0.5) {
                            if (x[1074] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #948
                        if (x[145] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1104] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #949
                        if (x[1015] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1087] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #950
                        if (x[1492] <= 0.5) {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #951
                        if (x[944] <= 0.5) {
                            if (x[1124] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #952
                        if (x[893] <= 0.5) {
                            if (x[1100] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #953
                        if (x[1114] <= 0.5) {
                            if (x[725] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #954
                        if (x[1355] <= 0.5) {
                            if (x[1073] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #955
                        if (x[1369] <= 0.5) {
                            if (x[18] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #956
                        if (x[811] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[405] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #957
                        if (x[310] <= 0.5) {
                            if (x[710] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #958
                        if (x[407] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1246] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #959
                        if (x[1120] <= 0.5) {
                            if (x[480] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #960
                        if (x[1480] <= 0.5) {
                            if (x[1045] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #961
                        if (x[409] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1493] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #962
                        if (x[1245] <= 0.5) {
                            if (x[38] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #963
                        if (x[755] <= 0.5) {
                            if (x[297] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #964
                        if (x[847] <= 0.5) {
                            if (x[20] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #965
                        if (x[219] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1133] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #966
                        if (x[1113] <= 0.5) {
                            if (x[1596] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #967
                        if (x[1209] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[465] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #968
                        if (x[203] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[393] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #969
                        if (x[836] <= 0.5) {
                            if (x[795] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #970
                        if (x[494] <= 0.5) {
                            if (x[819] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #971
                        if (x[709] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[853] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #972
                        if (x[33] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1384] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #973
                        if (x[20] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[819] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #974
                        if (x[601] <= 0.5) {
                            if (x[843] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #975
                        if (x[943] <= 0.5) {
                            if (x[1080] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #976
                        if (x[1521] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[16] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #977
                        if (x[1569] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1075] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #978
                        if (x[1101] <= 0.5) {
                            if (x[1302] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #979
                        if (x[217] <= 0.5) {
                            if (x[822] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #980
                        if (x[986] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[467] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #981
                        if (x[1428] <= 0.5) {
                            if (x[698] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #982
                        if (x[409] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[822] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #983
                        if (x[1044] <= 0.5) {
                            if (x[1597] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #984
                        if (x[1321] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[63] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #985
                        if (x[787] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1350] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #986
                        if (x[221] <= 0.5) {
                            if (x[825] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #987
                        if (x[1260] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[958] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #988
                        if (x[1224] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[364] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #989
                        if (x[1307] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[435] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #990
                        if (x[424] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1384] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #991
                        if (x[668] <= 0.5) {
                            if (x[1509] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #992
                        if (x[1089] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[438] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #993
                        if (x[1098] <= 0.5) {
                            if (x[987] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #994
                        if (x[834] <= 0.5) {
                            if (x[1104] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #995
                        if (x[1349] <= 0.5) {
                            if (x[1000] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #996
                        if (x[988] <= 0.5) {
                            if (x[21] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #997
                        if (x[207] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[840] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #998
                        if (x[1224] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1079] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #999
                        if (x[1113] <= 0.5) {
                            if (x[19] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1000
                        if (x[512] <= 0.5) {
                            if (x[1303] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1001
                        if (x[1305] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1140] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1002
                        if (x[908] <= 0.5) {
                            if (x[61] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1003
                        if (x[144] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1014] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1004
                        if (x[1414] <= 0.5) {
                            if (x[1333] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1005
                        if (x[1127] <= 0.5) {
                            if (x[234] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1006
                        if (x[1142] <= 0.5) {
                            if (x[402] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1007
                        if (x[1029] <= 0.5) {
                            if (x[73] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1008
                        if (x[532] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[510] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1009
                        if (x[836] <= 0.5) {
                            if (x[1304] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1010
                        if (x[312] <= 0.5) {
                            if (x[741] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1011
                        if (x[1093] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1385] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1012
                        if (x[1262] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[838] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1013
                        if (x[422] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[192] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1014
                        if (x[788] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1125] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1015
                        if (x[1082] <= 0.5) {
                            if (x[727] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1016
                        if (x[342] <= 0.5) {
                            if (x[757] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1017
                        if (x[725] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1016] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1018
                        if (x[293] <= 0.5) {
                            if (x[451] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1019
                        if (x[41] <= 0.5) {
                            if (x[1572] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1020
                        if (x[1399] <= 0.5) {
                            if (x[1073] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1021
                        if (x[104] <= 0.5) {
                            if (x[1074] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1022
                        if (x[586] <= 0.5) {
                            if (x[64] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1023
                        if (x[450] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1155] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1024
                        if (x[793] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[842] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1025
                        if (x[454] <= 0.5) {
                            if (x[295] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1026
                        if (x[893] <= 0.5) {
                            if (x[1046] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1027
                        if (x[510] <= 0.5) {
                            if (x[802] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1028
                        if (x[192] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1048] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1029
                        if (x[651] <= 0.5) {
                            if (x[759] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1030
                        if (x[985] <= 0.5) {
                            if (x[509] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1031
                        if (x[408] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[825] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1032
                        if (x[401] <= 0.5) {
                            if (x[233] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1033
                        if (x[207] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[117] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1034
                        if (x[852] <= 0.5) {
                            if (x[1093] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1035
                        if (x[371] <= 0.5) {
                            if (x[755] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1036
                        if (x[532] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[438] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1037
                        if (x[850] <= 0.5) {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1038
                        if (x[665] <= 0.5) {
                            if (x[481] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1039
                        if (x[33] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[255] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1040
                        if (x[956] <= 0.5) {
                            if (x[709] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1041
                        if (x[32] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[616] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1042
                        if (x[765] <= 0.5) {
                            if (x[837] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1043
                        if (x[408] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1079] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1044
                        if (x[957] <= 0.5) {
                            if (x[1047] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1045
                        if (x[796] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1115] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1046
                        if (x[391] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[42] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1047
                        if (x[1092] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1106] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1048
                        if (x[1260] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1512] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1049
                        if (x[1105] <= 0.5) {
                            if (x[958] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1050
                        if (x[1060] <= 0.5) {
                            if (x[1233] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1051
                        if (x[422] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1353] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1052
                        if (x[1083] <= 0.5) {
                            if (x[1137] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1053
                        if (x[1137] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1098] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1054
                        if (x[1101] <= 0.5) {
                            if (x[774] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1055
                        if (x[356] <= 0.5) {
                            if (x[821] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1056
                        if (x[1142] <= 0.5) {
                            if (x[307] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1057
                        if (x[1099] <= 0.5) {
                            if (x[480] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1058
                        if (x[1122] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[59] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1059
                        if (x[908] <= 0.5) {
                            if (x[1143] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1060
                        if (x[821] <= 0.5) {
                            if (x[694] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1061
                        if (x[1368] <= 0.5) {
                            if (x[841] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1062
                        if (x[56] <= 0.5) {
                            if (x[34] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1063
                        if (x[1231] <= 0.5) {
                            if (x[1348] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1064
                        if (x[1110] <= 0.5) {
                            if (x[754] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1065
                        if (x[1100] <= 0.5) {
                            if (x[163] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1066
                        if (x[986] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1068] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1067
                        if (x[754] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1155] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1068
                        if (x[987] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[44] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1069
                        if (x[337] <= 0.5) {
                            if (x[406] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1070
                        if (x[1115] <= 0.5) {
                            if (x[35] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1071
                        if (x[739] <= 0.5) {
                            if (x[1594] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1072
                        if (x[1319] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[50] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1073
                        if (x[1104] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[986] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1074
                        if (x[631] <= 0.5) {
                            if (x[819] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1075
                        if (x[217] <= 0.5) {
                            if (x[1087] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1076
                        if (x[371] <= 0.5) {
                            if (x[826] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1077
                        if (x[58] <= 0.5) {
                            if (x[1058] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1078
                        if (x[1100] <= 0.5) {
                            if (x[1597] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1079
                        if (x[1136] <= 0.5) {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1080
                        if (x[667] <= 0.5) {
                            if (x[1239] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1081
                        if (x[511] <= 0.5) {
                            if (x[466] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1082
                        if (x[683] <= 0.5) {
                            if (x[826] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1083
                        if (x[510] <= 0.5) {
                            if (x[73] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1084
                        if (x[1479] <= 0.5) {
                            if (x[847] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1085
                        if (x[424] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[480] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1086
                        if (x[1155] <= 0.5) {
                            if (x[1234] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1087
                        if (x[987] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[850] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1088
                        if (x[496] <= 0.5) {
                            if (x[646] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1089
                        if (x[1099] <= 0.5) {
                            if (x[41] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1090
                        if (x[683] <= 0.5) {
                            if (x[451] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1091
                        if (x[1142] <= 0.5) {
                            if (x[1594] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1092
                        if (x[511] <= 0.5) {
                            if (x[1182] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1093
                        if (x[1121] <= 0.5) {
                            if (x[235] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1094
                        if (x[1118] <= 0.5) {
                            if (x[270] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1095
                        if (x[132] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1319] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1096
                        if (x[1339] <= 0.5) {
                            if (x[77] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1097
                        if (x[342] <= 0.5) {
                            if (x[64] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1098
                        if (x[322] <= 0.5) {
                            if (x[843] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1099
                        if (x[726] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1355] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1100
                        if (x[799] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[849] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1101
                        if (x[1415] <= 0.5) {
                            if (x[1404] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1102
                        if (x[371] <= 0.5) {
                            if (x[745] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1103
                        if (x[1363] <= 0.5) {
                            if (x[1414] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1104
                        if (x[1113] <= 0.5) {
                            if (x[1302] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1105
                        if (x[372] <= 0.5) {
                            if (x[1154] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1106
                        if (x[1138] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[775] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1107
                        if (x[1083] <= 0.5) {
                            if (x[1032] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1108
                        if (x[1218] <= 0.5) {
                            if (x[451] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1109
                        if (x[972] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1234] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1110
                        if (x[972] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[776] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1111
                        if (x[840] <= 0.5) {
                            if (x[421] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1112
                        if (x[731] <= 0.5) {
                            if (x[312] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1113
                        if (x[1106] <= 0.5) {
                            if (x[35] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1114
                        if (x[235] <= 0.5) {
                            if (x[1105] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1115
                        if (x[661] <= 0.5) {
                            if (x[1128] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1116
                        if (x[824] <= 0.5) {
                            if (x[770] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1117
                        if (x[713] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[803] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1118
                        if (x[77] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[784] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1119
                        if (x[807] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1133] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1120
                        if (x[145] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1584] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1121
                        if (x[973] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[825] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1122
                        if (x[1043] <= 0.5) {
                            if (x[1017] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1123
                        if (x[1114] <= 0.5) {
                            if (x[131] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1124
                        if (x[1127] <= 0.5) {
                            if (x[310] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1125
                        if (x[1075] <= 0.5) {
                            if (x[188] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1126
                        if (x[650] <= 0.5) {
                            if (x[1029] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1127
                        if (x[1595] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[496] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1128
                        if (x[341] <= 0.5) {
                            if (x[1098] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1129
                        if (x[1332] <= 0.5) {
                            if (x[294] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1130
                        if (x[296] <= 0.5) {
                            if (x[1337] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1131
                        if (x[130] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[784] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1132
                        if (x[1321] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[711] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1133
                        if (x[205] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[727] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1134
                        if (x[327] <= 0.5) {
                            if (x[820] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1135
                        if (x[814] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1120] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1136
                        if (x[1522] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[802] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1137
                        if (x[758] <= 0.5) {
                            if (x[754] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1138
                        if (x[1154] <= 0.5) {
                            if (x[587] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1139
                        if (x[710] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[30] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1140
                        if (x[55] <= 0.5) {
                            if (x[63] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1141
                        if (x[63] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1084] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1142
                        if (x[496] <= 0.5) {
                            if (x[813] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1143
                        if (x[1231] <= 0.5) {
                            if (x[20] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1144
                        if (x[854] <= 0.5) {
                            if (x[970] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1145
                        if (x[1127] <= 0.5) {
                            if (x[695] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1146
                        if (x[815] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1136] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1147
                        if (x[387] <= 0.5) {
                            if (x[832] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1148
                        if (x[780] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1209] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1149
                        if (x[388] <= 0.5) {
                            if (x[1141] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1150
                        if (x[1597] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[419] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1151
                        if (x[1303] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1521] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1152
                        if (x[386] <= 0.5) {
                            if (x[850] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1153
                        if (x[1260] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[386] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1154
                        if (x[1348] <= 0.5) {
                            if (x[823] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1155
                        if (x[420] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1354] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1156
                        if (x[61] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[255] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1157
                        if (x[943] <= 0.5) {
                            if (x[1363] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1158
                        if (x[1129] <= 0.5) {
                            if (x[1370] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1159
                        if (x[1337] <= 0.5) {
                            if (x[1113] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1160
                        if (x[1017] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[393] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1161
                        if (x[509] <= 0.5) {
                            if (x[631] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1162
                        if (x[711] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[679] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1163
                        if (x[665] <= 0.5) {
                            if (x[987] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1164
                        if (x[401] <= 0.5) {
                            if (x[1095] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1165
                        if (x[30] <= 0.5) {
                            if (x[481] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1166
                        if (x[1246] <= 0.5) {
                            if (x[854] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1167
                        if (x[695] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[852] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1168
                        if (x[328] <= 0.5) {
                            if (x[496] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1169
                        if (x[1118] <= 0.5) {
                            if (x[326] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1170
                        if (x[653] <= 0.5) {
                            if (x[1117] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1171
                        if (x[49] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1414] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1172
                        if (x[1133] <= 0.5) {
                            if (x[64] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1173
                        if (x[1233] <= 0.5) {
                            if (x[1095] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1174
                        if (x[496] <= 0.5) {
                            if (x[1066] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1175
                        if (x[72] <= 0.5) {
                            if (x[988] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1176
                        if (x[22] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[802] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1177
                        if (x[371] <= 0.5) {
                            if (x[837] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1178
                        if (x[661] <= 0.5) {
                            if (x[22] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1179
                        if (x[666] <= 0.5) {
                            if (x[487] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1180
                        if (x[31] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[356] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1181
                        if (x[422] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1081] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1182
                        if (x[1092] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1216] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1183
                        if (x[117] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1263] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1184
                        if (x[1339] <= 0.5) {
                            if (x[1346] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1185
                        if (x[834] <= 0.5) {
                            if (x[1539] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1186
                        if (x[908] <= 0.5) {
                            if (x[1108] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1187
                        if (x[808] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1047] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1188
                        if (x[50] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[814] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1189
                        if (x[959] <= 0.5) {
                            if (x[1105] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1190
                        if (x[1100] <= 0.5) {
                            if (x[217] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1191
                        if (x[863] <= 0.5) {
                            if (x[851] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1192
                        if (x[1347] <= 0.5) {
                            if (x[1353] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1193
                        if (x[853] <= 0.5) {
                            if (x[661] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1194
                        if (x[1090] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1521] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1195
                        if (x[761] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[143] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1196
                        if (x[390] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[852] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1197
                        if (x[419] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1109] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1198
                        if (x[22] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[807] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1199
                        if (x[839] <= 0.5) {
                            if (x[785] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1200
                        if (x[465] <= 0.5) {
                            if (x[761] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1201
                        if (x[482] <= 0.5) {
                            if (x[1087] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1202
                        if (x[132] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[650] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1203
                        if (x[743] <= 0.5) {
                            if (x[206] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1204
                        if (x[401] <= 0.5) {
                            if (x[494] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1205
                        if (x[1493] <= 0.5) {
                            if (x[439] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1206
                        if (x[391] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[863] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1207
                        if (x[255] <= 0.5) {
                            if (x[1153] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1208
                        if (x[970] <= 0.5) {
                            if (x[1363] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1209
                        if (x[322] <= 0.5) {
                            if (x[1351] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1210
                        if (x[162] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1480] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1211
                        if (x[1063] <= 0.5) {
                            if (x[1100] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1212
                        if (x[779] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[712] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1213
                        if (x[496] <= 0.5) {
                            if (x[1098] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1214
                        if (x[436] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[532] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1215
                        if (x[357] <= 0.5) {
                            if (x[772] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1216
                        if (x[1538] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[371] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1217
                        if (x[793] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[472] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1218
                        if (x[1277] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[434] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1219
                        if (x[766] <= 0.5) {
                            if (x[203] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1220
                        if (x[834] <= 0.5) {
                            if (x[61] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1221
                        if (x[1598] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1509] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1222
                        if (x[1018] <= 0.5) {
                            if (x[827] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1223
                        if (x[90] <= 0.5) {
                            if (x[698] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1224
                        if (x[508] <= 0.5) {
                            if (x[769] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1225
                        if (x[824] <= 0.5) {
                            if (x[419] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1226
                        if (x[132] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1091] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1227
                        if (x[1000] <= 0.5) {
                            if (x[232] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1228
                        if (x[188] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1229
                        if (x[388] <= 0.5) {
                            if (x[62] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1230
                        if (x[803] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[973] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1231
                        if (x[1110] <= 0.5) {
                            if (x[1014] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1232
                        if (x[833] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[803] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1233
                        if (x[842] <= 0.5) {
                            if (x[696] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1234
                        if (x[849] <= 0.5) {
                            if (x[682] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1235
                        if (x[1248] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[836] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1236
                        if (x[726] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[776] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1237
                        if (x[1132] <= 0.5) {
                            if (x[421] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1238
                        if (x[758] <= 0.5) {
                            if (x[1089] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1239
                        if (x[974] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1492] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1240
                        if (x[1151] <= 0.5) {
                            if (x[1030] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1241
                        if (x[19] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[322] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1242
                        if (x[48] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[827] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1243
                        if (x[1083] <= 0.5) {
                            if (x[773] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1244
                        if (x[34] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[341] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1245
                        if (x[785] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1110] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1246
                        if (x[818] <= 0.5) {
                            if (x[863] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1247
                        if (x[203] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[850] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1248
                        if (x[664] <= 0.5) {
                            if (x[19] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1249
                        if (x[321] <= 0.5) {
                            if (x[235] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1250
                        if (x[31] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1126] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1251
                        if (x[587] <= 0.5) {
                            if (x[511] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1252
                        if (x[24] <= 0.5) {
                            if (x[436] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1253
                        if (x[893] <= 0.5) {
                            if (x[63] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1254
                        if (x[814] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[482] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1255
                        if (x[1334] <= 0.5) {
                            if (x[650] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1256
                        if (x[798] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1592] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1257
                        if (x[1117] <= 0.5) {
                            if (x[848] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1258
                        if (x[652] <= 0.5) {
                            if (x[1248] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1259
                        if (x[1233] <= 0.5) {
                            if (x[1093] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1260
                        if (x[1318] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1080] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1261
                        if (x[1182] <= 0.5) {
                            if (x[32] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1262
                        if (x[833] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[829] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1263
                        if (x[834] <= 0.5) {
                            if (x[1479] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1264
                        if (x[759] <= 0.5) {
                            if (x[321] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1265
                        if (x[293] <= 0.5) {
                            if (x[1125] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1266
                        if (x[1097] <= 0.5) {
                            if (x[781] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1267
                        if (x[1045] <= 0.5) {
                            if (x[1069] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1268
                        if (x[661] <= 0.5) {
                            if (x[852] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1269
                        if (x[1521] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1569] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1270
                        if (x[309] <= 0.5) {
                            if (x[1117] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1271
                        if (x[1234] <= 0.5) {
                            if (x[1140] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1272
                        if (x[402] <= 0.5) {
                            if (x[163] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1273
                        if (x[1048] <= 0.5) {
                            if (x[1115] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1274
                        if (x[1398] <= 0.5) {
                            if (x[1125] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1275
                        if (x[47] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[465] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1276
                        if (x[132] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1383] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1277
                        if (x[221] <= 0.5) {
                            if (x[1104] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1278
                        if (x[1349] <= 0.5) {
                            if (x[1355] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1279
                        if (x[1094] <= 0.5) {
                            if (x[940] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1280
                        if (x[842] <= 0.5) {
                            if (x[1107] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1281
                        if (x[1121] <= 0.5) {
                            if (x[787] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1282
                        if (x[1134] <= 0.5) {
                            if (x[1479] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1283
                        if (x[1538] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[616] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1284
                        if (x[1141] <= 0.5) {
                            if (x[26] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1285
                        if (x[754] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1509] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1286
                        if (x[1082] <= 0.5) {
                            if (x[1001] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1287
                        if (x[77] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[831] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1288
                        if (x[1233] <= 0.5) {
                            if (x[38] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1289
                        if (x[207] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1063] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1290
                        if (x[494] <= 0.5) {
                            if (x[1003] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1291
                        if (x[805] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1118] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1292
                        if (x[1113] <= 0.5) {
                            if (x[1377] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1293
                        if (x[1097] <= 0.5) {
                            if (x[480] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1294
                        if (x[1350] <= 0.5) {
                            if (x[1231] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1295
                        if (x[746] <= 0.5) {
                            if (x[282] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1296
                        if (x[50] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1090] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1297
                        if (x[1126] <= 0.5) {
                            if (x[1493] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1298
                        if (x[1106] <= 0.5) {
                            if (x[207] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1299
                        if (x[480] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[419] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1300
                        if (x[205] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[495] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1301
                        if (x[1384] <= 0.5) {
                            if (x[234] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1302
                        if (x[1080] <= 0.5) {
                            if (x[217] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1303
                        if (x[664] <= 0.5) {
                            if (x[1143] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1304
                        if (x[1362] <= 0.5) {
                            if (x[682] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1305
                        if (x[646] <= 0.5) {
                            if (x[390] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1306
                        if (x[808] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[133] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1307
                        if (x[1084] <= 0.5) {
                            if (x[1523] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1308
                        if (x[1350] <= 0.5) {
                            if (x[74] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1309
                        if (x[1355] <= 0.5) {
                            if (x[755] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1310
                        if (x[1048] <= 0.5) {
                            if (x[834] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1311
                        if (x[787] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1115] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1312
                        if (x[739] <= 0.5) {
                            if (x[1333] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1313
                        if (x[74] <= 0.5) {
                            if (x[1068] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1314
                        if (x[217] <= 0.5) {
                            if (x[280] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1315
                        if (x[863] <= 0.5) {
                            if (x[838] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1316
                        if (x[1090] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1142] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1317
                        if (x[646] <= 0.5) {
                            if (x[1087] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1318
                        if (x[1001] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1095] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1319
                        if (x[1102] <= 0.5) {
                            if (x[285] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1320
                        if (x[1239] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[767] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1321
                        if (x[502] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[234] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1322
                        if (x[1143] <= 0.5) {
                            if (x[1405] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1323
                        if (x[743] <= 0.5) {
                            if (x[1105] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1324
                        if (x[834] <= 0.5) {
                            if (x[668] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1325
                        if (x[1521] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1097] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1326
                        if (x[616] <= 0.5) {
                            if (x[487] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1327
                        if (x[1082] <= 0.5) {
                            if (x[697] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1328
                        if (x[1509] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[823] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1329
                        if (x[1094] <= 0.5) {
                            if (x[34] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1330
                        if (x[450] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1066] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1331
                        if (x[1115] <= 0.5) {
                            if (x[1593] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1332
                        if (x[233] <= 0.5) {
                            if (x[818] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1333
                        if (x[76] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[293] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1334
                        if (x[1133] <= 0.5) {
                            if (x[727] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1335
                        if (x[821] <= 0.5) {
                            if (x[1523] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1336
                        if (x[1121] <= 0.5) {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1337
                        if (x[816] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1069] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1338
                        if (x[61] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1140] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1339
                        if (x[1383] <= 0.5) {
                            if (x[711] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1340
                        if (x[820] <= 0.5) {
                            if (x[761] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1341
                        if (x[818] <= 0.5) {
                            if (x[1362] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1342
                        if (x[793] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1108] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1343
                        if (x[755] <= 0.5) {
                            if (x[1355] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1344
                        if (x[767] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1029] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1345
                        if (x[311] <= 0.5) {
                            if (x[1094] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1346
                        if (x[407] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[466] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1347
                        if (x[497] <= 0.5) {
                            if (x[818] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1348
                        if (x[206] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[420] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1349
                        if (x[844] <= 0.5) {
                            if (x[724] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1350
                        if (x[1091] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[50] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1351
                        if (x[296] <= 0.5) {
                            if (x[510] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1352
                        if (x[822] <= 0.5) {
                            if (x[811] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1353
                        if (x[1014] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1128] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1354
                        if (x[1351] <= 0.5) {
                            if (x[204] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1355
                        if (x[1142] <= 0.5) {
                            if (x[784] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1356
                        if (x[1018] <= 0.5) {
                            if (x[1306] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1357
                        if (x[1368] <= 0.5) {
                            if (x[481] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1358
                        if (x[22] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1321] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1359
                        if (x[162] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[774] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1360
                        if (x[1059] <= 0.5) {
                            if (x[1095] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1361
                        if (x[679] <= 0.5) {
                            if (x[22] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1362
                        if (x[1077] <= 0.5) {
                            if (x[1494] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1363
                        if (x[836] <= 0.5) {
                            if (x[401] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1364
                        if (x[1480] <= 0.5) {
                            if (x[62] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1365
                        if (x[742] <= 0.5) {
                            if (x[840] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1366
                        if (x[1404] <= 0.5) {
                            if (x[1369] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1367
                        if (x[810] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1337] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1368
                        if (x[725] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[16] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1369
                        if (x[133] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1001] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1370
                        if (x[1047] <= 0.5) {
                            if (x[1307] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1371
                        if (x[780] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[236] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1372
                        if (x[863] <= 0.5) {
                            if (x[1126] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1373
                        if (x[1350] <= 0.5) {
                            if (x[1384] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1374
                        if (x[46] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1353] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1375
                        if (x[132] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[651] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1376
                        if (x[958] <= 0.5) {
                            if (x[467] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1377
                        if (x[1133] <= 0.5) {
                            if (x[1000] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1378
                        if (x[1032] <= 0.5) {
                            if (x[776] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1379
                        if (x[776] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1060] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1380
                        if (x[1119] <= 0.5) {
                            if (x[1137] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1381
                        if (x[22] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1506] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1382
                        if (x[1080] <= 0.5) {
                            if (x[1108] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1383
                        if (x[423] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[809] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1384
                        if (x[1539] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[323] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1385
                        if (x[834] <= 0.5) {
                            if (x[36] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1386
                        if (x[1400] <= 0.5) {
                            if (x[117] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1387
                        if (x[1044] <= 0.5) {
                            if (x[532] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1388
                        if (x[508] <= 0.5) {
                            if (x[293] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1389
                        if (x[1028] <= 0.5) {
                            if (x[207] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1390
                        if (x[1277] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1089] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1391
                        if (x[1048] <= 0.5) {
                            if (x[1597] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1392
                        if (x[1355] <= 0.5) {
                            if (x[232] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1393
                        if (x[727] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1014] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1394
                        if (x[1116] <= 0.5) {
                            if (x[784] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1395
                        if (x[697] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[816] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1396
                        if (x[788] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[847] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1397
                        if (x[1155] <= 0.5) {
                            if (x[1073] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1398
                        if (x[650] <= 0.5) {
                            if (x[1539] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1399
                        if (x[22] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[851] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1400
                        if (x[357] <= 0.5) {
                            if (x[1111] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1401
                        if (x[1058] <= 0.5) {
                            if (x[1114] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1402
                        if (x[1349] <= 0.5) {
                            if (x[779] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1403
                        if (x[1075] <= 0.5) {
                            if (x[1151] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1404
                        if (x[1304] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[158] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1405
                        if (x[1597] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1109] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1406
                        if (x[942] <= 0.5) {
                            if (x[731] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1407
                        if (x[56] <= 0.5) {
                            if (x[1405] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1408
                        if (x[321] <= 0.5) {
                            if (x[33] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1409
                        if (x[1125] <= 0.5) {
                            if (x[1000] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1410
                        if (x[1534] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1245] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1411
                        if (x[1089] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[724] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1412
                        if (x[781] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[439] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1413
                        if (x[820] <= 0.5) {
                            if (x[270] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1414
                        if (x[234] <= 0.5) {
                            if (x[1414] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1415
                        if (x[438] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1246] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1416
                        if (x[1073] <= 0.5) {
                            if (x[799] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1417
                        if (x[1322] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1100] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1418
                        if (x[420] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[401] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1419
                        if (x[1594] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[439] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1420
                        if (x[205] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[743] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1421
                        if (x[1032] <= 0.5) {
                            if (x[802] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1422
                        if (x[788] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1032] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #1423
                        if (x[1138] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[957] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1424
                        if (x[1143] <= 0.5) {
                            if (x[437] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1425
                        if (x[780] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[34] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1426
                        if (x[1362] <= 0.5) {
                            if (x[664] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1427
                        if (x[1016] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[696] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1428
                        if (x[57] <= 0.5) {
                            if (x[731] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1429
                        if (x[765] <= 0.5) {
                            if (x[207] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1430
                        if (x[756] <= 0.5) {
                            if (x[985] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1431
                        if (x[757] <= 0.5) {
                            if (x[1245] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1432
                        if (x[1045] <= 0.5) {
                            if (x[893] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1433
                        if (x[1398] <= 0.5) {
                            if (x[451] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1434
                        if (x[1305] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1261] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1435
                        if (x[1400] <= 0.5) {
                            if (x[1120] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1436
                        if (x[1151] <= 0.5) {
                            if (x[743] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1437
                        if (x[322] <= 0.5) {
                            if (x[1333] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1438
                        if (x[43] <= 0.5) {
                            if (x[32] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1439
                        if (x[1399] <= 0.5) {
                            if (x[391] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1440
                        if (x[64] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1305] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1441
                        if (x[1584] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[132] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1442
                        if (x[696] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[829] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1443
                        if (x[941] <= 0.5) {
                            if (x[77] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1444
                        if (x[1400] <= 0.5) {
                            if (x[1497] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1445
                        if (x[681] <= 0.5) {
                            if (x[1119] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1446
                        if (x[1278] <= 0.5) {
                            if (x[326] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1447
                        if (x[727] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[825] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1448
                        if (x[158] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1112] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1449
                        if (x[47] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1133] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1450
                        if (x[73] <= 0.5) {
                            if (x[725] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1451
                        if (x[480] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[34] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1452
                        if (x[1102] <= 0.5) {
                            if (x[1492] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1453
                        if (x[31] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[293] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1454
                        if (x[724] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1079] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1455
                        if (x[132] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[803] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1456
                        if (x[1134] <= 0.5) {
                            if (x[294] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1457
                        if (x[1002] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[22] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1458
                        if (x[1479] <= 0.5) {
                            if (x[698] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1459
                        if (x[1305] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[725] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1460
                        if (x[48] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[836] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1461
                        if (x[294] <= 0.5) {
                            if (x[1095] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1462
                        if (x[713] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[813] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1463
                        if (x[147] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1400] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1464
                        if (x[799] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1122] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1465
                        if (x[409] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[847] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1466
                        if (x[62] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[788] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1467
                        if (x[419] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[815] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1468
                        if (x[743] <= 0.5) {
                            if (x[1230] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1469
                        if (x[386] <= 0.5) {
                            if (x[393] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1470
                        if (x[342] <= 0.5) {
                            if (x[839] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1471
                        if (x[1060] <= 0.5) {
                            if (x[1216] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1472
                        if (x[401] <= 0.5) {
                            if (x[697] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1473
                        if (x[1218] <= 0.5) {
                            if (x[1083] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1474
                        if (x[466] <= 0.5) {
                            if (x[800] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1475
                        if (x[805] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[848] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1476
                        if (x[442] <= 0.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[328] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1477
                        if (x[1477] <= 0.5) {
                            if (x[1081] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1478
                        if (x[408] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1339] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1479
                        if (x[307] <= 0.5) {
                            if (x[1092] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1480
                        if (x[849] <= 0.5) {
                            if (x[1370] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1481
                        if (x[878] <= 0.5) {
                            if (x[1248] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1482
                        if (x[1093] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1098] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1483
                        if (x[22] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[878] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1484
                        if (x[652] <= 0.5) {
                            if (x[1138] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1485
                        if (x[807] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1134] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1486
                        if (x[357] <= 0.5) {
                            if (x[1079] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1487
                        if (x[973] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[472] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1488
                        if (x[1523] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[42] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #1489
                        if (x[803] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1139] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1490
                        if (x[39] <= 0.5) {
                            if (x[1108] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1491
                        if (x[786] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1133] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1492
                        if (x[1111] <= 0.5) {
                            if (x[800] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1493
                        if (x[1218] <= 0.5) {
                            if (x[831] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1494
                        if (x[342] <= 0.5) {
                            if (x[465] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #1495
                        if (x[767] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[695] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1496
                        if (x[204] <= 0.5) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[1277] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #1497
                        if (x[851] <= 0.5) {
                            if (x[1507] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1498
                        if (x[1111] <= 0.5) {
                            if (x[1245] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #1499
                        if (x[1073] <= 0.5) {
                            if (x[787] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #1500
                        if (x[1137] <= 0.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1014] <= 0.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "0";
                            case 1:
                            return "1";
                            case 2:
                            return "_";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }