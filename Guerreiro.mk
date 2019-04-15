##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Guerreiro
ConfigurationName      :=Debug
WorkspacePath          :=C:/MedievalGame
ProjectPath            :=C:/MedievalGame/Guerreiro
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Arthur Leite
Date                   :=18/04/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="Guerreiro.txt"
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
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
UNIT_TEST_PP_SRC_DIR:=C:\UnitTest++-1.3
Objects0=$(IntermediateDirectory)/Guerreiro.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Armadura.cpp$(ObjectSuffix) $(IntermediateDirectory)/Itens.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/Guerreiro.cpp$(ObjectSuffix): Guerreiro.cpp $(IntermediateDirectory)/Guerreiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MedievalGame/Guerreiro/Guerreiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Guerreiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Guerreiro.cpp$(DependSuffix): Guerreiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Guerreiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Guerreiro.cpp$(DependSuffix) -MM Guerreiro.cpp

$(IntermediateDirectory)/Guerreiro.cpp$(PreprocessSuffix): Guerreiro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Guerreiro.cpp$(PreprocessSuffix) Guerreiro.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MedievalGame/Guerreiro/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Armadura.cpp$(ObjectSuffix): Armadura.cpp $(IntermediateDirectory)/Armadura.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MedievalGame/Guerreiro/Armadura.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Armadura.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Armadura.cpp$(DependSuffix): Armadura.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Armadura.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Armadura.cpp$(DependSuffix) -MM Armadura.cpp

$(IntermediateDirectory)/Armadura.cpp$(PreprocessSuffix): Armadura.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Armadura.cpp$(PreprocessSuffix) Armadura.cpp

$(IntermediateDirectory)/Itens.cpp$(ObjectSuffix): Itens.cpp $(IntermediateDirectory)/Itens.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MedievalGame/Guerreiro/Itens.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Itens.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Itens.cpp$(DependSuffix): Itens.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Itens.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Itens.cpp$(DependSuffix) -MM Itens.cpp

$(IntermediateDirectory)/Itens.cpp$(PreprocessSuffix): Itens.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Itens.cpp$(PreprocessSuffix) Itens.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


