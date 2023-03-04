# option-recorder
プログラムに与えられた引数を記録します。

## 使用例
> Bash: 実行
> 
> ```ps1
> $ ./option-recorder.exe arg1 arg2 -v
> Writing to C:\Users\minan\log.txt...
> Writing completed.
> ```

> Powershell: 実行結果を見る
> 
> ```ps1
> cat "$env:userprofile\log.txt"
> ARGV[0]: option-recorder.exe
> ARGV[1]: arg1
> ARGV[2]: arg2
> ARGV[3]: -v
> ```

## 開発環境
WSL2 で開発

```bash
sudo apt install gcc-mingw-w64-x86-64
```

## コンパイル
```bash
make
```
