//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessIdentity.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity
{
    NSString *_embeddedApplicationIdentifier;	// 32 = 0x20
    NSString *_personaString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000338ad
- (id)personaString;	// IMP=0x000000000003389c
- (id)embeddedApplicationIdentifier;	// IMP=0x000000000003388b
- (_Bool)treatedAsAnAppByFrontBoard:(id *)arg1;	// IMP=0x0000000000033883
- (_Bool)supportsLaunchingDirectly;	// IMP=0x000000000003387b
- (_Bool)isAnonymous;	// IMP=0x0000000000033873
- (_Bool)isApplication;	// IMP=0x000000000003386b
- (_Bool)isEmbeddedApplication;	// IMP=0x0000000000033863
- (unsigned char)defaultManageFlags;	// IMP=0x0000000000033858
- (id)encodeForJob;	// IMP=0x00000000000337c2
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000336f5
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000003367a
- (id)debugDescription;	// IMP=0x0000000000033554
- (_Bool)_matchesIdentity:(id)arg1;	// IMP=0x00000000000332e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033273
- (id)copyWithPersonaString:(id)arg1;	// IMP=0x000000000003320a
- (id)copyWithAuid:(unsigned int)arg1;	// IMP=0x00000000000331ff

@end
