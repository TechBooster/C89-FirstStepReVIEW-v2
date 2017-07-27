={writing-book} 技術書を書くための要求仕様

#@# NOTE author:mhidaka

本章では、TechBoosterがお勧めする「Re:VIEW」を使ったエンジニア向けの執筆・編集スタイルを紹介します。
自然言語による文章もプログラムを書くのと大差ないな！と思っていただければ幸いです。

== Re:VIEWとは

#@# NOTE author:mhidaka

@<kw>{Re:VIEW,レビュー}は、書籍制作のためのツールセットです。

技術書は、知識を体系的にまとめ読者の興味関心を誘引するもっともポピュラーな手段ですが、執筆や編集については独自のノウハウがあり、統一したものが存在していません。
書籍制作は本来、手作業が多く専門知識を必要とする、ハードルの高い領域なのです。

しかしRe:VIEWを使えば、これまでよりずっと手軽に技術書を作ることができます。

本を作る工程を@<img>{review-cover}に示します。

//image[review-cover][Re:VIEWがカバーする領域]{
//}

ご覧のとおり「Re:VIEW」は「執筆」「校正」「組版」「製版」までと、非常に幅広い範囲をサポートします。

TechBoosterではRe:VIEWを使うことで効率的に文書管理、執筆環境を構築できるようになりました@<fn>{products}。

//footnote[products][制作する書籍は年間12冊超、述べ2000ページ超を数えます。ヤバすぎ]

=={requirement} 本を作るための技術的要求

#@# NOTE author:vvakame

わたしたちが考える、技術書を書くためにあるとよい機能を挙げます。

 * 文書の共有とリビジョン管理がしやすい
 * コメントを利用できる
 * HTMLやPDF、EPUBなど複数の形式に変換できる
 * 文書の構造と見た目（スタイル）が分離されている

#@# REVIEW vv: 外部のツール（prhなど）と連携しやすい も追加したい気もするがトップレベルでもないなぁ

世の中にはRe:VIEW以外にも、Microsoft Wordなどのワープロソフトや、Markdown、textile、reStructuredText、AsciiDoc、LaTeX、Sphinxなどのマークアップまで、さまざまな形式があります。
この中から、これらの条件にマッチしないものは避けたほうがよいというのがわたしたちの考えです。

=== 文書の共有とリビジョン管理がしやすい

プログラムのソースコードと同様に、文書もリビジョン管理ができると便利です。
リビジョン管理があれば、いらないのではないか？と思った節をバッサリ削ることも気軽にできます。
また、いつ誰がどう変更したかを追跡できたり、どのくらいの分量を書いたかが分かるのは想像以上のメリットです。

=== コメントを利用できる

コメントは、メモを書き残す時、他人の原稿にレビューを書き込む時に使います。
たとえばIssueに@<code>{原稿の○行目に対する指摘 > わかる→分かる に置き換え}といちいち指摘を書くのは、やるのも苦行、Issueと原稿を見比べて反映するのも苦行です。

原稿とレビュー結果を別々の場所に置くべきではないと、わたしたちは考えています。
レビュー結果はコメントを使い、原稿にインラインに書き込んでいくスタイルを推奨しています。

=== HTMLやPDF、EPUBなど複数の形式に変換できる

執筆した文書をWebサイトとして公開したい場合、印刷所に入稿したい場合、電子書籍として配布したい場合など、用途に応じたフォーマットに変換しなくてはなりません。
そのため、なるべくたくさんの形式に変換できるものがよいでしょう。

=== 文書の構造と見た目（スタイル）が分離されている

たとえば章タイトルの文字を大きく強調したい時を考えます。
該当行を見出しという文書構造だと設定して、そのスタイルを適用する方法と、文字を単に大きく太く装飾する方法は構造としてはまったく違います。
両者を比べると見た目としては変わりがないため、単に文字を大きく装飾してしまう人がエンジニアでもかなりの数がいます。
とくにWordやGoogle DocsのドキュメントといったGUIツールで顕著です。

つまり、文書の質を上げるには、ツールを使う人の練度に左右されにくい、構造と見た目が分離されたフォーマットを使うべきなのです。
構造化された文書は見出しのスタイルを一括で変更したり、目次を生成することが簡単にできます。
執筆者全員を教育してこの問題を乗り越えることもできますが、それよりも根本的に構造とスタイルが分離されているツールを使うほうが楽です。

== TechBoosterがRe:VIEWを勧める理由

Re:VIEWは、@<hd>{requirement}に述べた理由をすべて満たします。

Re:VIEWでは本文をプレーンテキストファイルで執筆するので、Gitなどを使ってリビジョンを管理できます。
そのままGitHubなどを通じて作業するだけでなくTravis CIやCircle CI、その他Re:VIEW専用CI「@<kw>{Griflet, グリフレット}」を利用できます。
またHTMLやPDF、EPUBやMarkdownといった主要な形式への変換にも対応しています。
さらに、文書の構造と見た目が十分に分離されているので、原稿ができてから見た目を調整できます。

そしてRe:VIEWは、出版を生業としている方々が作っているので「本を書くための工夫」がたくさん詰まっています。
日本人が作っているツールだけあって、日本固有の事情も考慮されているので、今までたくさんの本の製作に使われてきた実績@<fn>{archievement}があり、そうそう落とし穴に落ちたりすることもありません。

わたしたちはRe:VIEWを使うだけで、先人たちの知恵を活用できるのです。

//footnote[archievement][Re:VIEWの利用実績 @<href>{https://github.com/kmuto/review/wiki/%E5%88%A9%E7%94%A8%E5%AE%9F%E7%B8%BE}]


== 同人誌向けのRe:VIEW構成を使用する

Re:VIEWは優れた書籍制作ツールですが、そのままでは入稿できません。
印刷所ごとに紙面レイアウトに入稿条件があり、それらを満たす必要があるからです。

たとえば多くの印刷所ではノンブル（ページの通し番号）が必須です。乱丁を防ぐ目的で導入されていますが、これは同人誌独特のルールで、標準のRe:VIEWでは対応していません。

それら入稿データを作成するはじめの一歩として、TechBoosterでは現実世界の例として本書のリポジトリを公開しています。
ノンブルもサポートしつつ、見やすいレイアウトに変更しています（本書も全ページに通し番号がついています）。

#@# prh:disable
 * @<href>{https://github.com/TechBooster/C89-FirstStepReVIEW-v2}

同人誌制作がはじめてという場合は上記リポジトリからのCloneを@<b>{強く推奨}します。

このリポジトリでは、B5（JIS）サイズでノンブルを追加した専用レイアウトを使用しています。
後述の方法で日光企画さんに入稿経験のあるサンプルプロジェクトです。はじめての執筆で利用するにはうってつけです。
#@# C92で判型変えるならここんとこメンテする必要がある
#@# C92でも判型維持でいくか

しかしながらすべての印刷所で大丈夫とは限りません。印刷所ごとに入稿ルールは異なります。
入稿に先立ってサンプルを用意し、印刷所の指示にしたがって入稿データを作成してください。
大抵の印刷所は初心者に対して十分に優しく、トライアンドエラーで一緒に先に進む手伝いをしてくれるでしょう。
印刷所が変わる場合は、きっとカスタマイズが必要です。そのための雛形として活用してください。
本書のリポジトリは一番手間がかかるノンブルの問題を解消しているので、すべてを自分で解決するよりは楽なはずです。
