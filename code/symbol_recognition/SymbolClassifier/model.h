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
                        uint8_t votes[7] = { 0 };
                        // tree #1
                        if (x[315] <= 2576.0) {
                            if (x[404] <= 4332.5) {
                                if (x[677] <= 2065.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[262] <= 4276.0) {
                                        if (x[239] <= 4572.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[577] <= 1768.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[386] <= 2579.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[668] <= 1449.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[477] <= 4948.0) {
                                            if (x[60] <= 3948.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[603] <= 4567.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[698] <= 4660.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[678] <= 5846.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    if (x[762] <= 4805.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[99] <= 3051.5) {
                            if (x[336] <= 4563.5) {
                                if (x[447] <= 1599.5) {
                                    if (x[405] <= 4070.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[154] <= 4114.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            if (x[348] <= 1994.5) {
                                if (x[14] <= 4012.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[320] <= 2772.0) {
                                    if (x[87] <= 4701.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[282] <= 2909.0) {
                                        if (x[716] <= 3731.0) {
                                            if (x[50] <= 3174.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[731] <= 1334.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[674] <= 4904.0) {
                                                if (x[558] <= 4385.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[295] <= 6125.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[538] <= 5403.5) {
                                                        if (x[444] <= 5045.5) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[4] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[381] <= 1807.5) {
                            if (x[20] <= 3440.0) {
                                if (x[361] <= 4446.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            if (x[354] <= 2625.0) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[247] <= 3604.0) {
                                    if (x[143] <= 4411.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[83] <= 3833.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[547] <= 2315.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[336] <= 6044.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[631] <= 5902.5) {
                                                    if (x[765] <= 3739.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        if (x[606] <= 4371.5) {
                                                            votes[4] += 1;
                                                        }

                                                        else {
                                                            if (x[283] <= 6371.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[150] <= 3469.5) {
                            if (x[652] <= 3951.5) {
                                if (x[58] <= 3624.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[117] <= 3977.5) {
                                if (x[12] <= 3970.5) {
                                    if (x[283] <= 3292.5) {
                                        if (x[361] <= 3668.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[126] <= 2371.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[512] <= 2260.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[511] <= 4503.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[222] <= 6037.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[743] <= 5932.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    if (x[449] <= 6058.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[410] <= 6097.0) {
                                                            votes[4] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[354] <= 2625.0) {
                            if (x[383] <= 1754.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[333] <= 4415.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[525] <= 2925.5) {
                                    if (x[434] <= 3797.0) {
                                        if (x[326] <= 4306.0) {
                                            if (x[656] <= 3908.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[43] <= 4265.5) {
                                        if (x[382] <= 1803.5) {
                                            if (x[471] <= 2375.5) {
                                                if (x[216] <= 5136.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[750] <= 4956.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[563] <= 5995.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[665] <= 5282.5) {
                                                    if (x[669] <= 4693.0) {
                                                        if (x[663] <= 5276.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[386] <= 2473.0) {
                            if (x[229] <= 4049.0) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[203] <= 4600.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[177] <= 4379.0) {
                                if (x[308] <= 3705.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[212] <= 4067.0) {
                                        if (x[456] <= 2808.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[125] <= 2585.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[28] <= 5039.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[282] <= 5985.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[616] <= 5431.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[674] <= 4616.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[521] <= 4990.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[55] <= 3418.5) {
                            if (x[705] <= 1275.0) {
                                if (x[180] <= 3879.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[58] <= 2515.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[686] <= 3804.5) {
                                if (x[484] <= 2745.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[602] <= 1621.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[573] <= 1323.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[365] <= 4509.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[482] <= 6374.0) {
                                            if (x[39] <= 3793.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[504] <= 5937.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[477] <= 4972.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[217] <= 6125.5) {
                            if (x[62] <= 2937.0) {
                                if (x[61] <= 2568.0) {
                                    if (x[147] <= 3901.5) {
                                        if (x[222] <= 2197.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[268] <= 4650.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[353] <= 2643.0) {
                                    if (x[230] <= 4297.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[398] <= 4730.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[316] <= 3673.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[648] <= 6184.0) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[725] <= 4866.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[534] <= 6134.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[297] <= 5978.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[213] <= 3374.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[90] <= 2740.5) {
                                if (x[662] <= 1692.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[52] <= 3952.5) {
                                    if (x[78] <= 4182.5) {
                                        if (x[28] <= 4299.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[416] <= 2526.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[178] <= 4437.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[325] <= 6365.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[600] <= 5465.0) {
                                                    if (x[373] <= 6328.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[217] <= 6125.5) {
                            if (x[419] <= 2494.5) {
                                if (x[23] <= 3335.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[244] <= 3321.5) {
                                    if (x[431] <= 4026.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[28] <= 5039.0) {
                                        if (x[436] <= 4262.5) {
                                            if (x[154] <= 3264.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[709] <= 5630.5) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[604] <= 4793.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #11
                        if (x[672] <= 1336.0) {
                            if (x[570] <= 1700.0) {
                                votes[5] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[11] <= 4132.5) {
                                if (x[282] <= 3630.5) {
                                    if (x[757] <= 2270.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[66] <= 2425.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[29] <= 2734.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[440] <= 6201.0) {
                                        if (x[187] <= 2764.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[577] <= 5983.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[678] <= 5846.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[764] <= 4555.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #12
                        if (x[736] <= 1245.0) {
                            if (x[387] <= 2598.5) {
                                if (x[762] <= 1281.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[185] <= 4415.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            if (x[579] <= 2457.0) {
                                if (x[214] <= 4093.0) {
                                    if (x[28] <= 4928.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[526] <= 4498.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[366] <= 5949.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[579] <= 6047.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[29] <= 6146.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #13
                        if (x[243] <= 3529.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[696] <= 1562.5) {
                                if (x[27] <= 2673.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[541] <= 1546.5) {
                                        if (x[381] <= 1761.5) {
                                            if (x[489] <= 4406.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[468] <= 4133.5) {
                                    if (x[22] <= 3233.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[285] <= 3080.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[382] <= 5499.0) {
                                            if (x[221] <= 6332.0) {
                                                if (x[478] <= 4694.0) {
                                                    if (x[432] <= 5498.5) {
                                                        votes[5] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #14
                        if (x[419] <= 2494.5) {
                            if (x[545] <= 2008.5) {
                                if (x[557] <= 3089.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[609] <= 1803.0) {
                                if (x[555] <= 4262.5) {
                                    if (x[372] <= 3098.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[388] <= 3070.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[484] <= 2885.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[377] <= 6277.0) {
                                            if (x[708] <= 5763.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            if (x[599] <= 5634.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[759] <= 5457.5) {
                                                    if (x[759] <= 5164.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #15
                        if (x[558] <= 4317.0) {
                            if (x[677] <= 2061.0) {
                                if (x[27] <= 3857.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[265] <= 4269.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[364] <= 4169.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[245] <= 4010.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[148] <= 4166.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[68] <= 5284.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[343] <= 3932.0) {
                                if (x[410] <= 2352.5) {
                                    if (x[488] <= 2851.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[57] <= 2912.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[394] <= 6207.5) {
                                        if (x[247] <= 5039.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[511] <= 4503.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[759] <= 4905.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[12] <= 4049.5) {
                            if (x[12] <= 3970.5) {
                                if (x[311] <= 3769.5) {
                                    if (x[31] <= 3386.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[521] <= 4189.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[704] <= 1027.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[605] <= 1371.5) {
                                if (x[727] <= 1764.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[494] <= 5060.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[693] <= 6319.0) {
                                        if (x[449] <= 6058.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[591] <= 5935.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[631] <= 5367.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[629] <= 3688.5) {
                            if (x[13] <= 4066.5) {
                                if (x[111] <= 4253.0) {
                                    if (x[215] <= 3627.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[22] <= 2736.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[685] <= 3603.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[124] <= 3032.0) {
                                        if (x[762] <= 1301.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[52] <= 4085.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            if (x[326] <= 5547.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[732] <= 4273.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        // tree #18
                        if (x[18] <= 3950.0) {
                            if (x[111] <= 4253.0) {
                                if (x[182] <= 3849.0) {
                                    if (x[308] <= 3704.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[547] <= 1745.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[64] <= 2867.5) {
                                if (x[316] <= 2032.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[448] <= 2419.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[285] <= 5544.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[487] <= 6369.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[570] <= 5236.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[629] <= 6358.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #19
                        if (x[143] <= 4392.0) {
                            if (x[46] <= 4096.0) {
                                if (x[303] <= 4095.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[84] <= 3125.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[711] <= 2220.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[333] <= 4519.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[448] <= 2433.0) {
                                    if (x[743] <= 3192.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[184] <= 6317.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[328] <= 5705.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[500] <= 5724.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[693] <= 2162.0) {
                            if (x[237] <= 4510.5) {
                                if (x[505] <= 1817.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[671] <= 1089.5) {
                                    if (x[109] <= 4362.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[184] <= 3580.5) {
                                votes[6] += 1;
                            }

                            else {
                                if (x[451] <= 2532.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[202] <= 4526.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[65] <= 3015.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[668] <= 4526.5) {
                                                if (x[608] <= 1885.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    if (x[351] <= 4986.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[678] <= 6050.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #21
                        if (x[146] <= 4264.0) {
                            if (x[45] <= 4117.5) {
                                if (x[217] <= 6125.5) {
                                    if (x[315] <= 3413.0) {
                                        if (x[315] <= 3146.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[202] <= 4598.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[762] <= 1258.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[26] <= 4231.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[352] <= 2674.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[569] <= 5050.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[661] <= 5776.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[763] <= 4606.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[379] <= 6368.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #22
                        if (x[735] <= 884.0) {
                            if (x[644] <= 2047.5) {
                                if (x[726] <= 2471.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[321] <= 2716.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            if (x[226] <= 3062.5) {
                                if (x[316] <= 2419.0) {
                                    if (x[701] <= 2256.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[149] <= 4143.0) {
                                    if (x[217] <= 6125.5) {
                                        if (x[621] <= 4101.0) {
                                            if (x[665] <= 1624.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[527] <= 5399.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[362] <= 6141.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[754] <= 5812.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[152] <= 6367.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    if (x[352] <= 6373.5) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #23
                        if (x[350] <= 1798.0) {
                            if (x[708] <= 1927.0) {
                                votes[6] += 1;
                            }

                            else {
                                if (x[761] <= 1279.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[576] <= 1799.0) {
                                if (x[346] <= 4116.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[706] <= 1629.5) {
                                    if (x[253] <= 2585.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[765] <= 1014.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[507] <= 2251.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[448] <= 5972.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[365] <= 6370.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[590] <= 5951.0) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        if (x[299] <= 6055.5) {
                                                            votes[5] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #24
                        if (x[144] <= 4353.0) {
                            if (x[494] <= 4559.5) {
                                if (x[307] <= 4136.5) {
                                    if (x[580] <= 2863.0) {
                                        if (x[751] <= 3379.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[25] <= 2257.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[587] <= 4244.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[300] <= 3402.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[181] <= 4175.5) {
                                if (x[726] <= 2608.5) {
                                    if (x[555] <= 4293.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[297] <= 5978.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[547] <= 6240.5) {
                                        if (x[411] <= 6034.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        // tree #25
                        if (x[13] <= 4074.5) {
                            if (x[46] <= 4096.0) {
                                if (x[212] <= 4160.0) {
                                    if (x[281] <= 3253.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[127] <= 2510.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[6] <= 3914.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[159] <= 2114.5) {
                                if (x[692] <= 2619.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[416] <= 2526.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[725] <= 4740.0) {
                                        if (x[736] <= 1321.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[727] <= 4645.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[640] <= 5322.0) {
                                                if (x[731] <= 4613.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #26
                        if (x[323] <= 2853.0) {
                            if (x[511] <= 1373.5) {
                                if (x[339] <= 3155.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[148] <= 3685.0) {
                                if (x[331] <= 4598.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[727] <= 1451.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[607] <= 1153.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[12] <= 3966.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[525] <= 4848.5) {
                                                if (x[341] <= 3607.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[609] <= 5404.5) {
                                                    if (x[730] <= 4624.5) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[342] <= 6316.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        if (x[609] <= 5536.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[5] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #27
                        if (x[641] <= 1576.0) {
                            if (x[212] <= 4156.0) {
                                if (x[300] <= 4606.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[86] <= 3561.0) {
                                if (x[201] <= 4311.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[126] <= 2332.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[229] <= 3801.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[266] <= 3508.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[379] <= 2007.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[569] <= 5240.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    if (x[30] <= 6077.5) {
                                                        votes[5] += 1;
                                                    }

                                                    else {
                                                        if (x[636] <= 4693.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #28
                        if (x[457] <= 4583.0) {
                            if (x[283] <= 3292.5) {
                                if (x[303] <= 3879.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[253] <= 2347.5) {
                                        if (x[352] <= 2610.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[19] <= 3569.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[408] <= 3136.5) {
                                    if (x[570] <= 1722.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[686] <= 6370.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[575] <= 4532.0) {
                                    if (x[411] <= 5359.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        // tree #29
                        if (x[725] <= 3327.0) {
                            if (x[17] <= 3975.0) {
                                if (x[174] <= 4469.5) {
                                    if (x[248] <= 3431.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[182] <= 3878.0) {
                                            if (x[507] <= 2481.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[513] <= 1908.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[581] <= 3735.0) {
                                    if (x[336] <= 4688.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            if (x[397] <= 6367.5) {
                                if (x[259] <= 3169.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[638] <= 4149.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[287] <= 6164.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #30
                        if (x[259] <= 3065.5) {
                            if (x[287] <= 2074.0) {
                                if (x[669] <= 1116.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[134] <= 3741.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[129] <= 2976.5) {
                                if (x[395] <= 4677.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[117] <= 4064.0) {
                                    if (x[724] <= 2668.5) {
                                        if (x[142] <= 4413.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[485] <= 3995.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[645] <= 6193.5) {
                                            if (x[588] <= 5895.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            if (x[188] <= 5992.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #31
                        if (x[291] <= 2976.0) {
                            if (x[709] <= 3389.0) {
                                votes[3] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[333] <= 4415.0) {
                                if (x[767] <= 993.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[319] <= 1735.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[86] <= 3172.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[675] <= 1685.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[548] <= 6181.0) {
                                                if (x[543] <= 1212.0) {
                                                    if (x[236] <= 3453.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                if (x[498] <= 5608.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    if (x[294] <= 6359.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[700] <= 4509.5) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #32
                        if (x[24] <= 3047.5) {
                            if (x[505] <= 2039.0) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[361] <= 4402.0) {
                                    if (x[239] <= 4106.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[62] <= 2426.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[12] <= 4157.5) {
                                    if (x[225] <= 2982.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[515] <= 6250.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[443] <= 5213.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[486] <= 6341.5) {
                                                if (x[483] <= 6374.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #33
                        if (x[387] <= 2594.0) {
                            if (x[82] <= 4020.0) {
                                if (x[20] <= 3028.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[707] <= 1520.0) {
                                if (x[342] <= 4320.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[419] <= 2873.5) {
                                    if (x[23] <= 5290.0) {
                                        if (x[77] <= 4413.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[248] <= 3171.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[613] <= 3318.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[579] <= 5795.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[553] <= 5789.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[331] <= 6089.0) {
                                                        votes[5] += 1;
                                                    }

                                                    else {
                                                        if (x[699] <= 4229.0) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[4] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #34
                        if (x[292] <= 3050.5) {
                            if (x[720] <= 3581.5) {
                                votes[6] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[333] <= 4442.0) {
                                if (x[714] <= 3687.5) {
                                    if (x[606] <= 1521.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[766] <= 910.5) {
                                    if (x[76] <= 4335.0) {
                                        if (x[407] <= 2431.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[347] <= 2093.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[692] <= 3429.5) {
                                        if (x[668] <= 1219.5) {
                                            if (x[215] <= 4857.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[529] <= 6306.0) {
                                            if (x[742] <= 5905.5) {
                                                if (x[142] <= 4184.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[251] <= 5926.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[696] <= 5095.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #35
                        if (x[49] <= 4101.0) {
                            if (x[212] <= 4054.0) {
                                if (x[215] <= 3541.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[351] <= 1701.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[77] <= 4192.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[32] <= 2750.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[416] <= 2526.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[536] <= 5399.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[609] <= 5534.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[697] <= 5080.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #36
                        if (x[49] <= 4101.0) {
                            if (x[640] <= 1497.0) {
                                if (x[605] <= 1426.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[280] <= 3688.0) {
                                    if (x[457] <= 3469.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[659] <= 3711.0) {
                                if (x[503] <= 2229.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[553] <= 5789.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[218] <= 6107.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[711] <= 5991.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[322] <= 6216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #37
                        if (x[23] <= 3189.0) {
                            if (x[123] <= 3977.5) {
                                if (x[555] <= 4287.0) {
                                    if (x[57] <= 2218.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[90] <= 3342.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[225] <= 3005.5) {
                                    if (x[687] <= 3790.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[688] <= 3731.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[709] <= 6101.0) {
                                            if (x[504] <= 2395.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[426] <= 6300.5) {
                                                    if (x[332] <= 3739.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[765] <= 3766.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[298] <= 5854.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #38
                        if (x[703] <= 934.0) {
                            if (x[599] <= 1935.0) {
                                if (x[628] <= 1987.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            if (x[729] <= 1385.0) {
                                if (x[254] <= 2546.0) {
                                    if (x[88] <= 4139.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[373] <= 3430.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[689] <= 3761.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[662] <= 1987.0) {
                                    if (x[295] <= 2664.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[221] <= 2676.0) {
                                        if (x[228] <= 3874.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[468] <= 6340.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[333] <= 5276.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[399] <= 6140.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[568] <= 5799.0) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #39
                        if (x[260] <= 3109.0) {
                            if (x[307] <= 4396.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            if (x[281] <= 4659.0) {
                                if (x[180] <= 3658.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[757] <= 3162.0) {
                                        if (x[42] <= 4271.5) {
                                            if (x[185] <= 4495.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[495] <= 4416.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[577] <= 5463.0) {
                                        if (x[335] <= 3769.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[483] <= 6274.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[677] <= 5986.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[545] <= 5987.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[281] <= 6096.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #40
                        if (x[146] <= 4267.5) {
                            if (x[78] <= 4187.0) {
                                if (x[244] <= 3483.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[554] <= 4214.0) {
                                        if (x[575] <= 1114.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[722] <= 3640.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[94] <= 2413.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[174] <= 4550.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[384] <= 6285.0) {
                                        if (x[152] <= 3955.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[518] <= 4846.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[216] <= 6315.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[367] <= 6154.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #41
                        if (x[17] <= 3975.0) {
                            if (x[354] <= 2625.0) {
                                if (x[605] <= 1332.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[313] <= 4992.0) {
                                    if (x[276] <= 4076.0) {
                                        if (x[456] <= 3481.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[170] <= 4539.5) {
                                if (x[548] <= 3089.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[57] <= 4599.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[617] <= 5332.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[727] <= 5582.0) {
                                            if (x[393] <= 6343.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[189] <= 5905.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #42
                        if (x[275] <= 4524.5) {
                            if (x[387] <= 2594.0) {
                                if (x[9] <= 3993.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[76] <= 4342.0) {
                                    if (x[21] <= 3571.5) {
                                        if (x[297] <= 4295.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[153] <= 3390.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[680] <= 3692.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[155] <= 4840.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[326] <= 4477.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[418] <= 3271.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[428] <= 5589.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[427] <= 5901.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[154] <= 6242.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[599] <= 5697.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #43
                        if (x[640] <= 1491.0) {
                            if (x[575] <= 1345.5) {
                                if (x[383] <= 1832.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[54] <= 3471.0) {
                                if (x[32] <= 2973.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[333] <= 4415.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[706] <= 1692.5) {
                                        if (x[571] <= 1439.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[497] <= 4262.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[428] <= 4576.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[189] <= 5861.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    if (x[379] <= 6331.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #44
                        if (x[57] <= 3107.5) {
                            if (x[442] <= 2358.0) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[21] <= 2140.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[418] <= 2445.5) {
                                if (x[45] <= 4109.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[62] <= 2379.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[709] <= 2123.0) {
                                        if (x[724] <= 3313.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[539] <= 4994.5) {
                                            if (x[578] <= 6051.0) {
                                                if (x[310] <= 2864.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            if (x[642] <= 5023.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #45
                        if (x[15] <= 4009.0) {
                            if (x[333] <= 4149.0) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[557] <= 4361.5) {
                                    if (x[302] <= 4445.5) {
                                        if (x[425] <= 3553.5) {
                                            if (x[764] <= 1594.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[32] <= 2750.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[726] <= 2608.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[318] <= 5286.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[533] <= 6312.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[711] <= 5991.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[575] <= 4892.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #46
                        if (x[180] <= 3557.0) {
                            if (x[335] <= 4274.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[146] <= 4264.0) {
                                if (x[78] <= 4178.5) {
                                    if (x[239] <= 4319.0) {
                                        if (x[161] <= 2984.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[759] <= 1443.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[560] <= 3079.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[252] <= 5758.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[397] <= 6367.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[639] <= 4283.5) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #47
                        if (x[354] <= 2625.0) {
                            if (x[272] <= 4475.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[51] <= 3661.5) {
                                if (x[172] <= 4409.5) {
                                    if (x[572] <= 1350.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[751] <= 3473.0) {
                                    if (x[119] <= 4637.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[746] <= 3585.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[154] <= 3926.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[611] <= 5748.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[511] <= 5037.0) {
                                                    if (x[447] <= 4736.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        if (x[731] <= 4475.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #48
                        if (x[93] <= 2745.5) {
                            if (x[508] <= 1746.0) {
                                if (x[92] <= 2199.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[704] <= 1228.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[456] <= 4283.0) {
                                        if (x[111] <= 3684.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[330] <= 4525.5) {
                                if (x[753] <= 3269.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[372] <= 2949.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[84] <= 4119.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[644] <= 5425.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[92] <= 6154.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[363] <= 6052.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #49
                        if (x[260] <= 3109.0) {
                            if (x[376] <= 3381.0) {
                                votes[3] += 1;
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            if (x[149] <= 3724.0) {
                                if (x[673] <= 1369.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[252] <= 2644.5) {
                                    if (x[27] <= 3395.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[710] <= 3492.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[421] <= 4266.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[491] <= 5432.0) {
                                        if (x[259] <= 2932.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[599] <= 5990.0) {
                                            if (x[217] <= 6207.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[676] <= 5232.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[581] <= 5691.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #50
                        if (x[237] <= 4510.5) {
                            if (x[388] <= 3360.5) {
                                if (x[172] <= 4405.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[386] <= 2517.5) {
                                if (x[578] <= 1468.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[140] <= 4507.5) {
                                    if (x[765] <= 975.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[555] <= 4283.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[581] <= 2706.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[416] <= 6165.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[447] <= 5093.5) {
                                                if (x[575] <= 4299.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    if (x[726] <= 5098.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #51
                        if (x[246] <= 3629.0) {
                            if (x[46] <= 4147.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            if (x[55] <= 3713.0) {
                                if (x[345] <= 4410.0) {
                                    if (x[507] <= 1912.0) {
                                        if (x[545] <= 2198.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 2651.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[574] <= 4340.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[501] <= 6351.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[524] <= 5365.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #52
                        if (x[281] <= 3792.5) {
                            if (x[725] <= 3281.5) {
                                if (x[515] <= 2486.5) {
                                    if (x[319] <= 1735.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[291] <= 3025.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[120] <= 3274.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[524] <= 5658.0) {
                                        if (x[602] <= 5377.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[479] <= 4597.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[573] <= 4646.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[571] <= 5234.5) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #53
                        if (x[703] <= 955.0) {
                            if (x[52] <= 4085.0) {
                                if (x[153] <= 4771.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[112] <= 4102.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            if (x[49] <= 4126.0) {
                                if (x[151] <= 3770.5) {
                                    if (x[30] <= 1549.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[419] <= 2596.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[495] <= 5164.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[604] <= 4818.0) {
                                        if (x[672] <= 5486.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        // tree #54
                        if (x[355] <= 2686.0) {
                            if (x[428] <= 4564.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[749] <= 3533.5) {
                                if (x[706] <= 1692.5) {
                                    if (x[493] <= 4141.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[54] <= 4128.0) {
                                        if (x[35] <= 3274.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[382] <= 2032.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[132] <= 3048.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[179] <= 4245.0) {
                                        if (x[308] <= 3566.5) {
                                            if (x[128] <= 3072.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[488] <= 6364.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[742] <= 5552.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[730] <= 4178.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    if (x[760] <= 4848.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #55
                        if (x[331] <= 4351.0) {
                            if (x[545] <= 2196.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[0] <= 2767.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[57] <= 3279.0) {
                                if (x[150] <= 3664.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[26] <= 2810.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[534] <= 2842.0) {
                                    if (x[158] <= 2691.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[170] <= 4463.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[90] <= 6369.0) {
                                        if (x[364] <= 2918.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[362] <= 6141.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[536] <= 5617.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[440] <= 6322.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[670] <= 4580.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #56
                        if (x[170] <= 4454.5) {
                            if (x[234] <= 4527.5) {
                                if (x[213] <= 4105.5) {
                                    if (x[431] <= 4122.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[59] <= 2749.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[565] <= 3619.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[366] <= 4564.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[277] <= 4108.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[312] <= 6109.0) {
                                        if (x[27] <= 4517.0) {
                                            if (x[41] <= 4261.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[736] <= 3988.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[514] <= 6142.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[738] <= 5060.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #57
                        if (x[148] <= 3589.5) {
                            if (x[742] <= 3382.0) {
                                if (x[193] <= 3374.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[12] <= 3961.0) {
                                if (x[32] <= 2716.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[177] <= 4405.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[574] <= 1256.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[278] <= 3703.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[328] <= 5039.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[384] <= 6285.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    if (x[726] <= 5587.0) {
                                                        if (x[763] <= 4024.0) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #58
                        if (x[31] <= 2036.5) {
                            if (x[368] <= 3343.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[537] <= 1907.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[60] <= 1897.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2525.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[448] <= 2419.0) {
                                    if (x[324] <= 4098.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[287] <= 5166.5) {
                                        if (x[650] <= 3401.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[465] <= 6343.5) {
                                            if (x[637] <= 4737.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #59
                        if (x[253] <= 2356.5) {
                            if (x[484] <= 2648.5) {
                                if (x[736] <= 1152.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[354] <= 2931.5) {
                                    if (x[14] <= 4011.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[332] <= 4238.5) {
                                if (x[71] <= 3820.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[64] <= 2797.0) {
                                    if (x[410] <= 2746.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[112] <= 4287.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[389] <= 5166.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[572] <= 4595.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[728] <= 4840.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #60
                        if (x[420] <= 2595.0) {
                            if (x[323] <= 3364.0) {
                                votes[3] += 1;
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[62] <= 2937.0) {
                                if (x[756] <= 3314.5) {
                                    if (x[346] <= 4151.0) {
                                        if (x[577] <= 1971.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[132] <= 3719.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[4] <= 3475.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[684] <= 3800.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[335] <= 3673.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[696] <= 4528.5) {
                                        if (x[559] <= 3333.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[695] <= 5704.0) {
                                            if (x[640] <= 4695.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[441] <= 5930.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #61
                        if (x[122] <= 3127.0) {
                            if (x[651] <= 3887.5) {
                                if (x[690] <= 3277.0) {
                                    if (x[325] <= 3814.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[449] <= 2342.0) {
                                if (x[764] <= 1037.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[623] <= 4067.0) {
                                    if (x[150] <= 4036.0) {
                                        if (x[755] <= 3237.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[13] <= 3968.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[552] <= 6272.5) {
                                            if (x[226] <= 3150.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 6371.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[597] <= 6045.5) {
                                                    if (x[189] <= 5901.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        if (x[303] <= 6261.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[4] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #62
                        if (x[172] <= 4521.5) {
                            if (x[672] <= 1336.0) {
                                if (x[183] <= 4306.0) {
                                    if (x[646] <= 1842.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[77] <= 4179.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[363] <= 4457.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[586] <= 4149.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[662] <= 5013.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[609] <= 5870.0) {
                                            if (x[740] <= 5749.0) {
                                                if (x[568] <= 5626.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #63
                        if (x[26] <= 2565.5) {
                            if (x[50] <= 2449.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[55] <= 3185.5) {
                                if (x[536] <= 2026.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[720] <= 3563.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[107] <= 4465.0) {
                                        if (x[512] <= 2181.5) {
                                            if (x[574] <= 1298.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[385] <= 6308.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[481] <= 6374.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[471] <= 6009.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #64
                        if (x[201] <= 4473.0) {
                            if (x[333] <= 4176.0) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[185] <= 5109.5) {
                                    if (x[740] <= 2187.5) {
                                        if (x[52] <= 3353.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[705] <= 1438.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            if (x[363] <= 4457.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[269] <= 4737.0) {
                                    if (x[60] <= 3808.5) {
                                        if (x[643] <= 2570.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[642] <= 1643.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[696] <= 4736.5) {
                                            if (x[528] <= 6053.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            if (x[693] <= 6319.0) {
                                                if (x[95] <= 6173.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #65
                        if (x[80] <= 4185.0) {
                            if (x[29] <= 2442.5) {
                                if (x[540] <= 1629.0) {
                                    if (x[25] <= 2148.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[125] <= 2075.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[638] <= 1191.5) {
                                    if (x[687] <= 3626.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[93] <= 2648.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[471] <= 2328.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[340] <= 6373.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[1] <= 6371.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[495] <= 5315.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[669] <= 4310.5) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #66
                        if (x[217] <= 6133.0) {
                            if (x[253] <= 2560.5) {
                                if (x[245] <= 3278.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[574] <= 1256.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[727] <= 1523.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[348] <= 2090.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[668] <= 1373.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[571] <= 3144.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[711] <= 5991.0) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[759] <= 4545.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[686] <= 6370.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[508] <= 5404.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #67
                        if (x[292] <= 3050.5) {
                            if (x[273] <= 4517.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            if (x[718] <= 3640.5) {
                                if (x[728] <= 1349.5) {
                                    if (x[720] <= 3564.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[736] <= 1115.5) {
                                    if (x[186] <= 5903.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[159] <= 2222.5) {
                                        if (x[442] <= 2410.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[540] <= 1998.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[600] <= 1660.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[644] <= 5548.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[705] <= 4927.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[644] <= 6040.0) {
                                                        votes[5] += 1;
                                                    }

                                                    else {
                                                        if (x[761] <= 4406.0) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #68
                        if (x[82] <= 4112.0) {
                            if (x[248] <= 4871.5) {
                                if (x[115] <= 3937.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[495] <= 4439.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[59] <= 3668.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[350] <= 1800.0) {
                                    if (x[479] <= 1375.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[581] <= 6271.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[266] <= 6166.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[250] <= 6051.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #69
                        if (x[317] <= 1955.0) {
                            if (x[748] <= 3959.0) {
                                votes[6] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[418] <= 2415.0) {
                                if (x[482] <= 2062.5) {
                                    if (x[72] <= 4166.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[141] <= 4435.0) {
                                    if (x[182] <= 3853.5) {
                                        if (x[278] <= 4015.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[725] <= 3162.5) {
                                        if (x[112] <= 4310.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[457] <= 6231.0) {
                                            if (x[638] <= 1200.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[380] <= 5294.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[679] <= 6084.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    if (x[328] <= 5709.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #70
                        if (x[243] <= 4480.5) {
                            if (x[604] <= 1460.0) {
                                if (x[512] <= 2263.5) {
                                    if (x[609] <= 1875.5) {
                                        if (x[320] <= 2748.0) {
                                            if (x[462] <= 4538.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[59] <= 2763.5) {
                                    if (x[271] <= 4108.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[303] <= 5912.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[345] <= 6003.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[632] <= 5057.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[439] <= 6352.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[727] <= 5582.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #71
                        if (x[279] <= 4982.5) {
                            if (x[528] <= 4331.0) {
                                if (x[115] <= 3610.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[716] <= 3663.0) {
                                        if (x[549] <= 3445.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[513] <= 2397.0) {
                                            if (x[138] <= 4319.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[171] <= 4564.0) {
                                                    if (x[711] <= 3531.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[257] <= 2948.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[346] <= 4061.0) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[460] <= 6079.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[379] <= 5837.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[570] <= 5236.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[348] <= 6172.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #72
                        if (x[110] <= 4334.5) {
                            if (x[12] <= 3970.5) {
                                if (x[212] <= 4067.0) {
                                    if (x[640] <= 1469.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[654] <= 3687.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[707] <= 1386.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[29] <= 2734.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[726] <= 2608.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[562] <= 6319.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[680] <= 6104.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[663] <= 4986.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[726] <= 5098.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[513] <= 6251.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #73
                        if (x[356] <= 2745.0) {
                            if (x[372] <= 3862.5) {
                                votes[5] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[82] <= 4197.5) {
                                if (x[613] <= 3707.0) {
                                    if (x[759] <= 2127.0) {
                                        if (x[442] <= 2358.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[279] <= 4982.5) {
                                                if (x[670] <= 1268.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[93] <= 2648.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[675] <= 5305.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[670] <= 4380.5) {
                                            if (x[285] <= 5644.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #74
                        if (x[640] <= 1491.0) {
                            if (x[120] <= 3274.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[386] <= 2471.0) {
                                if (x[112] <= 4187.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[170] <= 4539.5) {
                                    if (x[149] <= 3764.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[61] <= 2806.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[560] <= 5949.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[724] <= 4926.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[93] <= 6361.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[453] <= 6046.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #75
                        if (x[61] <= 2633.5) {
                            if (x[86] <= 3877.0) {
                                if (x[527] <= 4332.5) {
                                    if (x[248] <= 3804.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[27] <= 3413.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[319] <= 1735.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[234] <= 4510.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[451] <= 6329.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[463] <= 6128.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #76
                        if (x[382] <= 1731.5) {
                            if (x[727] <= 1746.5) {
                                if (x[535] <= 1987.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[34] <= 3256.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            if (x[45] <= 4239.5) {
                                if (x[333] <= 4149.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[556] <= 4319.5) {
                                        if (x[219] <= 3746.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[453] <= 3223.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[612] <= 5663.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[61] <= 6335.0) {
                                            if (x[1] <= 6371.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[733] <= 4207.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #77
                        if (x[704] <= 1167.0) {
                            if (x[376] <= 3778.5) {
                                votes[5] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[706] <= 1547.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[14] <= 3960.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[117] <= 4039.0) {
                                        if (x[253] <= 2611.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[663] <= 2333.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[487] <= 6369.0) {
                                                if (x[516] <= 2442.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[485] <= 6371.5) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    if (x[600] <= 5262.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        if (x[579] <= 5943.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[5] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #78
                        if (x[219] <= 3789.0) {
                            if (x[54] <= 4331.0) {
                                if (x[113] <= 4339.5) {
                                    if (x[211] <= 3506.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[766] <= 898.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[563] <= 2389.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[651] <= 4010.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }
                        }

                        else {
                            if (x[625] <= 4003.5) {
                                if (x[206] <= 4418.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[148] <= 3736.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[581] <= 6362.0) {
                                        if (x[298] <= 5812.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[191] <= 5384.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #79
                        if (x[29] <= 2087.0) {
                            if (x[76] <= 4024.0) {
                                if (x[308] <= 3937.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[387] <= 2594.0) {
                                if (x[79] <= 4141.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[753] <= 3420.5) {
                                    if (x[684] <= 3842.0) {
                                        if (x[407] <= 2379.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[220] <= 2608.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[397] <= 4619.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[613] <= 6110.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[158] <= 6258.0) {
                                                    if (x[573] <= 4731.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #80
                        if (x[9] <= 4092.0) {
                            if (x[641] <= 1576.0) {
                                if (x[344] <= 4327.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[278] <= 3427.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[567] <= 2831.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[56] <= 3744.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[352] <= 2674.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[127] <= 5636.0) {
                                        if (x[331] <= 4185.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[766] <= 3849.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[766] <= 4204.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #81
                        if (x[213] <= 3412.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[187] <= 3392.0) {
                                if (x[23] <= 3014.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[381] <= 1807.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[343] <= 2992.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[329] <= 3051.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[493] <= 6144.0) {
                                        if (x[444] <= 5676.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[700] <= 4656.5) {
                                            if (x[602] <= 4855.5) {
                                                if (x[538] <= 4993.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #82
                        if (x[672] <= 1336.0) {
                            if (x[555] <= 4262.5) {
                                votes[5] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[713] <= 3585.0) {
                                if (x[184] <= 4010.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[356] <= 2970.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[40] <= 4105.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[291] <= 3270.0) {
                                            if (x[70] <= 4261.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            if (x[329] <= 5037.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[461] <= 6070.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[446] <= 4819.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        if (x[451] <= 6329.0) {
                                                            votes[4] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #83
                        if (x[212] <= 3349.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[323] <= 2853.0) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[47] <= 4161.0) {
                                    if (x[570] <= 1700.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[20] <= 3185.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[35] <= 2873.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[29] <= 2734.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[75] <= 4321.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[676] <= 5804.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[591] <= 6299.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #84
                        if (x[218] <= 4215.5) {
                            if (x[500] <= 4098.0) {
                                if (x[687] <= 3771.5) {
                                    if (x[587] <= 3379.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[108] <= 4409.0) {
                                        if (x[303] <= 3678.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[309] <= 4161.0) {
                                if (x[612] <= 1782.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[615] <= 6337.0) {
                                    if (x[244] <= 3992.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[493] <= 6144.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[601] <= 5430.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #85
                        if (x[387] <= 2593.0) {
                            if (x[595] <= 3221.5) {
                                if (x[513] <= 1670.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[28] <= 5039.0) {
                                if (x[55] <= 4566.0) {
                                    if (x[205] <= 4643.0) {
                                        if (x[528] <= 4271.0) {
                                            if (x[543] <= 1596.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[59] <= 6342.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[94] <= 6324.5) {
                                        if (x[713] <= 5015.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[577] <= 6029.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #86
                        if (x[724] <= 3428.5) {
                            if (x[511] <= 1447.5) {
                                if (x[279] <= 3994.0) {
                                    if (x[13] <= 4202.5) {
                                        if (x[718] <= 3651.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[54] <= 2892.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[63] <= 2147.0) {
                                    if (x[521] <= 4231.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[336] <= 6044.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[465] <= 6343.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[157] <= 5957.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[518] <= 6017.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #87
                        if (x[260] <= 3109.0) {
                            if (x[106] <= 4343.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            if (x[704] <= 1242.0) {
                                if (x[526] <= 4355.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[265] <= 4367.5) {
                                    if (x[681] <= 2793.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 2721.0) {
                                        if (x[506] <= 2230.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[382] <= 1708.0) {
                                            if (x[655] <= 3818.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            if (x[590] <= 5951.0) {
                                                if (x[69] <= 3595.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[408] <= 6300.0) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[331] <= 6089.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    if (x[513] <= 6252.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #88
                        if (x[323] <= 2896.5) {
                            if (x[702] <= 1021.5) {
                                votes[6] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[10] <= 4148.0) {
                                if (x[52] <= 3952.5) {
                                    if (x[313] <= 4919.5) {
                                        if (x[278] <= 3485.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[383] <= 1837.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[636] <= 1348.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[300] <= 5984.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[586] <= 5960.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[661] <= 5689.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[665] <= 5282.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #89
                        if (x[354] <= 2621.5) {
                            if (x[15] <= 3927.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[13] <= 4066.5) {
                                if (x[149] <= 3905.5) {
                                    if (x[557] <= 4303.0) {
                                        if (x[644] <= 2025.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[349] <= 1897.0) {
                                    if (x[587] <= 3932.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 2569.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[673] <= 5170.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[247] <= 6331.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[639] <= 4436.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #90
                        if (x[201] <= 4472.0) {
                            if (x[149] <= 3986.0) {
                                if (x[80] <= 4109.5) {
                                    if (x[677] <= 3059.5) {
                                        if (x[356] <= 2953.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[74] <= 4150.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[28] <= 3070.5) {
                                if (x[26] <= 2625.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[317] <= 2055.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[615] <= 6096.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[587] <= 5350.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[373] <= 6328.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[761] <= 4809.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[481] <= 6373.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #91
                        if (x[387] <= 2595.5) {
                            if (x[230] <= 4232.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[440] <= 2568.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[302] <= 4329.5) {
                                if (x[86] <= 4489.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[80] <= 4194.0) {
                                    if (x[182] <= 3878.0) {
                                        if (x[648] <= 2236.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[10] <= 4142.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[275] <= 4515.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[327] <= 5634.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[589] <= 5875.5) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    if (x[280] <= 6242.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        if (x[567] <= 6273.0) {
                                                            votes[5] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #92
                        if (x[84] <= 3606.0) {
                            if (x[315] <= 3458.0) {
                                if (x[245] <= 3854.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[279] <= 5289.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[641] <= 1585.0) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[707] <= 1616.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[206] <= 4600.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[91] <= 3350.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[529] <= 5741.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[633] <= 5396.0) {
                                                    if (x[454] <= 6023.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #93
                        if (x[420] <= 2595.0) {
                            votes[3] += 1;
                        }

                        else {
                            if (x[24] <= 2741.5) {
                                if (x[531] <= 2986.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[674] <= 1556.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[61] <= 2553.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[480] <= 2294.0) {
                                            if (x[705] <= 1596.5) {
                                                if (x[37] <= 3957.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            if (x[31] <= 5438.5) {
                                                if (x[115] <= 4083.5) {
                                                    if (x[81] <= 4133.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                if (x[567] <= 5536.5) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    if (x[507] <= 5869.0) {
                                                        if (x[726] <= 5098.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[523] <= 4407.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[5] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #94
                        if (x[333] <= 4164.5) {
                            if (x[287] <= 2024.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[52] <= 3950.0) {
                                if (x[244] <= 3483.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[344] <= 4439.5) {
                                        if (x[604] <= 1462.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[726] <= 2683.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[76] <= 4389.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[591] <= 5935.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[474] <= 5570.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[610] <= 5882.0) {
                                                if (x[604] <= 5210.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #95
                        if (x[316] <= 2094.5) {
                            if (x[591] <= 4436.5) {
                                votes[6] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[385] <= 2985.0) {
                                if (x[54] <= 4266.5) {
                                    if (x[291] <= 2987.0) {
                                        if (x[657] <= 3807.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[281] <= 6000.5) {
                                            if (x[63] <= 2618.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[118] <= 4113.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[518] <= 4978.0) {
                                    if (x[219] <= 2549.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[755] <= 5558.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[285] <= 5710.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #96
                        if (x[243] <= 4480.5) {
                            if (x[355] <= 2686.0) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[217] <= 5994.5) {
                                    if (x[640] <= 1469.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[599] <= 1911.0) {
                                            if (x[159] <= 2439.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[75] <= 3921.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            if (x[333] <= 5276.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[326] <= 5446.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[383] <= 4907.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[611] <= 5560.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[522] <= 6270.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #97
                        if (x[53] <= 3854.0) {
                            if (x[260] <= 3109.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[211] <= 4057.5) {
                                    if (x[641] <= 1468.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[441] <= 2500.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[485] <= 3281.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[735] <= 907.0) {
                                if (x[759] <= 1750.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[301] <= 5663.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[279] <= 6307.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[664] <= 5147.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[663] <= 5800.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #98
                        if (x[206] <= 4564.5) {
                            if (x[336] <= 4164.5) {
                                if (x[421] <= 3975.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[263] <= 4343.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[555] <= 4283.0) {
                                    if (x[182] <= 3878.0) {
                                        if (x[311] <= 2565.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[213] <= 3879.0) {
                                if (x[535] <= 2265.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[94] <= 2475.0) {
                                    if (x[528] <= 4407.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[539] <= 4853.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #99
                        if (x[49] <= 4101.0) {
                            if (x[46] <= 4096.0) {
                                if (x[554] <= 4213.5) {
                                    if (x[335] <= 4400.5) {
                                        if (x[267] <= 4302.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 2743.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[524] <= 4096.0) {
                                if (x[152] <= 4228.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[726] <= 2403.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[575] <= 4221.0) {
                                        if (x[363] <= 4460.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[378] <= 6031.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[580] <= 6139.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[641] <= 5312.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[568] <= 5998.5) {
                                                        votes[5] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #100
                        if (x[737] <= 1171.0) {
                            if (x[334] <= 4769.0) {
                                if (x[217] <= 6125.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[354] <= 2621.5) {
                                if (x[695] <= 1484.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[77] <= 4330.0) {
                                    if (x[611] <= 2082.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[629] <= 3621.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[552] <= 5339.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[607] <= 4537.0) {
                                                if (x[343] <= 6208.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    if (x[497] <= 6173.0) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 7; i++) {
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
                            case 3:
                            return ">";
                            case 4:
                            return "#";
                            case 5:
                            return "X";
                            case 6:
                            return "Y";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }