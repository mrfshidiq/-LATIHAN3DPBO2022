# Import
from Processor import Processor
from Disk import Disk
from Ram import Ram
# deklarasi kelas
class Pc:
    # atribut
    __oproc = Processor()
    __oram = Ram()
    __odisk = Disk()
    __totalprice = 0

    # method dan konstruktor
    def __init__(self):
        self.__oproc = Processor()
        self.__oram = Disk()
        self.__odisk = Ram()
        self.__totalprice = 0
    #  get dans set semua variabel
    def settotalprice(self, totalprice):
        self.__totalprice = totalprice
    def gettotalprice(self):
        return self.__totalprice

    def setdisk(self, Disk):
        self.__odisk = Disk
    def getdisk(self):
        return self.__odisk
    def setram(self, Ram):
        self.__oram = Ram
    def getram(self):
        return self.__oram
    def setproc(self, Proc):
        self.__oproc = Proc
    def getproc(self):
        return self.__oproc
    # method tampilkan
    def printpc(self):
        print("Processor Name : " + self.__oproc.getname())
        print("Processor Price : " + str(self.__oproc.getprice()))
        print("Disk Type : " + self.__odisk.gettype())
        print("Disk Capacity : " + self.__odisk.getcapacity())
        print("Disk Price : " + str(self.__odisk.getprice()))
        print("Ram Capacity : " + self.__oram.getcapacity())
        print("Ram Price : " + str(self.__oram.getprice()))
        print("total price: " + str(self.__totalprice))