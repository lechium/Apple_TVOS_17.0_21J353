//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLCompileOptions.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MTLCompileOptionsInternal : MTLCompileOptions
{
    _Bool _userSetLanguageVersion;	// 8 = 0x8
    NSDictionary *_preprocessorMacros;	// 16 = 0x10
    _Bool _fastMathEnabled;	// 24 = 0x18
    _Bool _glBufferBindPoints;	// 25 = 0x19
    _Bool _tracingEnabled;	// 26 = 0x1a
    _Bool _debuggingEnabled;	// 27 = 0x1b
    unsigned long long _languageVersion;	// 32 = 0x20
    _Bool _compileTimeStatisticsEnabled;	// 40 = 0x28
    NSString *_additionalCompilerArguments;	// 48 = 0x30
    unsigned char _sourceLanguage;	// 56 = 0x38
    long long _libraryType;	// 64 = 0x40
    NSArray *_libraries;	// 72 = 0x48
    NSString *_installName;	// 80 = 0x50
    _Bool _preserveInvariance;	// 88 = 0x58
    long long _optimizationLevel;	// 96 = 0x60
    long long _compileSymbolVisibility;	// 104 = 0x68
    _Bool _allowReferencingUndefinedSymbols;	// 112 = 0x70
    unsigned long long _maxTotalThreadsPerThreadgroup;	// 120 = 0x78
}

- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;	// IMP=0x00000000000ce712
- (unsigned long long)maxTotalThreadsPerThreadgroup;	// IMP=0x00000000000ce701
- (void)setAllowReferencingUndefinedSymbols:(_Bool)arg1;	// IMP=0x00000000000ce6f1
- (_Bool)allowReferencingUndefinedSymbols;	// IMP=0x00000000000ce6e1
- (void)setCompileSymbolVisibility:(long long)arg1;	// IMP=0x00000000000ce6d0
- (long long)compileSymbolVisibility;	// IMP=0x00000000000ce6bf
- (void)setOptimizationLevel:(long long)arg1;	// IMP=0x00000000000ce6ae
- (long long)optimizationLevel;	// IMP=0x00000000000ce69d
- (void)setPreserveInvariance:(_Bool)arg1;	// IMP=0x00000000000ce68d
- (_Bool)preserveInvariance;	// IMP=0x00000000000ce67d
- (void)setInstallName:(id)arg1;	// IMP=0x00000000000ce66c
- (id)installName;	// IMP=0x00000000000ce65b
- (void)setLibraryType:(long long)arg1;	// IMP=0x00000000000ce64a
- (long long)libraryType;	// IMP=0x00000000000ce639
- (void)setSourceLanguage:(unsigned char)arg1;	// IMP=0x00000000000ce629
- (unsigned char)sourceLanguage;	// IMP=0x00000000000ce618
- (void)setCompileTimeStatisticsEnabled:(_Bool)arg1;	// IMP=0x00000000000ce608
- (_Bool)compileTimeStatisticsEnabled;	// IMP=0x00000000000ce5f8
- (void)setTracingEnabled:(_Bool)arg1;	// IMP=0x00000000000ce5e8
- (_Bool)tracingEnabled;	// IMP=0x00000000000ce5d8
- (unsigned long long)languageVersion;	// IMP=0x00000000000ce5c7
- (void)setGlBufferBindPoints:(_Bool)arg1;	// IMP=0x00000000000ce5b7
- (_Bool)glBufferBindPoints;	// IMP=0x00000000000ce5a7
- (void)setDebuggingEnabled:(_Bool)arg1;	// IMP=0x00000000000ce597
- (_Bool)debuggingEnabled;	// IMP=0x00000000000ce587
- (void)setFastMathEnabled:(_Bool)arg1;	// IMP=0x00000000000ce577
- (_Bool)fastMathEnabled;	// IMP=0x00000000000ce567
- (void)importDictionary:(id)arg1;	// IMP=0x00000000000ce184
- (id)exportDictionary;	// IMP=0x00000000000cdd78
- (id)description;	// IMP=0x00000000000cdd64
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000cd88a
- (void)setLanguageVersion:(unsigned long long)arg1;	// IMP=0x00000000000cd86e
- (void)setAdditionalCompilerArguments:(id)arg1;	// IMP=0x00000000000cd829
- (id)additionalCompilerArguments;	// IMP=0x00000000000cd818
- (void)setPreprocessorMacros:(id)arg1;	// IMP=0x00000000000cd7d3
- (id)preprocessorMacros;	// IMP=0x00000000000cd7c2
- (void)setLibraries:(id)arg1;	// IMP=0x00000000000cd77d
- (id)libraries;	// IMP=0x00000000000cd76c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cd5e6
- (unsigned long long)hash;	// IMP=0x00000000000cd474
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cd287
- (void)dealloc;	// IMP=0x00000000000cd213
- (id)init;	// IMP=0x00000000000cd10e

@end

