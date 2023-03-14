================================================================================
EPSON Advanced Printer Driver 6 for TM-T20X

                                Copyright (C) 2019-2021 Seiko Epson Corporation
================================================================================

1. 本ソフトウェアについて
    本パッケージはTM Seriesプリンターを使用する上で、以下のソフトウェアを提供するものです。

    1) Windows Printer Driver
        Microsoft Windows上でTM Seriesプリンターに印刷するためのプリンタードライバーです。

    2) OS
        以下のOSをサポートしています。

        Windows 10
        Windows 8.1
        Windows 8
        Windows 7 SP1
        Windows Server 2019
        Windows Server 2016
        Windows Server 2012 R2
        Windows Server 2012
        Windows Server 2008 R2 SP1
        Windows Server 2008 SP2
        Windows Embedded 8.1 Industry
        Windows Embedded Standard 7
        Windows Embedded POSReady 7

    3) サポートプリンター
        EPSON TM-T20X

        プリンターのファームウェアバージョンによる、動作制限はありません。


2．提供ファイル
    - APD_604_T20X_WM.zip               : 各種マニュアルとインストーラーをまとめたもの
        +--- APD_604_T20X.exe           : インストーラー
        +--- APD6_Install_jp_revC.pdf   : 導入ガイド
        +--- APD6_Printer_jp_revB.pdf   : 使い方ガイド
        +--- APD6_Spec_T20X_jp_revA.pdf : プリンター仕様
        +--- README_JP.txt              : 本ドキュメント

    Printer Driverのインストール方法は、同梱の導入ガイドを参照ください｡


3. その他留意点
    1) 使用方法、使用上の注意、等の詳細は、マニュアルを参照し､ご使用ください｡

    2) インストール途中でエラーが表示された場合、以下の手順を実行する事で、回復できる場合があります。
       1./uninstallオプションを指定してインストーラーを実行してください。 APD_604_T20X.exe /uninstall
       2.エラーとなる要因を取り除いてください。
       3.インストーラーを実行してください。 APD_604_T20X.exe

    3) ネットワークプリンターを複数のホストから共有して使用する場合には、プリンタードライバーのバージョン
       をそろえてください。

    4) StatusAPIをご使用になる場合は、StatusAPI for EPSON Advanced Printer Driver 6を別途インストールしてください。


4. 旧バージョンからの変更点
    Ver6.04
        - 以下の不具合を修正しました。
            - 多言語フォントで半角文字を印刷する際、最大印刷幅まで印刷できない場合がある。

    Ver6.01R1
        - 新規リリース
