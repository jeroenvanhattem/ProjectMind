##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Project
ConfigurationName      :=Debug
WorkspacePath          :=D:/School/2015-2016/Blok_4/IPASS
ProjectPath            :=D:/School/2015-2016/Blok_4/IPASS/Project
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jeroen
Date                   :=15/06/2016
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="D:/GNU Compiler/bin/arm-none-eabi-g++.exe"
SharedObjectLinkerName :="D:/GNU Compiler/bin/arm-none-eabi-g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Project.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "D:/GNU Compiler/bin/arm-none-eabi-ar.exe" rcu
CXX      := "D:/GNU Compiler/bin/arm-none-eabi-g++.exe"
CC       := "D:/GNU Compiler/bin/arm-none-eabi-gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "D:/GNU Compiler/bin/arm-none-eabi-as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/wheels.cpp$(ObjectSuffix) $(IntermediateDirectory)/infrared.cpp$(ObjectSuffix) $(IntermediateDirectory)/lights.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/School/2015-2016/Blok_4/IPASS/Project/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/wheels.cpp$(ObjectSuffix): wheels.cpp $(IntermediateDirectory)/wheels.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/School/2015-2016/Blok_4/IPASS/Project/wheels.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wheels.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wheels.cpp$(DependSuffix): wheels.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/wheels.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/wheels.cpp$(DependSuffix) -MM "wheels.cpp"

$(IntermediateDirectory)/wheels.cpp$(PreprocessSuffix): wheels.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wheels.cpp$(PreprocessSuffix) "wheels.cpp"

$(IntermediateDirectory)/infrared.cpp$(ObjectSuffix): infrared.cpp $(IntermediateDirectory)/infrared.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/School/2015-2016/Blok_4/IPASS/Project/infrared.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/infrared.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/infrared.cpp$(DependSuffix): infrared.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/infrared.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/infrared.cpp$(DependSuffix) -MM "infrared.cpp"

$(IntermediateDirectory)/infrared.cpp$(PreprocessSuffix): infrared.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/infrared.cpp$(PreprocessSuffix) "infrared.cpp"

$(IntermediateDirectory)/lights.cpp$(ObjectSuffix): lights.cpp $(IntermediateDirectory)/lights.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/School/2015-2016/Blok_4/IPASS/Project/lights.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/lights.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/lights.cpp$(DependSuffix): lights.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/lights.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/lights.cpp$(DependSuffix) -MM "lights.cpp"

$(IntermediateDirectory)/lights.cpp$(PreprocessSuffix): lights.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/lights.cpp$(PreprocessSuffix) "lights.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


