# Private Class Data

Os dados tem que ser usados apenas pela classe que possui os dados.  
Algum exemplo legal:

Aplicação de Streaming: Os dados do vídeo são recuperados por uma API externa
a partir de um identificador, como há diversas opções de vídeo, cada resposta da
lista é armazenada em um VideoData privado dentro da Classe VideoInterface, podendo
escolher a resolução e definir a url do vídeo a ser "streamado".  

VideoInterface:
 - getAvailableResolutions();
 - setResolution();
 - getCurrentVideoSize();
 - getCurrentVideoResolution();
 - videoData: VideoData[]

// Atenção, os dados do Private Class Data **devem** ser imutáveis  zl
VideoData:
 - width
 - height
 - videoName
 - url
 - size // Size in mb