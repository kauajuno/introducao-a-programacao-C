import os

parent_dir = "C:/Users/kauaj/Desktop/Estudos/IPfromScratch/exercícios/"

# Path
for i in range(164):
    directory = f"ex{i+1}"
    path = os.path.join(parent_dir, directory)

    os.mkdir(path)
    print("Directory '% s' created" % directory)


for i in range(164):
    with open(f"ex{i+1}/ex{i+1}.c", mode='w') as f:
        f.write("#include <stdio.h>\n\nint main(){}")
