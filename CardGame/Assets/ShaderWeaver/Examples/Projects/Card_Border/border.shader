// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

//ShaderWeaverData{"shaderQueue":3000,"rt":1,"shaderQueueOffset":0,"shaderType":0,"spriteLightType":0,"shaderModel":0,"shaderBlend":0,"excludeRoot":true,"version":130,"pixelPerUnit":0.0,"spriteRect":{"serializedVersion":"2","x":0.0,"y":0.0,"width":1.0,"height":1.0},"title":"border","materialGUID":"49f92ffd82f8af743be08feb45ea2839","masksGUID":["e752e976e84d608499039290e0d53c0f"],"paramList":[{"type":0,"name":"bl2","min":0.0,"max":1.0,"defaultValue":0.09375},{"type":0,"name":"size","min":0.0,"max":1.5,"defaultValue":0.796875},{"type":0,"name":"_pcg","min":0.0,"max":1.0,"defaultValue":0.0}],"nodes":[{"useNormal":false,"id":"469112aa_6040_4439_abab_559022ba2306","name":"ROOT","depth":1,"type":0,"parentPortNumber":0,"parent":[],"parentPort":[],"childPortNumber":1,"children":["0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","9558c886_eb99_4adc_b2c1_6e3520137f23","4a65c799_2d87_4381_b2d7_e5ebc9b6c229"],"childrenPort":[0,0,0],"textureExGUID":"","textureGUID":"ffc5271eadeb95745bb342737d478577","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":2058.0,"y":525.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":false,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[0,1,3],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"e6075eb1_1799_469e_be3c_e28d6a9a3e35","name":"dummy1","depth":1,"type":9,"parentPortNumber":1,"parent":["201adce9_acc4_4326_a92e_481044bdd842"],"parentPort":[0],"childPortNumber":1,"children":["228bba07_f737_455f_a16b_0ae239fe3f4b","c738e67e_d696_4406_a8b2_7d8578c3292d"],"childrenPort":[0,0],"textureExGUID":"","textureGUID":"ffc5271eadeb95745bb342737d478577","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"8fb98a6035269e64a998f9b56828fc4f","spriteName":"RobotBoyIdle00","rect":{"serializedVersion":"2","x":830.0,"y":575.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":-0.008000016212463379},"r_angle":0.0,"s_scale":{"x":0.4749999940395355,"y":0.47999998927116396},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.03515625,"y":0.03515625},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"size","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":false,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"size"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[1,3,0],"dirty":true,"layerMask":{"mask":5,"strs":["469112aa_6040_4439_abab_559022ba2306","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","bf47f09c_cf4a_4349_accd_c9f37191c133","c738e67e_d696_4406_a8b2_7d8578c3292d","3f60a0b1_38a9_45f2_bf6e_c6494fa65014","2f5a09a5_2c98_4c80_9349_fad8ebf312e6","87cb5309_91a7_4ddc_a931_7ace20e49e0b","feba9a05_baa9_423f_a5eb_3fb27b3124da","ab152e72_55eb_4c9c_a117_18c6003391dd","f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","3839af3e_6192_4fee_a98c_246d93119f27","0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","fd2db3ed_d25a_4036_bc16_1bcdfb29d645","ed425f5c_4df4_4427_aaec_328c5874f413","6f536931_6913_406f_986c_22ba015371fd","201adce9_acc4_4326_a92e_481044bdd842","6a48cf7c_0459_435f_86f0_3cf92789e0f9","f1ed31fd_be6a_4c17_9d89_83dde8941702","4a65c799_2d87_4381_b2d7_e5ebc9b6c229"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"228bba07_f737_455f_a16b_0ae239fe3f4b","name":"blur2","depth":1,"type":6,"parentPortNumber":1,"parent":["e6075eb1_1799_469e_be3c_e28d6a9a3e35"],"parentPort":[0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":628.0,"y":500.0,"width":152.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[1],"inputType":[],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":1.0,"blurY":1.0,"blurXParam":"bl2","blurYParam":"bl2","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"9558c886_eb99_4adc_b2c1_6e3520137f23","name":"mixer3","depth":1,"type":12,"parentPortNumber":1,"parent":["469112aa_6040_4439_abab_559022ba2306"],"parentPort":[0,0],"childPortNumber":2,"children":["be305fff_8100_4f21_93f8_14826ed7808a","201adce9_acc4_4326_a92e_481044bdd842"],"childrenPort":[1,0],"textureExGUID":"","textureGUID":"","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1524.0,"y":477.0,"width":152.0,"height":80.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0,1,3],"inputType":[0,1,3],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[{"tex":{"instanceID":-127456},"frames":[{"time":0.0,"value":0.0},{"time":0.38333332538604739,"value":1.0},{"time":1.0,"value":1.0}]}],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"be305fff_8100_4f21_93f8_14826ed7808a","name":"color4","depth":2,"type":3,"parentPortNumber":1,"parent":["9558c886_eb99_4adc_b2c1_6e3520137f23"],"parentPort":[0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1393.0,"y":615.0,"width":144.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":true,"color":{"r":1.8443026542663575,"g":0.9076672792434692,"b":0.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[3],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"bb7d7875_894e_4b55_a25a_045d3d7e5d24","name":"image6","depth":-1,"type":13,"parentPortNumber":1,"parent":["4a65c799_2d87_4381_b2d7_e5ebc9b6c229"],"parentPort":[0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"8ac392ef8c3c2e846a934dfedede00fb","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1493.0,"y":156.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":-0.037702083587646487,"y":0.007146477699279785},"r_angle":0.0,"s_scale":{"x":1.048828125,"y":0.8765624761581421},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.10000000149011612,"y":0.10000000149011612},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"(size-0.8)","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":1,"gapX":0.0,"loopY":1,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":true,"color":{"r":2.6390156745910646,"g":0.0,"b":0.0,"a":1.0},"op":2,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[1,3,0],"dirty":true,"layerMask":{"mask":1,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","bf47f09c_cf4a_4349_accd_c9f37191c133","c738e67e_d696_4406_a8b2_7d8578c3292d","3f60a0b1_38a9_45f2_bf6e_c6494fa65014","2f5a09a5_2c98_4c80_9349_fad8ebf312e6","87cb5309_91a7_4ddc_a931_7ace20e49e0b","feba9a05_baa9_423f_a5eb_3fb27b3124da","ab152e72_55eb_4c9c_a117_18c6003391dd","f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","3839af3e_6192_4fee_a98c_246d93119f27","0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","fd2db3ed_d25a_4036_bc16_1bcdfb29d645","ed425f5c_4df4_4427_aaec_328c5874f413","6f536931_6913_406f_986c_22ba015371fd","201adce9_acc4_4326_a92e_481044bdd842","6a48cf7c_0459_435f_86f0_3cf92789e0f9","f1ed31fd_be6a_4c17_9d89_83dde8941702","4a65c799_2d87_4381_b2d7_e5ebc9b6c229"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","name":"image7","depth":3,"type":13,"parentPortNumber":1,"parent":["6a48cf7c_0459_435f_86f0_3cf92789e0f9"],"parentPort":[0],"childPortNumber":1,"children":["bf47f09c_cf4a_4349_accd_c9f37191c133"],"childrenPort":[0],"textureExGUID":"","textureGUID":"2d2fb6cbf6b2a134a95d2dac1bdda490","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1158.0,"y":162.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":-7.152557373046875e-7,"y":2.384185791015625e-7},"r_angle":0.0,"s_scale":{"x":0.3499999940395355,"y":0.5},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.512333869934082,"y":0.512333869934082},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"size","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":1,"gapX":0.0,"loopY":1,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":true,"color":{"r":1.4980392456054688,"g":1.4901961088180543,"b":0.6352941393852234,"a":1.0},"op":0,"param":"(-1.4+size*2)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[1,3,0],"dirty":true,"layerMask":{"mask":1,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","5ce89c57_5ba4_40fd_9859_990db2099d8e","bf47f09c_cf4a_4349_accd_c9f37191c133","c738e67e_d696_4406_a8b2_7d8578c3292d","a25a45a5_ca7b_4797_9c7c_02a21adae0a4","4a32372b_19d1_4931_8967_36dd9260face"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"bf47f09c_cf4a_4349_accd_c9f37191c133","name":"uv5copy","depth":1,"type":4,"parentPortNumber":1,"parent":["89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b"],"parentPort":[0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"fa3108da2fe38a748bfce58b4c9b5410","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":996.0,"y":162.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0000021457672119140627,"y":2.384185791015625e-7},"r_angle":0.0,"s_scale":{"x":1.2740192413330079,"y":1.1891992092132569},"t_speed":{"x":0.11034941673278809,"y":0.3115231990814209},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":-0.15136933326721192,"y":0.1240231990814209},"amountG":{"x":-0.006838083267211914,"y":0.2138669490814209},"amountB":{"x":0.09667754173278809,"y":0.1005856990814209},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[1],"inputType":[1],"dirty":true,"layerMask":{"mask":449,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","5ce89c57_5ba4_40fd_9859_990db2099d8e","c738e67e_d696_4406_a8b2_7d8578c3292d"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"c738e67e_d696_4406_a8b2_7d8578c3292d","name":"uv5copycopy","depth":1,"type":4,"parentPortNumber":1,"parent":["e6075eb1_1799_469e_be3c_e28d6a9a3e35"],"parentPort":[0,0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"e80c3c84ea861404d8a427db8b7abf04","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":675.0,"y":640.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0000017881393432617188,"y":3.5762786865234377e-7},"r_angle":0.0,"s_scale":{"x":3.0,"y":3.0},"t_speed":{"x":0.07206785678863526,"y":0.15329521894454957},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":-0.009999999776482582,"y":0.009999999776482582},"amountG":{"x":0.0,"y":0.009999999776482582},"amountB":{"x":0.009999999776482582,"y":0.009999999776482582},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[1],"inputType":[1],"dirty":true,"layerMask":{"mask":11,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","5ce89c57_5ba4_40fd_9859_990db2099d8e","bf47f09c_cf4a_4349_accd_c9f37191c133","a25a45a5_ca7b_4797_9c7c_02a21adae0a4","4a32372b_19d1_4931_8967_36dd9260face"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"3f60a0b1_38a9_45f2_bf6e_c6494fa65014","name":"image2","depth":5,"type":13,"parentPortNumber":1,"parent":["f1ed31fd_be6a_4c17_9d89_83dde8941702"],"parentPort":[0],"childPortNumber":1,"children":["2f5a09a5_2c98_4c80_9349_fad8ebf312e6","feba9a05_baa9_423f_a5eb_3fb27b3124da"],"childrenPort":[0,0],"textureExGUID":"","textureGUID":"6b50937b678fd4144877b602d623578a","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":770.0,"y":1715.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":-0.004615992307662964,"y":0.13711273670196534},"r_angle":0.0,"s_scale":{"x":0.3378971815109253,"y":0.29675251245498659},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":false,"loopX":1,"gapX":0.0,"loopY":1,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[1,3,0],"dirty":true,"layerMask":{"mask":65536,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","5ce89c57_5ba4_40fd_9859_990db2099d8e","bf47f09c_cf4a_4349_accd_c9f37191c133","c738e67e_d696_4406_a8b2_7d8578c3292d","f704c95b_333c_4233_805b_ab12d6d45adf","c0dce0ee_588b_49dc_8559_06ffaacacca1","2f5a09a5_2c98_4c80_9349_fad8ebf312e6","87cb5309_91a7_4ddc_a931_7ace20e49e0b","feba9a05_baa9_423f_a5eb_3fb27b3124da","ab152e72_55eb_4c9c_a117_18c6003391dd","dc42631b_4577_4128_9e43_0592ac16284e","f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","3839af3e_6192_4fee_a98c_246d93119f27","0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","fd2db3ed_d25a_4036_bc16_1bcdfb29d645","ed425f5c_4df4_4427_aaec_328c5874f413","9a991dff_5f77_4f47_ab59_b3ce2f1e20e4","6f536931_6913_406f_986c_22ba015371fd"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"2f5a09a5_2c98_4c80_9349_fad8ebf312e6","name":"uv4","depth":1,"type":4,"parentPortNumber":1,"parent":["3f60a0b1_38a9_45f2_bf6e_c6494fa65014"],"parentPort":[0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"fa3108da2fe38a748bfce58b4c9b5410","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":581.0,"y":1716.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":-0.026731550693511964,"y":0.2074243724346161},"r_angle":0.0,"s_scale":{"x":0.703986644744873,"y":0.4262745976448059},"t_speed":{"x":-0.00023490190505981445,"y":0.13911449909210206},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":false,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":-0.08654969930648804,"y":0.11093500256538391},"amountG":{"x":0.15759092569351197,"y":0.01718500256538391},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[1],"inputType":[1],"dirty":true,"layerMask":{"mask":6145,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","5ce89c57_5ba4_40fd_9859_990db2099d8e","bf47f09c_cf4a_4349_accd_c9f37191c133","c738e67e_d696_4406_a8b2_7d8578c3292d","f704c95b_333c_4233_805b_ab12d6d45adf","3f60a0b1_38a9_45f2_bf6e_c6494fa65014","c0dce0ee_588b_49dc_8559_06ffaacacca1","87cb5309_91a7_4ddc_a931_7ace20e49e0b","feba9a05_baa9_423f_a5eb_3fb27b3124da","ab152e72_55eb_4c9c_a117_18c6003391dd","dc42631b_4577_4128_9e43_0592ac16284e","f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","3839af3e_6192_4fee_a98c_246d93119f27","0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","fd2db3ed_d25a_4036_bc16_1bcdfb29d645"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"87cb5309_91a7_4ddc_a931_7ace20e49e0b","name":"uv1","depth":1,"type":4,"parentPortNumber":1,"parent":["feba9a05_baa9_423f_a5eb_3fb27b3124da"],"parentPort":[0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"fa3108da2fe38a748bfce58b4c9b5410","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":396.0,"y":1887.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":-0.36328125,"y":0.099609375},"r_angle":0.0,"s_scale":{"x":1.76171875,"y":1.1705245971679688},"t_speed":{"x":0.0,"y":0.16015625},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":false,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.011718511581420899,"y":0.484375},"amountG":{"x":0.4179685115814209,"y":0.28515625},"amountB":{"x":-0.4160158634185791,"y":0.365234375},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[1],"inputType":[1],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"feba9a05_baa9_423f_a5eb_3fb27b3124da","name":"image2copy","depth":7,"type":13,"parentPortNumber":1,"parent":["3f60a0b1_38a9_45f2_bf6e_c6494fa65014"],"parentPort":[0],"childPortNumber":1,"children":["87cb5309_91a7_4ddc_a931_7ace20e49e0b"],"childrenPort":[0],"textureExGUID":"","textureGUID":"8232b5b711e72f946b2039e6c4f4f373","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":583.0,"y":1886.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":-0.015625,"y":-0.173828125},"r_angle":0.0,"s_scale":{"x":0.755859375,"y":0.576171875},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":1,"gapX":0.0,"loopY":1,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":0.3659999966621399,"b":0.0,"a":1.0},"op":3,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[1,3,0],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"ab152e72_55eb_4c9c_a117_18c6003391dd","name":"image6copy","depth":1,"type":13,"parentPortNumber":1,"parent":["f1ed31fd_be6a_4c17_9d89_83dde8941702"],"parentPort":[0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"9b21924c8bf77f74387d08a607de7a5d","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":778.0,"y":1548.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":-0.025313138961791993,"y":0.18567997217178346},"r_angle":0.0,"s_scale":{"x":0.7386264801025391,"y":0.45567089319229128},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":1,"gapX":0.0,"loopY":1,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[1,3,0],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","name":"color3","depth":3,"type":3,"parentPortNumber":1,"parent":["0a7e96b6_96de_4fed_aaf4_b3129ddf77dd"],"parentPort":[0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1023.0,"y":1106.0,"width":144.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":true,"color":{"r":3.0,"g":2.7690000534057619,"b":1.569000005722046,"a":1.0},"op":1,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[3],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"3839af3e_6192_4fee_a98c_246d93119f27","name":"color4copy","depth":3,"type":3,"parentPortNumber":1,"parent":["0a7e96b6_96de_4fed_aaf4_b3129ddf77dd"],"parentPort":[0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1023.0,"y":1254.0,"width":144.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":true,"color":{"r":3.0,"g":0.0,"b":0.0,"a":1.0},"op":1,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[3],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","name":"mixer5","depth":1,"type":12,"parentPortNumber":1,"parent":["469112aa_6040_4439_abab_559022ba2306"],"parentPort":[0,0],"childPortNumber":5,"children":["f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","3839af3e_6192_4fee_a98c_246d93119f27","ed425f5c_4df4_4427_aaec_328c5874f413","6f536931_6913_406f_986c_22ba015371fd","f1ed31fd_be6a_4c17_9d89_83dde8941702"],"childrenPort":[1,2,3,0,4],"textureExGUID":"","textureGUID":"fa3108da2fe38a748bfce58b4c9b5410","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1495.0,"y":966.0,"width":152.0,"height":80.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":-0.07421875},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":1.0,"pop_speed":-2.0,"pop_Param":"_pcg","pop_channel":0,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0,1,3],"inputType":[0,1,3],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[{"tex":{"instanceID":-127484},"frames":[{"time":0.20000000298023225,"value":1.0},{"time":0.30000001192092898,"value":0.0}]},{"tex":{"instanceID":-127486},"frames":[{"time":0.20000000298023225,"value":0.0},{"time":0.30000001192092898,"value":1.0}]},{"tex":{"instanceID":-127488},"frames":[{"time":0.30000001192092898,"value":1.0},{"time":1.0,"value":1.0}]},{"tex":{"instanceID":-127490},"frames":[{"time":0.30000001192092898,"value":1.0},{"time":1.0,"value":1.0}]}],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"fd2db3ed_d25a_4036_bc16_1bcdfb29d645","name":"alphacopy","depth":1,"type":5,"parentPortNumber":1,"parent":["6f536931_6913_406f_986c_22ba015371fd","201adce9_acc4_4326_a92e_481044bdd842","4a65c799_2d87_4381_b2d7_e5ebc9b6c229"],"parentPort":[0,0,0],"childPortNumber":1,"children":[],"childrenPort":[],"textureExGUID":"","textureGUID":"fa3108da2fe38a748bfce58b4c9b5410","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":108.0,"y":450.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":-0.07421875},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":true,"pop_min":0.0,"pop_max":1.0,"pop_startValue":1.0,"pop_speed":-2.0,"pop_Param":"_pcg","pop_channel":0,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[3],"inputType":[1],"dirty":true,"layerMask":{"mask":1179649,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","5ce89c57_5ba4_40fd_9859_990db2099d8e","bf47f09c_cf4a_4349_accd_c9f37191c133","c738e67e_d696_4406_a8b2_7d8578c3292d","f704c95b_333c_4233_805b_ab12d6d45adf","3f60a0b1_38a9_45f2_bf6e_c6494fa65014","c0dce0ee_588b_49dc_8559_06ffaacacca1","2f5a09a5_2c98_4c80_9349_fad8ebf312e6","87cb5309_91a7_4ddc_a931_7ace20e49e0b","feba9a05_baa9_423f_a5eb_3fb27b3124da","ab152e72_55eb_4c9c_a117_18c6003391dd","dc42631b_4577_4128_9e43_0592ac16284e","f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","3839af3e_6192_4fee_a98c_246d93119f27","0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","ed425f5c_4df4_4427_aaec_328c5874f413","9a991dff_5f77_4f47_ab59_b3ce2f1e20e4","6f536931_6913_406f_986c_22ba015371fd"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[{"tex":{"instanceID":0},"frames":[{"time":0.0,"value":1.0},{"time":0.20000000298023225,"value":1.0}]},{"tex":{"instanceID":0},"frames":[{"time":0.20000000298023225,"value":1.0},{"time":0.30000001192092898,"value":0.0}]},{"tex":{"instanceID":0},"frames":[{"time":0.20000000298023225,"value":0.0},{"time":0.30000001192092898,"value":1.0}]}],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"ed425f5c_4df4_4427_aaec_328c5874f413","name":"dummy1copy","depth":4,"type":9,"parentPortNumber":1,"parent":["0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","6f536931_6913_406f_986c_22ba015371fd"],"parentPort":[0,0,0,0],"childPortNumber":1,"children":[],"childrenPort":[0,0],"textureExGUID":"","textureGUID":"ffc5271eadeb95745bb342737d478577","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"8fb98a6035269e64a998f9b56828fc4f","spriteName":"RobotBoyIdle00","rect":{"serializedVersion":"2","x":638.0,"y":1413.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":-5.960464477539063e-8},"r_angle":0.0,"s_scale":{"x":0.5,"y":0.5},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"size","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":false,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0],"inputType":[1,3,0],"dirty":true,"layerMask":{"mask":2031617,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","bf47f09c_cf4a_4349_accd_c9f37191c133","c738e67e_d696_4406_a8b2_7d8578c3292d","3f60a0b1_38a9_45f2_bf6e_c6494fa65014","2f5a09a5_2c98_4c80_9349_fad8ebf312e6","87cb5309_91a7_4ddc_a931_7ace20e49e0b","feba9a05_baa9_423f_a5eb_3fb27b3124da","ab152e72_55eb_4c9c_a117_18c6003391dd","f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","3839af3e_6192_4fee_a98c_246d93119f27","0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","fd2db3ed_d25a_4036_bc16_1bcdfb29d645","6f536931_6913_406f_986c_22ba015371fd","201adce9_acc4_4326_a92e_481044bdd842","6a48cf7c_0459_435f_86f0_3cf92789e0f9","f1ed31fd_be6a_4c17_9d89_83dde8941702","4a65c799_2d87_4381_b2d7_e5ebc9b6c229"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":0.0,"nmf":"","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"6f536931_6913_406f_986c_22ba015371fd","name":"code24","depth":1,"type":14,"parentPortNumber":1,"parent":["0a7e96b6_96de_4fed_aaf4_b3129ddf77dd"],"parentPort":[0],"childPortNumber":2,"children":["fd2db3ed_d25a_4036_bc16_1bcdfb29d645","ed425f5c_4df4_4427_aaec_328c5874f413"],"childrenPort":[0,1],"textureExGUID":"","textureGUID":"","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1017.0,"y":954.0,"width":190.0,"height":100.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[1],"inputType":[0],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":2,"code":"BlendAlpha","codeParams":[{"n":"intensity","v":"","fv":0.0},{"n":"threshold","v":"","fv":0.0},{"n":"a","v":"","fv":0.0}],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"201adce9_acc4_4326_a92e_481044bdd842","name":"code24copy","depth":1,"type":14,"parentPortNumber":1,"parent":["9558c886_eb99_4adc_b2c1_6e3520137f23"],"parentPort":[0,0],"childPortNumber":2,"children":["e6075eb1_1799_469e_be3c_e28d6a9a3e35","fd2db3ed_d25a_4036_bc16_1bcdfb29d645"],"childrenPort":[1,0],"textureExGUID":"","textureGUID":"","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1020.0,"y":456.0,"width":190.0,"height":100.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[1],"inputType":[0],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":2,"code":"BlendAlpha","codeParams":[{"n":"intensity","v":"","fv":0.0},{"n":"threshold","v":"","fv":0.0},{"n":"a","v":"","fv":0.0}],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"6a48cf7c_0459_435f_86f0_3cf92789e0f9","name":"mask28","depth":1,"type":1,"parentPortNumber":1,"parent":["4a65c799_2d87_4381_b2d7_e5ebc9b6c229"],"parentPort":[0],"childPortNumber":1,"children":["89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b"],"childrenPort":[0],"textureExGUID":"","textureGUID":"e752e976e84d608499039290e0d53c0f","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1304.0,"y":161.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0,1,3],"inputType":[0,1,3],"dirty":false,"layerMask":{"mask":262144,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","bf47f09c_cf4a_4349_accd_c9f37191c133","c738e67e_d696_4406_a8b2_7d8578c3292d","3f60a0b1_38a9_45f2_bf6e_c6494fa65014","2f5a09a5_2c98_4c80_9349_fad8ebf312e6","87cb5309_91a7_4ddc_a931_7ace20e49e0b","feba9a05_baa9_423f_a5eb_3fb27b3124da","ab152e72_55eb_4c9c_a117_18c6003391dd","f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","3839af3e_6192_4fee_a98c_246d93119f27","0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","fd2db3ed_d25a_4036_bc16_1bcdfb29d645","ed425f5c_4df4_4427_aaec_328c5874f413","6f536931_6913_406f_986c_22ba015371fd","201adce9_acc4_4326_a92e_481044bdd842","f1ed31fd_be6a_4c17_9d89_83dde8941702","4a65c799_2d87_4381_b2d7_e5ebc9b6c229"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"f1ed31fd_be6a_4c17_9d89_83dde8941702","name":"mask29","depth":1,"type":1,"parentPortNumber":1,"parent":["0a7e96b6_96de_4fed_aaf4_b3129ddf77dd"],"parentPort":[0],"childPortNumber":1,"children":["ab152e72_55eb_4c9c_a117_18c6003391dd","3f60a0b1_38a9_45f2_bf6e_c6494fa65014"],"childrenPort":[0,0],"textureExGUID":"","textureGUID":"e752e976e84d608499039290e0d53c0f","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":988.0,"y":1551.0,"width":100.0,"height":130.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":1,"outputType":[0,1,3],"inputType":[0,1,3],"dirty":false,"layerMask":{"mask":262144,"strs":["469112aa_6040_4439_abab_559022ba2306","e6075eb1_1799_469e_be3c_e28d6a9a3e35","228bba07_f737_455f_a16b_0ae239fe3f4b","9558c886_eb99_4adc_b2c1_6e3520137f23","be305fff_8100_4f21_93f8_14826ed7808a","bb7d7875_894e_4b55_a25a_045d3d7e5d24","89b4d24b_bae6_4dfb_a2b0_ca0aeebf779b","bf47f09c_cf4a_4349_accd_c9f37191c133","c738e67e_d696_4406_a8b2_7d8578c3292d","3f60a0b1_38a9_45f2_bf6e_c6494fa65014","2f5a09a5_2c98_4c80_9349_fad8ebf312e6","87cb5309_91a7_4ddc_a931_7ace20e49e0b","feba9a05_baa9_423f_a5eb_3fb27b3124da","ab152e72_55eb_4c9c_a117_18c6003391dd","f7174d0f_3605_4960_beb5_a2f6d5ccf0e8","3839af3e_6192_4fee_a98c_246d93119f27","0a7e96b6_96de_4fed_aaf4_b3129ddf77dd","fd2db3ed_d25a_4036_bc16_1bcdfb29d645","ed425f5c_4df4_4427_aaec_328c5874f413","6f536931_6913_406f_986c_22ba015371fd","201adce9_acc4_4326_a92e_481044bdd842","6a48cf7c_0459_435f_86f0_3cf92789e0f9","4a65c799_2d87_4381_b2d7_e5ebc9b6c229"]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}},{"useNormal":false,"id":"4a65c799_2d87_4381_b2d7_e5ebc9b6c229","name":"mixer24","depth":1,"type":12,"parentPortNumber":1,"parent":["469112aa_6040_4439_abab_559022ba2306"],"parentPort":[0],"childPortNumber":3,"children":["fd2db3ed_d25a_4036_bc16_1bcdfb29d645","6a48cf7c_0459_435f_86f0_3cf92789e0f9","bb7d7875_894e_4b55_a25a_045d3d7e5d24"],"childrenPort":[0,1,2],"textureExGUID":"","textureGUID":"","useGray":false,"useCustomTexture":false,"textureGUIDGray":"","spriteGUID":"","spriteName":"","rect":{"serializedVersion":"2","x":1518.0,"y":20.0,"width":152.0,"height":80.0},"effectData":{"t_startMove":{"x":0.0,"y":0.0},"r_angle":0.0,"s_scale":{"x":1.0,"y":1.0},"t_speed":{"x":0.0,"y":0.0},"r_speed":0.0,"s_speed":{"x":0.0,"y":0.0},"t_Param":"_Time.y","r_Param":"_Time.y","s_Param":"_Time.y","pop_final":false,"pop_min":0.0,"pop_max":1.0,"pop_startValue":0.0,"pop_speed":0.0,"pop_Param":"(1)","pop_channel":3,"useLoop":true,"loopX":0,"gapX":0.0,"loopY":0,"gapY":0.0,"animationSheetUse":false,"animationSheetCountX":1,"animationSheetCountY":1,"animationSheetLoop":true,"animationSheetSingleRow":false,"animationSheetSingleRowIndex":0,"animationSheetStartFrame":0,"animationSheetFrameFactor":"_Time.y"},"effectDataColor":{"hdr":false,"color":{"r":1.0,"g":1.0,"b":1.0,"a":1.0},"op":0,"param":"(1)"},"effectDataUV":{"op":0,"param":"(1)","amountR":{"x":0.0,"y":0.0},"amountG":{"x":0.0,"y":0.0},"amountB":{"x":0.0,"y":0.0},"amountA":{"x":0.0,"y":0.0}},"maskChannel":0,"outputType":[0,1,3],"inputType":[0,1,3],"dirty":true,"layerMask":{"mask":0,"strs":[]},"layerPop_str":"","blurX":0.0,"blurY":0.0,"blurXParam":"(1)","blurYParam":"(1)","retro":0.0,"retroParam":"(1)","gradients":[{"tex":{"instanceID":-127510},"frames":[{"time":0.0,"value":0.0},{"time":1.0,"value":1.0}]},{"tex":{"instanceID":-127512},"frames":[{"time":0.0,"value":0.0},{"time":1.0,"value":1.0}]}],"codeType":0,"code":"","codeParams":[],"coordMode":0,"reso":1,"nm":false,"nmi":1.0,"nmf":"(1)","nmid":"","rd":{"mode":0,"d":{"v":{"x":0.0,"y":0.05000000074505806},"pre":false,"pb":0},"l":{"st":false,"bs":30,"pts":[]}}}],"clipValue":0.0,"fallback":"Standard","sn":"","pum":false,"ps":1.0,"psm":2.0}
Shader "Shader Weaver/border"{   
	Properties {   
		_Color ("Color", Color) = (1,1,1,1)
		_Color_ROOT ("Color ROOT", Color) = (1,1,1,1)
		_Color_dummy1 ("Color dummy1", Color) = (1,1,1,1)
		[HDR]_Color_color4 ("Color color4", Color) = (1.844303,0.9076673,0,1)
		[HDR]_Color_image6 ("Color image6", Color) = (2.639016,0,0,1)
		[HDR]_Color_image7 ("Color image7", Color) = (1.498039,1.490196,0.6352941,1)
		_Color_image2 ("Color image2", Color) = (1,1,1,1)
		_Color_image2copy ("Color image2copy", Color) = (1,0.366,0,1)
		_Color_image6copy ("Color image6copy", Color) = (1,1,1,1)
		[HDR]_Color_color3 ("Color color3", Color) = (3,2.769,1.569,1)
		[HDR]_Color_color4copy ("Color color4copy", Color) = (3,0,0,1)
		_Color_dummy1copy ("Color dummy1copy", Color) = (1,1,1,1)
		_MainTex ("_MainTex", 2D) = "white" { }
		_blurred ("_blurred", 2D) = "white" { }
		_wave3 ("_wave3", 2D) = "white" { }
		_wave ("_wave", 2D) = "white" { }
		_Noise ("_Noise", 2D) = "white" { }
		_flame ("_flame", 2D) = "white" { }
		_dotsFlame ("_dotsFlame", 2D) = "white" { }
		_fireBG ("_fireBG", 2D) = "white" { }
		_border_mask1 ("_border_mask1", 2D) = "white" { }
		bl2 ("bl2", Range(0,1)) = 0.09375
		size ("size", Range(0,1.5)) = 0.796875
		_pcg ("_pcg", Range(0,1)) = 0
	}   
	SubShader {   
		Tags {
			"Queue"="Transparent"
			"RenderType"="Transparent"
		}
		pass {   
			Blend SrcAlpha  OneMinusSrcAlpha   
			CGPROGRAM  
			#pragma vertex vert   
			#pragma fragment frag   
			#include "UnityCG.cginc"   
			fixed4 _Color;
			float4 _Color_ROOT;
			float4 _Color_dummy1;
			float4 _Color_color4;
			float4 _Color_image6;
			float4 _Color_image7;
			float4 _Color_image2;
			float4 _Color_image2copy;
			float4 _Color_image6copy;
			float4 _Color_color3;
			float4 _Color_color4copy;
			float4 _Color_dummy1copy;
			float4 _MainTex_ST;
			sampler2D _MainTex;   
			sampler2D _blurred;   
			sampler2D _wave3;   
			sampler2D _wave;   
			sampler2D _Noise;   
			sampler2D _flame;   
			sampler2D _dotsFlame;   
			sampler2D _fireBG;   
			sampler2D _border_mask1;   
			float bl2; 
			float size; 
			float _pcg; 
			struct appdata_t {
				float4 vertex   : POSITION;
				float4 color    : COLOR;
				float2 texcoord : TEXCOORD0;
			};
			struct v2f {   
				float4  pos : SV_POSITION;
				fixed4  color : COLOR;
				float2  _uv_MainTex : TEXCOORD0;
				float2  _uv_STD : TEXCOORD1;
			};   
			float BlendAddf(float base,float act){
				return min(base+act, 1.0);
			}

			float BlendSubstractf(float base,float act)
			{
				return max(base + act - 1.0, 0.0);
			}

			float BlendLightenf(float base,float act)
			{
				return max(base, act);
			}

			float BlendDarkenf(float base,float act)
			{
				return min(base,act);
			}

			float BlendLinearLightf(float base,float act)
			{
				return (act < 0.5 ? BlendSubstractf(base, (2.0 * act)) : BlendAddf(base, (2.0 * (act - 0.5))));
			}

			float BlendScreenf(float base,float act)
			{
				return (1.0 - ((1.0 - base) * (1.0 - act)));
			}

			float BlendOverlayf(float base,float act)
			{
				return (base < 0.5 ? (2.0 * base * act) : (1.0 - 2.0 * (1.0 - base) * (1.0 - act)));
			}

			float BlendSoftLightf(float base,float act)
			{
				return ((act < 0.5) ? (2.0 * base * act + base * base * (1.0 - 2.0 * act)) : (sqrt(base) * (2.0 * act - 1.0) + 2.0 * base * (1.0 - act)));
			}
			float BlendColorDodgef(float base,float act)
			{
				return 	((act == 1.0) ? base : min(base / (1.0 - act), 1.0));
			}
			float BlendColorBurnf(float base,float act)
			{
				return ((act == 0.0) ? base : max((1.0 - ((1.0 - base) / act)), 0.0));
			}
			float BlendVividLightf(float base,float act)
			{
				return ((act < 0.5) ? BlendColorBurnf(base, (2.0 * act)) : BlendColorDodgef(base, (2.0 * (act - 0.5))));
			}
			float BlendPinLightf(float base,float act)
			{
				return ((act < 0.5) ? BlendDarkenf(base, (2.0 * act)) : BlendLightenf(base, (2.0 *(act - 0.5))));
			}
			float BlendHardMixf(float base,float act)
			{
				return ((BlendVividLightf(base, act) < 0.5) ? 0.0 : 1.0);
			}
			float BlendReflectf(float base,float act)
			{
				return ((act == 1.0) ? act : min(base * base / (1.0 - act), 1.0));
			}


			float BlendDarkerColorf(float base,float act)
			{
				return clamp(base-(1-base)*(1-act)/act,0,1);
			}



			float3 BlendDarken(float3 base,float3 act)
			{
				return min(base,act);
			}
			float3 BlendColorBurn(float3 base, float3 act) 
			{
				return float3(BlendColorBurnf(base.r,act.r),BlendColorBurnf(base.g,act.g),BlendColorBurnf(base.b,act.b));
			}

			float3 BlendLinearBurn(float3 base,float3 act)
			{
				return max(base + act - 1,0);
			}


			//mine
			float3 BlendDarkerColor(float3 base,float3 act)
			{
				return (base.r+base.g+base.b)>(act.r+act.g+act.b)?act:base;
			}

			float3 BlendLighten(float3 base,float3 act)
			{
				return max(base, act);
			}
			float3 BlendScreen(float3 base,float3 act)
			{
				return float3(BlendScreenf(base.r,act.r),BlendScreenf(base.g,act.g),BlendScreenf(base.b,act.b));
			}
			float3 BlendColorDodge(float3 base,float3 act)
			{
				return float3(BlendColorDodgef(base.r,act.r),BlendColorDodgef(base.g,act.g),BlendColorDodgef(base.b,act.b));
			}
			float3 BlendLinearDodge(float3 base,float3 act)
			{
				return min(base+act, 1.0);
			}
	

		
			
			//mine
			float3 BlendLighterColor(float3 base,float3 act)
			{
				return (base.r+base.g+base.b)>(act.r+act.g+act.b)?base:act;
			}

			float3 BlendOverlay(float3 base,float3 act)
			{
				return  float3(BlendOverlayf(base.r,act.r),BlendOverlayf(base.g,act.g),BlendOverlayf(base.b,act.b));
			}
			float3 BlendSoftLight(float3 base,float3 act)
			{
				return float3(BlendSoftLightf(base.r,act.r),BlendSoftLightf(base.g,act.g),BlendSoftLightf(base.b,act.b));
			}
			float3 BlendHardLight(float3 base,float3 act)
			{
				return BlendOverlay(act, base);
			}
			float3 BlendVividLight(float3 base,float3 act)
			{
				return float3(BlendVividLightf(base.r,act.r),BlendVividLightf(base.g,act.g),BlendVividLightf(base.b,act.b));
			}
			float3 BlendLinearLight(float3 base,float3 act)
			{
				return float3(BlendLinearLightf(base.r,act.r),BlendLinearLightf(base.g,act.g),BlendLinearLightf(base.b,act.b));
			}
			float3 BlendPinLight(float3 base,float3 act)
			{
				return float3(BlendPinLightf(base.r,act.r),BlendPinLightf(base.g,act.g),BlendPinLightf(base.b,act.b));
			}
			float3 BlendHardMix(float3 base,float3 act)
			{
				return float3(BlendHardMixf(base.r,act.r),BlendHardMixf(base.g,act.g),BlendHardMixf(base.b,act.b));
			}
			float3 BlendDifference(float3 base,float3 act)
			{
				return abs(base - act);
			}
			float3 BlendExclusion(float3 base,float3 act)
			{
				return (base + act - 2.0 * base * act);
			}
			float3 BlendSubtract(float3 base,float3 act)
			{
				return max(base - act, 0.0);
			}
			/*
			** Hue, saturation, luminance
			*/

			float3 RGBToHSL(float3 color)
			{
				float3 hsl; // init to 0 to avoid warnings ? (and reverse if + remove first part)
				
				float fmin = min(min(color.r, color.g), color.b);    //Min. value of RGB
				float fmax = max(max(color.r, color.g), color.b);    //Max. value of RGB
				float delta = fmax - fmin;             //Delta RGB value

				hsl.z = (fmax + fmin) / 2.0; // Luminance

				if (delta == 0.0)		//This is a gray, no chroma...
				{
					hsl.x = 0.0;	// Hue
					hsl.y = 0.0;	// Saturation
				}
				else                                    //Chromatic data...
				{
					if (hsl.z < 0.5)
						hsl.y = delta / (fmax + fmin); // Saturation
					else
						hsl.y = delta / (2.0 - fmax - fmin); // Saturation
					
					float deltaR = (((fmax - color.r) / 6.0) + (delta / 2.0)) / delta;
					float deltaG = (((fmax - color.g) / 6.0) + (delta / 2.0)) / delta;
					float deltaB = (((fmax - color.b) / 6.0) + (delta / 2.0)) / delta;

					if (color.r == fmax )
						hsl.x = deltaB - deltaG; // Hue
					else if (color.g == fmax)
						hsl.x = (1.0 / 3.0) + deltaR - deltaB; // Hue
					else if (color.b == fmax)
						hsl.x = (2.0 / 3.0) + deltaG - deltaR; // Hue

					if (hsl.x < 0.0)
						hsl.x += 1.0; // Hue
					else if (hsl.x > 1.0)
						hsl.x -= 1.0; // Hue
				}

				return hsl;
			}

			float HueToRGB(float f1, float f2, float hue)
			{
				if (hue < 0.0)
					hue += 1.0;
				else if (hue > 1.0)
					hue -= 1.0;
				float res;
				if ((6.0 * hue) < 1.0)
					res = f1 + (f2 - f1) * 6.0 * hue;
				else if ((2.0 * hue) < 1.0)
					res = f2;
				else if ((3.0 * hue) < 2.0)
					res = f1 + (f2 - f1) * ((2.0 / 3.0) - hue) * 6.0;
				else
					res = f1;
				return res;
			}

			float3 HSLToRGB(float3 hsl)
			{
				float3 rgb;
				
				if (hsl.y == 0.0)
					rgb = float3(hsl.z, hsl.z, hsl.z); // Luminance
				else
				{
					float f2;
					
					if (hsl.z < 0.5)
						f2 = hsl.z * (1.0 + hsl.y);
					else
						f2 = (hsl.z + hsl.y) - (hsl.y * hsl.z);
						
					float f1 = 2.0 * hsl.z - f2;
					
					rgb.r = HueToRGB(f1, f2, hsl.x + (1.0/3.0));
					rgb.g = HueToRGB(f1, f2, hsl.x);
					rgb.b= HueToRGB(f1, f2, hsl.x - (1.0/3.0));
				}
				
				return rgb;
			}


			// Hue Blend mode creates the result color by combining the luminance and saturation of the base color with the hue of the blend color.
			float3 BlendHue(float3 base, float3 blend)
			{
				float3 baseHSL = RGBToHSL(base);
				return HSLToRGB(float3(RGBToHSL(blend).r, baseHSL.g, baseHSL.b));
			}

			// Saturation Blend mode creates the result color by combining the luminance and hue of the base color with the saturation of the blend color.
			float3 BlendSaturation(float3 base, float3 blend)
			{
				float3 baseHSL = RGBToHSL(base);
				return HSLToRGB(float3(baseHSL.r, RGBToHSL(blend).g, baseHSL.b));
			}

			// Color Mode keeps the brightness of the base color and applies both the hue and saturation of the blend color.
			float3 BlendColor(float3 base, float3 blend)
			{
				float3 blendHSL = RGBToHSL(blend);
				return HSLToRGB(float3(blendHSL.r, blendHSL.g, RGBToHSL(base).b));
			}

			// Luminosity Blend mode creates the result color by combining the hue and saturation of the base color with the luminance of the blend color.
			float3 BlendLuminosity(float3 base, float3 blend)
			{
				float3 baseHSL = RGBToHSL(base);
				return HSLToRGB(float3(baseHSL.r, baseHSL.g, RGBToHSL(blend).b));
			}

			float2 UV_RotateAround(float2 center,float2 uv,float rad)
			{
				float2 fuv = uv - center;
				float2x2 ma = float2x2(cos(rad),sin(rad),-sin(rad),cos(rad));
				fuv = mul(ma,fuv)+center;
				return fuv;
			}
			float4 Blur(sampler2D sam,float2 _uv,float2 offset,float4 rect,bool isSpriteTex)
			{
			    int num =12;
				float2 divi[12] = {float2(-0.326212f, -0.40581f),
				float2(-0.840144f, -0.07358f),
				float2(-0.695914f, 0.457137f),
				float2(-0.203345f, 0.620716f),
				float2(0.96234f, -0.194983f),
				float2(0.473434f, -0.480026f),
				float2(0.519456f, 0.767022f),
				float2(0.185461f, -0.893124f),
				float2(0.507431f, 0.064425f),
				float2(0.89642f, 0.412458f),
				float2(-0.32194f, -0.932615f),
				float2(-0.791559f, -0.59771f)};
				float4 col = float4(0,0,0,0);
				for(int i=0;i<num;i++)
				{
					float2 uv = _uv+ offset*divi[i];
					uv = float2(clamp(uv.x,rect.x,rect.x+rect.z),clamp(uv.y,rect.y,rect.y+rect.w));
					float4 c = tex2D(sam,uv);
					if(isSpriteTex)
						c.rgb*= 0.3 + 0.7*c.a;
					col += c;
				}
				col /= num;
				return col;
			}
			float2 Retro(float2 uv,float v)
			{
				uv = float2(uv.x - fmod(uv.x,v) + v*0.5 ,uv.y - fmod(uv.y,v) + v*0.5);
				return uv;
			}
			float2 UV_STD2Rect(float2 uv,float4 rect)
			{
				uv.x = lerp(rect.x,rect.x+rect.z, uv.x);
				uv.y = lerp(rect.y,rect.y+rect.w, uv.y);
				return uv;
			}
			float4 AnimationSheet_RectSub(float row,float col,float rowMax,float colMax)
			{
				float4 w = float4(0,0,0,0);
				w.x =  col/colMax;
				w.y =  row/rowMax;
				w.z =  1/colMax;
				w.w =  1/rowMax;
				return w;
			}
			float4 AnimationSheet_Rect(int numTilesX,int numTilesY,bool isLoop,bool singleRow,int rowIndex, int startFrame,float factor)
			{
				int count = singleRow? numTilesX : numTilesX*numTilesY;
				int f = factor;
				if(isLoop)
					f = (startFrame+f)%count;
				else
					f = clamp((startFrame+f),0,count-1);

				int row = singleRow? rowIndex : (f / numTilesX);
				row = numTilesY - 1 - row;
				int col = singleRow? f : f % numTilesX;
				return  AnimationSheet_RectSub(row,col,numTilesY,numTilesX);
			}
			float GradientEvaluate(float _listTime[3],float _listValue[3],float count,float pcg)
			{
				if(count==0)
					return 0;
				if(pcg<_listTime[0])
					return 0;
				if(pcg>_listTime[count-1])
					return 0;

				for(int i= 1;i<count;i++)
				{
					if(pcg <= _listTime[i])
					{
						float v1= _listValue[i-1];
						float v2= _listValue[i];
						float t1= _listTime[i-1];
						float t2= _listTime[i];
						return lerp(v1,v2, (pcg - t1) / (t2-t1));
					}
				}
				return 0;
			}
			float BlendAlpha( float a , float4 b )
			{
				return a*b.a;
			}
			float4 Contrast( float4 color , float4 blurred , float intensity , float threshold )
			{
				half4 difference = color - blurred;
				half4 signs = sign (difference);
				
				half4 enhancement = saturate (abs(difference) - threshold) * signs * 1.0/(1.0-threshold);
				color += enhancement * intensity;
				
				return color;
			}
			float2 FishEye( float2 uv , float size )
			{
				float2 m = float2(0.5, 0.5);
				float2 d = uv - m;
				float r = sqrt(dot(d, d));
				float amount = (2.0 * 3.141592653 / (2.0 * sqrt(dot(m, m)))) * (size*0.5+0.0001);
				float bind = sqrt(dot(m, m));
				uv = m + normalize(d) * tan(r * amount) * bind/ tan(bind * amount);
				return uv;
			}
			float4 Grayscale( float4 color , float rate )
			{
				fixed gray = Luminance(color.rgb);
				return lerp(color, float4(gray,gray,gray,color.a),rate);
			}
			float4 OldPhoto( float4 color , float rate )
			{
				// get intensity value (Y part of YIQ color space)
				fixed Y = dot (fixed3(0.299, 0.587, 0.114), color.rgb);
				
				// Convert to Sepia Tone by adding constant
				fixed4 sepiaConvert = float4 (0.191, -0.054, -0.221, 0.0);
				fixed4 output = sepiaConvert + Y;
				output.a = color.a;
				return lerp(color,output,rate);
			}
			float OneMinus( float a )
			{
				return 1-a;
			}
			float2 Pinch( float2 uv , float size )
			{
				float2 m = float2(0.5, 0.5);
				float2 d = uv - m;
				float r = sqrt(dot(d, d));
				float amount = (2.0 * 3.141592653 / (2.0 * sqrt(dot(m, m)))) * (-size+0.001);
				float bind = 0.5;
				uv = m + normalize(d) * atan(r * -amount * 16.0) * bind / atan(-amount * bind * 16.0);
				return uv;
			}
			float2 Ramp( float4 Color )
			{
				return float2(sqrt(Color.a),0.5);
			}
			float2 Twirl( float2 uv , float value , float posx , float posy , float radius )
			{
				value = value / (180/3.141592653);
				uv -= float2(posx,posy);
				float2 distortedOffset = UV_RotateAround(float2(0,0),uv,value);
				float2 tmp = uv / radius;
				float t = min (1, length(tmp));
				uv = lerp (distortedOffset, uv, t);
				uv += float2(posx,posy);
				return uv;
			}
			float2 Vortex( float2 uv , float value , float posx , float posy , float radius )
			{
				value = value / (180/3.141592653);
				uv -= float2(posx,posy);
				float angle = 1.0 - length(uv / radius);
				angle = max (0, angle);
				angle = angle * angle * value;
				float cosLength, sinLength;
				sincos (angle, sinLength, cosLength);
				
				float2 _uv;
				_uv.x = cosLength * uv[0] - sinLength * uv[1];
				_uv.y = sinLength * uv[0] + cosLength * uv[1];
				_uv += float2(posx,posy);
				return _uv;
			}
			v2f vert (appdata_t IN) {
				v2f OUT;   
				OUT.pos = UnityObjectToClipPos(IN.vertex);
				OUT.color = IN.color * _Color;
				OUT._uv_MainTex = TRANSFORM_TEX(IN.texcoord,_MainTex);
				OUT._uv_STD = TRANSFORM_TEX(IN.texcoord,_MainTex);  
				return OUT;
			}   
			float4 frag (v2f i) : COLOR {
				float4 color_border_mask1 = tex2D(_border_mask1,i._uv_STD);    
				float4 result = float4(0,0,0,0);
				float4 result2 = float4(0,0,0,0);
				float3 result3 = float3(0,0,0);
				float minA = 0;


				//====================================
				//============ color3 ============   
				float4 color_color3 = _Color_color3;


				//====================================
				//============ color4copy ============   
				float4 color_color4copy = _Color_color4copy;


				//====================================
				//============ dummy1copy ============   
				float2  uv_dummy1copy = i._uv_STD;
				float2 center_dummy1copy = float2(0.5,0.5);    
				uv_dummy1copy = uv_dummy1copy-center_dummy1copy;    
				uv_dummy1copy = uv_dummy1copy+fixed2(0,5.960464E-08);    
				uv_dummy1copy = uv_dummy1copy+fixed2(0,0)*(_Time.y);    
				uv_dummy1copy = UV_RotateAround(fixed2(0,0),uv_dummy1copy,0);    
				uv_dummy1copy = uv_dummy1copy/fixed2(0.5,0.5);    
				float2 dir_dummy1copy = uv_dummy1copy/length(uv_dummy1copy);    
				uv_dummy1copy = uv_dummy1copy-dir_dummy1copy*fixed2(0,0)*(size);    
				uv_dummy1copy = UV_RotateAround(fixed2(0,0),uv_dummy1copy,0*(_Time.y));    
				uv_dummy1copy = uv_dummy1copy+center_dummy1copy;    
				float4 rect_dummy1copy =  float4(1,1,1,1);
				float4 color_dummy1copy = tex2D(_MainTex,uv_dummy1copy);    
				color_dummy1copy = color_dummy1copy*_Color_dummy1copy;


				//====================================
				//============ alphacopy ============   
				float2  uv_alphacopy = i._uv_STD;
				float2 center_alphacopy = float2(0.5,0.5);    
				uv_alphacopy = uv_alphacopy-center_alphacopy;    
				uv_alphacopy = uv_alphacopy+fixed2(0,0);    
				uv_alphacopy = uv_alphacopy+fixed2(0,0.07421875)*(_Time.y);    
				uv_alphacopy = UV_RotateAround(fixed2(0,0),uv_alphacopy,0);    
				uv_alphacopy = uv_alphacopy/fixed2(1,1);    
				float2 dir_alphacopy = uv_alphacopy/length(uv_alphacopy);    
				uv_alphacopy = uv_alphacopy-dir_alphacopy*fixed2(0,0)*(_Time.y);    
				uv_alphacopy = UV_RotateAround(fixed2(0,0),uv_alphacopy,0*(_Time.y));    
				uv_alphacopy = uv_alphacopy+center_alphacopy;    
				float2 uv_alphacopyorgin = uv_alphacopy;
				uv_alphacopy = float2(uv_alphacopy.x >0 ?fmod(uv_alphacopy.x,1+0) : (1+0) - fmod(abs(uv_alphacopy.x),1+0), uv_alphacopy.y >0 ?fmod(uv_alphacopy.y,1+0): (1+0) - fmod(abs(uv_alphacopy.y),1+0));
				bool discard_alphacopy = false;
				if(uv_alphacopy.x>1 || uv_alphacopy.y>1)
					discard_alphacopy = true;
				float4 rect_alphacopy =  float4(1,1,1,1);
				float4 color_alphacopy = tex2D(_wave,uv_alphacopy);    
				if(discard_alphacopy == true) color_alphacopy = float4(0,0,0,0);
				float aplha_alphacopy = 1 +-2*(_pcg) + color_alphacopy.r;


				//====================================
				//============ code24 ============   
				float v_code24 = 0;
				v_code24 = BlendAlpha(aplha_alphacopy,color_dummy1copy);


				//====================================
				//============ image6copy ============   
				float2  uv_image6copy = i._uv_STD;
				float2 center_image6copy = float2(0.5,0.5);    
				uv_image6copy = uv_image6copy-center_image6copy;    
				uv_image6copy = uv_image6copy+fixed2(0.02531314,-0.18568);    
				uv_image6copy = uv_image6copy+fixed2(0,0)*(_Time.y);    
				uv_image6copy = UV_RotateAround(fixed2(0,0),uv_image6copy,0);    
				uv_image6copy = uv_image6copy/fixed2(0.7386265,0.4556709);    
				float2 dir_image6copy = uv_image6copy/length(uv_image6copy);    
				uv_image6copy = uv_image6copy-dir_image6copy*fixed2(0,0)*(_Time.y);    
				uv_image6copy = UV_RotateAround(fixed2(0,0),uv_image6copy,0*(_Time.y));    
				uv_image6copy = uv_image6copy+center_image6copy;    
				float2 uv_image6copyorgin = uv_image6copy;
				uv_image6copy = float2(uv_image6copy.x >0 ?fmod(uv_image6copy.x,1+0) : (1+0) - fmod(abs(uv_image6copy.x),1+0), uv_image6copy.y >0 ?fmod(uv_image6copy.y,1+0): (1+0) - fmod(abs(uv_image6copy.y),1+0));
				bool discard_image6copy = false;
				if(uv_image6copy.x>1 || uv_image6copy.y>1)
					discard_image6copy = true;
				if(uv_image6copyorgin.x<0)
					discard_image6copy = true;
				if(uv_image6copyorgin.x>1)
					discard_image6copy = true;
				if(uv_image6copyorgin.y<0)
					discard_image6copy = true;
				if(uv_image6copyorgin.y>1)
					discard_image6copy = true;
				float4 rect_image6copy =  float4(1,1,1,1);
				float4 color_image6copy = tex2D(_fireBG,uv_image6copy);    
				if(discard_image6copy == true) color_image6copy = float4(0,0,0,0);
				color_image6copy = color_image6copy*_Color_image6copy;


				//====================================
				//============ uv4 ============   
				float2  uv_uv4 = i._uv_STD;
				float2 center_uv4 = float2(0.5,0.5);    
				uv_uv4 = uv_uv4-center_uv4;    
				uv_uv4 = uv_uv4+fixed2(0.02673155,-0.2074244);    
				uv_uv4 = uv_uv4+fixed2(0.0002349019,-0.1391145)*(_Time.y);    
				uv_uv4 = UV_RotateAround(fixed2(0,0),uv_uv4,0);    
				uv_uv4 = uv_uv4/fixed2(0.7039866,0.4262746);    
				float2 dir_uv4 = uv_uv4/length(uv_uv4);    
				uv_uv4 = uv_uv4-dir_uv4*fixed2(0,0)*(_Time.y);    
				uv_uv4 = UV_RotateAround(fixed2(0,0),uv_uv4,0*(_Time.y));    
				uv_uv4 = uv_uv4+center_uv4;    
				float4 rect_uv4 =  float4(1,1,1,1);
				float4 color_uv4 = tex2D(_wave,uv_uv4);    
				uv_uv4 = -(color_uv4.r*fixed2(-0.0865497,0.110935) + color_uv4.g*fixed2(0.1575909,0.017185) + color_uv4.b*fixed2(0,0) +  color_uv4.a*fixed2(0,0));    


				//====================================
				//============ uv1 ============   
				float2  uv_uv1 = i._uv_STD;
				float2 center_uv1 = float2(0.5,0.5);    
				uv_uv1 = uv_uv1-center_uv1;    
				uv_uv1 = uv_uv1+fixed2(0.3632813,-0.09960938);    
				uv_uv1 = uv_uv1+fixed2(0,-0.1601563)*(_Time.y);    
				uv_uv1 = UV_RotateAround(fixed2(0,0),uv_uv1,0);    
				uv_uv1 = uv_uv1/fixed2(1.761719,1.170525);    
				float2 dir_uv1 = uv_uv1/length(uv_uv1);    
				uv_uv1 = uv_uv1-dir_uv1*fixed2(0,0)*(_Time.y);    
				uv_uv1 = UV_RotateAround(fixed2(0,0),uv_uv1,0*(_Time.y));    
				uv_uv1 = uv_uv1+center_uv1;    
				float4 rect_uv1 =  float4(1,1,1,1);
				float4 color_uv1 = tex2D(_wave,uv_uv1);    
				uv_uv1 = -(color_uv1.r*fixed2(0.01171851,0.484375) + color_uv1.g*fixed2(0.4179685,0.2851563) + color_uv1.b*fixed2(-0.4160159,0.3652344) +  color_uv1.a*fixed2(0,0));    


				//====================================
				//============ image2copy ============   
				float2  uv_image2copy = i._uv_STD;
				float2 center_image2copy = float2(0.5,0.5);    
				uv_image2copy = uv_image2copy-center_image2copy;    
				uv_image2copy = uv_image2copy+fixed2(0.015625,0.1738281);    
				uv_image2copy = uv_image2copy+fixed2(0,0)*(_Time.y);    
				uv_image2copy = UV_RotateAround(fixed2(0,0),uv_image2copy,0);    
				uv_image2copy = uv_image2copy/fixed2(0.7558594,0.5761719);    
				float2 dir_image2copy = uv_image2copy/length(uv_image2copy);    
				uv_image2copy = uv_image2copy-dir_image2copy*fixed2(0,0)*(_Time.y);    
				uv_image2copy = UV_RotateAround(fixed2(0,0),uv_image2copy,0*(_Time.y));    
				uv_image2copy = uv_image2copy+center_image2copy;    
				uv_image2copy = uv_image2copy + uv_uv1*1*((1));
				float2 uv_image2copyorgin = uv_image2copy;
				uv_image2copy = float2(uv_image2copy.x >0 ?fmod(uv_image2copy.x,1+0) : (1+0) - fmod(abs(uv_image2copy.x),1+0), uv_image2copy.y >0 ?fmod(uv_image2copy.y,1+0): (1+0) - fmod(abs(uv_image2copy.y),1+0));
				bool discard_image2copy = false;
				if(uv_image2copy.x>1 || uv_image2copy.y>1)
					discard_image2copy = true;
				if(uv_image2copyorgin.x<0)
					discard_image2copy = true;
				if(uv_image2copyorgin.x>1)
					discard_image2copy = true;
				if(uv_image2copyorgin.y<0)
					discard_image2copy = true;
				if(uv_image2copyorgin.y>1)
					discard_image2copy = true;
				float4 rect_image2copy =  float4(1,1,1,1);
				float4 color_image2copy = tex2D(_dotsFlame,uv_image2copy);    
				if(discard_image2copy == true) color_image2copy = float4(0,0,0,0);
				color_image2copy = color_image2copy*_Color_image2copy;


				//====================================
				//============ image2 ============   
				float2  uv_image2 = i._uv_STD;
				float2 center_image2 = float2(0.5,0.5);    
				uv_image2 = uv_image2-center_image2;    
				uv_image2 = uv_image2+fixed2(0.004615992,-0.1371127);    
				uv_image2 = uv_image2+fixed2(0,0)*(_Time.y);    
				uv_image2 = UV_RotateAround(fixed2(0,0),uv_image2,0);    
				uv_image2 = uv_image2/fixed2(0.3378972,0.2967525);    
				float2 dir_image2 = uv_image2/length(uv_image2);    
				uv_image2 = uv_image2-dir_image2*fixed2(0,0)*(_Time.y);    
				uv_image2 = UV_RotateAround(fixed2(0,0),uv_image2,0*(_Time.y));    
				uv_image2 = uv_image2+center_image2;    
				uv_image2 = uv_image2 + uv_uv4*1*((1));
				float4 rect_image2 =  float4(1,1,1,1);
				float4 color_image2 = tex2D(_flame,uv_image2);    
				color_image2 = color_image2*_Color_image2;


				//====================================
				//============ mixer5 ============   
				float mixer_mixer5 = 0;
				mixer_mixer5 = clamp(v_code24*1*((1)),0,1);
				mixer_mixer5 = clamp(mixer_mixer5,0,1);
				float gra_mixer5_0ListTime[3] = {0.2,0.3,-1};
				float gra_mixer5_0ListValue[3] = {1,0,-1};
				float gra_mixer5_0 = GradientEvaluate(gra_mixer5_0ListTime,gra_mixer5_0ListValue,2,mixer_mixer5);
				float gra_mixer5_1ListTime[3] = {0.2,0.3,-1};
				float gra_mixer5_1ListValue[3] = {0,1,-1};
				float gra_mixer5_1 = GradientEvaluate(gra_mixer5_1ListTime,gra_mixer5_1ListValue,2,mixer_mixer5);
				float gra_mixer5_2ListTime[3] = {0.3,1,-1};
				float gra_mixer5_2ListValue[3] = {1,1,-1};
				float gra_mixer5_2 = GradientEvaluate(gra_mixer5_2ListTime,gra_mixer5_2ListValue,2,mixer_mixer5);
				float gra_mixer5_3ListTime[3] = {0.3,1,-1};
				float gra_mixer5_3ListValue[3] = {1,1,-1};
				float gra_mixer5_3 = GradientEvaluate(gra_mixer5_3ListTime,gra_mixer5_3ListValue,2,mixer_mixer5);


				//====================================
				//============ color4 ============   
				float4 color_color4 = _Color_color4;


				//====================================
				//============ uv5copycopy ============   
				float2  uv_uv5copycopy = i._uv_STD;
				float2 center_uv5copycopy = float2(0.5,0.5);    
				uv_uv5copycopy = uv_uv5copycopy-center_uv5copycopy;    
				uv_uv5copycopy = uv_uv5copycopy+fixed2(-1.788139E-06,-3.576279E-07);    
				uv_uv5copycopy = uv_uv5copycopy+fixed2(-0.07206786,-0.1532952)*(_Time.y);    
				uv_uv5copycopy = UV_RotateAround(fixed2(0,0),uv_uv5copycopy,0);    
				uv_uv5copycopy = uv_uv5copycopy/fixed2(3,3);    
				float2 dir_uv5copycopy = uv_uv5copycopy/length(uv_uv5copycopy);    
				uv_uv5copycopy = uv_uv5copycopy-dir_uv5copycopy*fixed2(0,0)*(_Time.y);    
				uv_uv5copycopy = UV_RotateAround(fixed2(0,0),uv_uv5copycopy,0*(_Time.y));    
				uv_uv5copycopy = uv_uv5copycopy+center_uv5copycopy;    
				float2 uv_uv5copycopyorgin = uv_uv5copycopy;
				uv_uv5copycopy = float2(uv_uv5copycopy.x >0 ?fmod(uv_uv5copycopy.x,1+0) : (1+0) - fmod(abs(uv_uv5copycopy.x),1+0), uv_uv5copycopy.y >0 ?fmod(uv_uv5copycopy.y,1+0): (1+0) - fmod(abs(uv_uv5copycopy.y),1+0));
				bool discard_uv5copycopy = false;
				if(uv_uv5copycopy.x>1 || uv_uv5copycopy.y>1)
					discard_uv5copycopy = true;
				float4 rect_uv5copycopy =  float4(1,1,1,1);
				float4 color_uv5copycopy = tex2D(_Noise,uv_uv5copycopy);    
				if(discard_uv5copycopy == true) color_uv5copycopy = float4(0,0,0,0);
				uv_uv5copycopy = -(color_uv5copycopy.r*fixed2(-0.01,0.01) + color_uv5copycopy.g*fixed2(0,0.01) + color_uv5copycopy.b*fixed2(0.01,0.01) +  color_uv5copycopy.a*fixed2(0,0));    


				//====================================
				//============ dummy1 ============   
				float2  uv_dummy1 = i._uv_STD;
				float2 center_dummy1 = float2(0.5,0.5);    
				uv_dummy1 = uv_dummy1-center_dummy1;    
				uv_dummy1 = uv_dummy1+fixed2(0,0.008000016);    
				uv_dummy1 = uv_dummy1+fixed2(0,0)*(_Time.y);    
				uv_dummy1 = UV_RotateAround(fixed2(0,0),uv_dummy1,0);    
				uv_dummy1 = uv_dummy1/fixed2(0.475,0.48);    
				float2 dir_dummy1 = uv_dummy1/length(uv_dummy1);    
				uv_dummy1 = uv_dummy1-dir_dummy1*fixed2(0.03515625,0.03515625)*(size);    
				uv_dummy1 = UV_RotateAround(fixed2(0,0),uv_dummy1,0*(_Time.y));    
				uv_dummy1 = uv_dummy1+center_dummy1;    
				uv_dummy1 = uv_dummy1 + uv_uv5copycopy*1*((1));
				float4 rect_dummy1 =  float4(1,1,1,1);
				float4 color_dummy1 = float4(1,1,1,1);
				color_dummy1 = Blur(_MainTex,uv_dummy1,float2( 1*bl2*0.1 ,1*bl2*0.1)*rect_dummy1.zw,float4(0,0,1,1),false);
				color_dummy1 = color_dummy1*_Color_dummy1;


				//====================================
				//============ code24copy ============   
				float v_code24copy = 0;
				v_code24copy = BlendAlpha(aplha_alphacopy,color_dummy1);


				//====================================
				//============ mixer3 ============   
				float mixer_mixer3 = 0;
				mixer_mixer3 = clamp(v_code24copy*1*((1)),0,1);
				mixer_mixer3 = clamp(mixer_mixer3,0,1);
				float gra_mixer3_0ListTime[3] = {0,0.3833333,1};
				float gra_mixer3_0ListValue[3] = {0,1,1};
				float gra_mixer3_0 = GradientEvaluate(gra_mixer3_0ListTime,gra_mixer3_0ListValue,3,mixer_mixer3);


				//====================================
				//============ uv5copy ============   
				float2  uv_uv5copy = i._uv_STD;
				float2 center_uv5copy = float2(0.5,0.5);    
				uv_uv5copy = uv_uv5copy-center_uv5copy;    
				uv_uv5copy = uv_uv5copy+fixed2(-2.145767E-06,-2.384186E-07);    
				uv_uv5copy = uv_uv5copy+fixed2(-0.1103494,-0.3115232)*(_Time.y);    
				uv_uv5copy = UV_RotateAround(fixed2(0,0),uv_uv5copy,0);    
				uv_uv5copy = uv_uv5copy/fixed2(1.274019,1.189199);    
				float2 dir_uv5copy = uv_uv5copy/length(uv_uv5copy);    
				uv_uv5copy = uv_uv5copy-dir_uv5copy*fixed2(0,0)*(_Time.y);    
				uv_uv5copy = UV_RotateAround(fixed2(0,0),uv_uv5copy,0*(_Time.y));    
				uv_uv5copy = uv_uv5copy+center_uv5copy;    
				float2 uv_uv5copyorgin = uv_uv5copy;
				uv_uv5copy = float2(uv_uv5copy.x >0 ?fmod(uv_uv5copy.x,1+0) : (1+0) - fmod(abs(uv_uv5copy.x),1+0), uv_uv5copy.y >0 ?fmod(uv_uv5copy.y,1+0): (1+0) - fmod(abs(uv_uv5copy.y),1+0));
				bool discard_uv5copy = false;
				if(uv_uv5copy.x>1 || uv_uv5copy.y>1)
					discard_uv5copy = true;
				float4 rect_uv5copy =  float4(1,1,1,1);
				float4 color_uv5copy = tex2D(_wave,uv_uv5copy);    
				if(discard_uv5copy == true) color_uv5copy = float4(0,0,0,0);
				uv_uv5copy = -(color_uv5copy.r*fixed2(-0.1513693,0.1240232) + color_uv5copy.g*fixed2(-0.006838083,0.2138669) + color_uv5copy.b*fixed2(0.09667754,0.1005857) +  color_uv5copy.a*fixed2(0,0));    


				//====================================
				//============ image7 ============   
				float2  uv_image7 = i._uv_STD;
				float2 center_image7 = float2(0.5,0.5);    
				uv_image7 = uv_image7-center_image7;    
				uv_image7 = uv_image7+fixed2(7.152557E-07,-2.384186E-07);    
				uv_image7 = uv_image7+fixed2(0,0)*(_Time.y);    
				uv_image7 = UV_RotateAround(fixed2(0,0),uv_image7,0);    
				uv_image7 = uv_image7/fixed2(0.35,0.5);    
				float2 dir_image7 = uv_image7/length(uv_image7);    
				uv_image7 = uv_image7-dir_image7*fixed2(0.5123339,0.5123339)*(size);    
				uv_image7 = UV_RotateAround(fixed2(0,0),uv_image7,0*(_Time.y));    
				uv_image7 = uv_image7+center_image7;    
				uv_image7 = uv_image7 + uv_uv5copy*1*((1));
				float2 uv_image7orgin = uv_image7;
				uv_image7 = float2(uv_image7.x >0 ?fmod(uv_image7.x,1+0) : (1+0) - fmod(abs(uv_image7.x),1+0), uv_image7.y >0 ?fmod(uv_image7.y,1+0): (1+0) - fmod(abs(uv_image7.y),1+0));
				bool discard_image7 = false;
				if(uv_image7.x>1 || uv_image7.y>1)
					discard_image7 = true;
				if(uv_image7orgin.x<0)
					discard_image7 = true;
				if(uv_image7orgin.x>1)
					discard_image7 = true;
				if(uv_image7orgin.y<0)
					discard_image7 = true;
				if(uv_image7orgin.y>1)
					discard_image7 = true;
				float4 rect_image7 =  float4(1,1,1,1);
				float4 color_image7 = tex2D(_wave3,uv_image7);    
				if(discard_image7 == true) color_image7 = float4(0,0,0,0);
				color_image7 = color_image7*_Color_image7;


				//====================================
				//============ image6 ============   
				float2  uv_image6 = i._uv_STD;
				float2 center_image6 = float2(0.5,0.5);    
				uv_image6 = uv_image6-center_image6;    
				uv_image6 = uv_image6+fixed2(0.03770208,-0.007146478);    
				uv_image6 = uv_image6+fixed2(0,0)*(_Time.y);    
				uv_image6 = UV_RotateAround(fixed2(0,0),uv_image6,0);    
				uv_image6 = uv_image6/fixed2(1.048828,0.8765625);    
				float2 dir_image6 = uv_image6/length(uv_image6);    
				uv_image6 = uv_image6-dir_image6*fixed2(0.1,0.1)*((size-0.8));    
				uv_image6 = UV_RotateAround(fixed2(0,0),uv_image6,0*(_Time.y));    
				uv_image6 = uv_image6+center_image6;    
				float2 uv_image6orgin = uv_image6;
				uv_image6 = float2(uv_image6.x >0 ?fmod(uv_image6.x,1+0) : (1+0) - fmod(abs(uv_image6.x),1+0), uv_image6.y >0 ?fmod(uv_image6.y,1+0): (1+0) - fmod(abs(uv_image6.y),1+0));
				bool discard_image6 = false;
				if(uv_image6.x>1 || uv_image6.y>1)
					discard_image6 = true;
				if(uv_image6orgin.x<0)
					discard_image6 = true;
				if(uv_image6orgin.x>1)
					discard_image6 = true;
				if(uv_image6orgin.y<0)
					discard_image6 = true;
				if(uv_image6orgin.y>1)
					discard_image6 = true;
				float4 rect_image6 =  float4(1,1,1,1);
				float4 color_image6 = tex2D(_blurred,uv_image6);    
				if(discard_image6 == true) color_image6 = float4(0,0,0,0);
				color_image6 = color_image6*_Color_image6;


				//====================================
				//============ mixer24 ============   
				float mixer_mixer24 = 0;
				mixer_mixer24 = clamp(aplha_alphacopy*1*((1)),0,1);
				mixer_mixer24 = clamp(mixer_mixer24,0,1);
				float gra_mixer24_0ListTime[3] = {0,1,-1};
				float gra_mixer24_0ListValue[3] = {0,1,-1};
				float gra_mixer24_0 = GradientEvaluate(gra_mixer24_0ListTime,gra_mixer24_0ListValue,2,mixer_mixer24);
				float gra_mixer24_1ListTime[3] = {0,1,-1};
				float gra_mixer24_1ListValue[3] = {0,1,-1};
				float gra_mixer24_1 = GradientEvaluate(gra_mixer24_1ListTime,gra_mixer24_1ListValue,2,mixer_mixer24);


				//====================================
				//============ ROOT ============   
				float2  uv_ROOT = i._uv_STD;
				float2 center_ROOT = float2(0.5,0.5);    
				uv_ROOT = uv_ROOT-center_ROOT;    
				uv_ROOT = uv_ROOT+fixed2(0,0);    
				uv_ROOT = uv_ROOT+fixed2(0,0)*(_Time.y);    
				uv_ROOT = UV_RotateAround(fixed2(0,0),uv_ROOT,0);    
				uv_ROOT = uv_ROOT/fixed2(1,1);    
				float2 dir_ROOT = uv_ROOT/length(uv_ROOT);    
				uv_ROOT = uv_ROOT-dir_ROOT*fixed2(0,0)*(_Time.y);    
				uv_ROOT = UV_RotateAround(fixed2(0,0),uv_ROOT,0*(_Time.y));    
				uv_ROOT = uv_ROOT+center_ROOT;    
				float4 rect_ROOT =  float4(1,1,1,1);
				float4 color_ROOT = tex2D(_MainTex,uv_ROOT);    
				float4 rootTexColor = color_ROOT;
				color_ROOT = color_ROOT*_Color_ROOT;
				result = float4(color_image6.rgb,color_image6.a*1*((1))*gra_mixer24_1);
				result = lerp(result,float4(color_image6copy.rgb,1),clamp(color_image6copy.a*1*((1))*color_border_mask1.g*gra_mixer5_3,0,1));    
				result = lerp(result,float4(color_color4.rgb,1),clamp(color_color4.a*1*((1))*gra_mixer3_0,0,1));    
				result = lerp(result,float4(color_image7.rgb,1),clamp(color_image7.a*1*((-1.4+size*2))*color_border_mask1.r*gra_mixer24_0,0,1));    
				result = lerp(result,float4(color_color3.rgb,rootTexColor.a),clamp(color_color3.a*1*((1))*gra_mixer5_0,0,1));    
				result = lerp(result,float4(color_color4copy.rgb,rootTexColor.a),clamp(color_color4copy.a*1*((1))*gra_mixer5_1,0,1));    
				result = lerp(result,float4(color_dummy1copy.rgb,1),clamp(color_dummy1copy.a*1*((1))*gra_mixer5_2,0,1));    
				result = lerp(result,float4(color_image2.rgb,1),clamp(color_image2.a*1*((1))*color_border_mask1.g*gra_mixer5_3,0,1));    
				result = result+float4(color_image2copy.rgb*color_image2copy.a*1*((1))*color_border_mask1.g*gra_mixer5_3,color_image2copy.a*1*((1))*color_border_mask1.g*gra_mixer5_3*(rootTexColor.a - result.a));
				result = result*i.color;
				clip(result.a - 0);
				return result;
			}  
			ENDCG
		}
	}
	fallback "Standard"
}
