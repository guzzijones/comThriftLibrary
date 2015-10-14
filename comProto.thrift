namespace cpp comProto

struct result{

   1: string stdOut
   2: string stdErr
   3: i32 error

}
struct execWParms{
   1: string command
   2: list<string> parms

}
struct file{
   1: string name
   2: double size=-1
   3: string modifiedDate=''
   4: string owner=''
   5: string group=''
}
struct directory {
   1: list<file> files=[]
   2: file dirName
}

service distData{

   result runCmd(1:string command);
   result runCmdWParms(1:execWParms command);
   i32 ping();
   directory listFilesDir(1:string DirPath,2: string workingDir='');
   result mvFile(1:string FileName,2:string workingDir='',3:string newFile);


}
