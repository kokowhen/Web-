import os

for i in range(11,31):
    file = open("10-"+ str(i) + ".md","w")
    file.write("# 今天要做的事\n")
    file.write("- \n")
    file.write("- \n")
    file.write("# 完成情况\n")
    file.write("- \n")
    file.write("- \n")