//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (KeyPathLookup)
+ (id)shortDescription;	// IMP=0x0010000000059107
- (id)hmf_firstObjectWithCharacteristicType:(id)arg1;	// IMP=0x001000000000615b
- (id)hmf_firstObjectWithInstanceID:(id)arg1;	// IMP=0x0010000000006142
- (id)hmf_firstObjectWithSPIUniqueIdentifier:(id)arg1;	// IMP=0x0010000000006129
- (id)hmf_firstObjectWithUniqueIdentifier:(id)arg1;	// IMP=0x0010000000006110
- (id)hmf_firstObjectWithZoneID:(id)arg1;	// IMP=0x00100000000060f7
- (id)hmf_firstObjectWithUUID:(id)arg1;	// IMP=0x00100000000060de
- (id)hmf_firstObjectWithName:(id)arg1;	// IMP=0x00100000000060c5
- (id)hmf_firstObjectWithValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0010000000005dbb
- (id)hmf_objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00100000000597e1
- (id)hmf_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000597ca
- (id)hmf_objectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0010000000059746
- (id)hmf_objectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000005972f
- (_Bool)hmf_objectsAreKindOfClass:(Class)arg1;	// IMP=0x001000000005960e
@property(readonly, getter=hmf_isEmpty) _Bool hmf_empty;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)describeElements:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059c77
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;	// IMP=0x0010000000059c5e
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(_Bool)arg2 blacklistedKeys:(id)arg3;	// IMP=0x001000000005988c

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

