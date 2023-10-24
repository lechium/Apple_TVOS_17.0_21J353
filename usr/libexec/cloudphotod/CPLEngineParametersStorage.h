//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, NSUserDefaults;

@interface CPLEngineParametersStorage : NSObject
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
    NSSet *_supportedLibraryIdentifiers;	// 16 = 0x10
}

+ (id)defaultSupportedLibraryIdentifiers;	// IMP=0x002000000001b23c
- (void).cxx_destruct;	// IMP=0x002000000001c1cd
@property(readonly, nonatomic) NSSet *supportedLibraryIdentifiers; // @synthesize supportedLibraryIdentifiers=_supportedLibraryIdentifiers;
@property(readonly, nonatomic) NSArray *allDefinedParameters;
- (_Bool)isCPLEngineParametersStorageKey:(id)arg1;	// IMP=0x001000000001bfae
- (_Bool)saveParameters:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001bef4
- (_Bool)removeParametersWithLibraryIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001be55
- (id)parametersForLibraryIdentifier:(id)arg1;	// IMP=0x001000000001bd80
- (void)_removeKeyForInsanityForLibraryIdentifier:(id)arg1;	// IMP=0x001000000001bd33
- (void)_setKeyForInsanityIfNecessaryForParameters:(id)arg1;	// IMP=0x001000000001bb0d
- (id)_keyForInsanityForLibraryIdentifier:(id)arg1;	// IMP=0x001000000001baf4
- (id)keyForLibraryIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001ba3c
- (void)_saveParameters:(id)arg1 withKey:(id)arg2;	// IMP=0x001000000001b9b5
- (id)_savedParametersForKey:(id)arg1;	// IMP=0x001000000001b951
- (id)initWithUserDefaults:(id)arg1 supportedLibraryIdentifiers:(id)arg2;	// IMP=0x001000000001b340
- (id)init;	// IMP=0x001000000001b2ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
