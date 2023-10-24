//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIAppDocumentUpdateEvent.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent
{
    NSSet *_removedCanonicalIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a09fd
@property(copy, nonatomic) NSSet *removedCanonicalIDs; // @synthesize removedCanonicalIDs=_removedCanonicalIDs;
- (id)description;	// IMP=0x00000000000a0890
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a0732
- (unsigned long long)hash;	// IMP=0x00000000000a06b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a06aa
- (id)dictionaryRepresentation;	// IMP=0x00000000000a05b3
- (id)initWithRemovedCanonicalIDs:(id)arg1;	// IMP=0x00000000000a04cf
- (id)initWithDescriptor:(id)arg1;	// IMP=0x00000000000a0460

@end
