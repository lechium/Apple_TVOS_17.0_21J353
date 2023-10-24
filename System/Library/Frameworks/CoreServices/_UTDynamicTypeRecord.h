//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UTTypeRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTDynamicTypeRecord : UTTypeRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000157dce
+ (id)_propertyClasses;	// IMP=0x0060000000157c55
- (void).cxx_destruct;	// IMP=0x0000000000157f43
- (id)identifier;	// IMP=0x0000000000157f2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000157ed7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000157e30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000157dd6
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000157cd6
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000157789
- (id)_delegatePath;	// IMP=0x0000000000157781
- (id)_declaringBundleBookmark;	// IMP=0x0000000000157779
- (id)_localizedDescription;	// IMP=0x0000000000157771
- (_Bool)isChildOfTypeIdentifier:(id)arg1;	// IMP=0x000000000015769d
- (id)childTypeIdentifiers;	// IMP=0x0000000000157684
- (id)parentTypeIdentifiers;	// IMP=0x0000000000157613
- (void)_LSRecord_resolve_pedigree;	// IMP=0x00000000001575f8
- (id)pedigree;	// IMP=0x00000000001575e7
- (id)pedigreeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000157586
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x00000000001574a6
- (id)referenceURL;	// IMP=0x000000000015749e
- (id)preferredTagOfClass:(id)arg1;	// IMP=0x000000000015747e
- (id)tagSpecification;	// IMP=0x000000000015740d
- (id)declaration;	// IMP=0x0000000000157306
- (id)declaringBundleRecord;	// IMP=0x00000000001572fe
- (_Bool)isCoreType;	// IMP=0x00000000001572f6
- (_Bool)isActive;	// IMP=0x00000000001572ee
- (_Bool)isImported;	// IMP=0x00000000001572e6
- (_Bool)isExported;	// IMP=0x00000000001572de
- (_Bool)isInPublicDomain;	// IMP=0x00000000001572d6
- (_Bool)isWildcard;	// IMP=0x00000000001572ce
- (_Bool)isDeclared;	// IMP=0x00000000001572c6
- (_Bool)isDynamic;	// IMP=0x00000000001572be
- (id)version;	// IMP=0x00000000001572b6
- (id)_initWithContext:(struct LSContext *)arg1 dynamicUTI:(id)arg2;	// IMP=0x000000000015721c

@end
