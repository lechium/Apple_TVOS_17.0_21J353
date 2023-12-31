//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (CPLArchiver)
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;	// IMP=0x005000000007c4cb
+ (id)cplAllPropertyNames;	// IMP=0x00500000000f4ce3
+ (void)cplDumpProperties;	// IMP=0x00500000000f4c1e
+ (id)_cplPropertyAttributeMap;	// IMP=0x00500000000f4b40
+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;	// IMP=0x00500000000f3e75
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;	// IMP=0x00500000000f3e6d
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;	// IMP=0x00500000000f3e0d
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;	// IMP=0x00500000000f3e05
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x001000000007a553
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x001000000007a4a3
- (id)storedClassNameForCPLArchiver:(id)arg1;	// IMP=0x001000000007a489
- (unsigned long long)cplSpecialHash;	// IMP=0x00100000000f05ce
- (_Bool)cplSpecialIsEqual:(id)arg1;	// IMP=0x00100000000f05bc
- (id)cplFullDescription;	// IMP=0x00100000000f05a0
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f058e
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f0574
- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f0192
- (void)cplClearProperties:(id)arg1;	// IMP=0x00100000000eff69
- (unsigned long long)cplHash;	// IMP=0x00100000000efe75
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000efe5d
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 diffTracker:(id)arg3 withEqualityBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000efc1e
- (_Bool)cplIsEqual:(id)arg1 withEqualityBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000efc04
- (_Bool)cplIsEqual:(id)arg1;	// IMP=0x00100000000efbf0
- (void)cplDecodePropertiesFromCoder:(id)arg1;	// IMP=0x00100000000efb24
- (void)cplEncodePropertiesWithCoder:(id)arg1;	// IMP=0x00100000000efa58
- (id)cplDeepCopy;	// IMP=0x00100000000efa12
@end

