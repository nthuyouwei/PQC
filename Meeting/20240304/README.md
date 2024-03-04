# 事項: 分析 keygen、sign、vrfy   ([hackmd](https://hackmd.io/@vic9112/By69dSXa6))
# 分工表:
根據之前paper讀的內容大致分以下

Keygen(NTRU): 祐瑋、彥智

sign(ffsampling): Vic 、柏翰

vrfy(NTT) : 昇達、育碩

# 參考資料
## papers


## source code


# 分析輔助工具
## Callgraph
這裡利用 reference code 中test_falcon.c中三個test function來跑call graph 

```
cd PQC/Meeting/20240304/CallGraph
kcachegrind test_xxxxx.out.xxxxx  //對應的檔案，(記得先載kcachegrind，詳如[此](https://github.com/nthuyouwei/PQC/tree/main/Meeting/20240220))
```

## Vitis_hls
我把   中的hlscode放進去vitis_hls，可以直接叫vitis_hls然後利用GUI介面來open project (選hls_ip這個資料夾open就可)

tb中有kengen、 sign、 vrfy可以跑csim.

跑csynthesis時記得改對應的top funtion.
