//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKDeserializer : NSObject
{
    id ds;	// 8 = 0x8
}

- (id)deserializePListValueIn:(id)arg1 key:(id)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000079c380
- (id)deserializePListKeyIn:(id)arg1;	// IMP=0x000000000079c36e
- (id)deserializePList:(id)arg1;	// IMP=0x000000000079c102
- (id)deserializeNewPList;	// IMP=0x000000000079c0b1
- (id)deserializeListItemIn:(id)arg1 at:(unsigned long long)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000079c09f
- (id)deserializeList:(id)arg1;	// IMP=0x000000000079bf2d
- (id)deserializeNewList;	// IMP=0x000000000079bedc
- (id)deserializeString:(id)arg1;	// IMP=0x000000000079be58
- (id)deserializeNewKeyString;	// IMP=0x000000000079be07
- (id)deserializeNewString;	// IMP=0x000000000079bdb6
- (id)deserializeData:(id)arg1;	// IMP=0x000000000079bd38
- (id)deserializeNewData;	// IMP=0x000000000079bce7
- (id)deserializeNewObject;	// IMP=0x000000000079bc9e
- (id)deserializerStream;	// IMP=0x000000000079bc94
- (void)dealloc;	// IMP=0x000000000079bc36
- (id)initForDeserializerStream:(id)arg1;	// IMP=0x000000000079bbc8

@end
