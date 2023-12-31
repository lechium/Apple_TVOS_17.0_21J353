//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessIdentity.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSDextProcessIdentity : RBSProcessIdentity
{
    NSString *_serverName;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    unsigned char _type;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000003e53
- (id)initWithDecodeFromJob:(id)arg1;	// IMP=0x0000000000003d30
- (id)encodeForJob;	// IMP=0x0000000000003c67
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000003b6b
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000003ad5
- (id)debugDescription;	// IMP=0x0000000000003abd
- (_Bool)_matchesIdentity:(id)arg1;	// IMP=0x0000000000003a01
- (id)copyWithAuid:(unsigned int)arg1;	// IMP=0x00000000000039f6
- (_Bool)isDext;	// IMP=0x00000000000039ee
- (id)dextContainingAppBundleID;	// IMP=0x00000000000039d9
- (id)dextLabel;	// IMP=0x00000000000039c4
- (id)dextServerName;	// IMP=0x00000000000039af
- (_Bool)isAnonymous;	// IMP=0x00000000000039a7
- (id)_initDextWithServerName:(id)arg1 tagString:(id)arg2 containingAppBundleID:(id)arg3;	// IMP=0x00000000000038fc
- (id)_initDextWithServerName:(id)arg1 label:(id)arg2 containingAppBundleID:(id)arg3;	// IMP=0x0000000000003782

@end

