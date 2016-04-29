from random import *
import urllib.request
def download_image(url):
    name=randint(1,1000)
    fullname=str(name)+".jpg"
    urllib.request.urlretrieve(url,fullname)

download_image("https://i.ytimg.com/vi/44ef7C0HHZM/maxresdefault.jpg")
