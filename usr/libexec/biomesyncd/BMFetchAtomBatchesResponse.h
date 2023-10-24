//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface BMFetchAtomBatchesResponse
{
    _Bool _moreComing;	// 32 = 0x20
    NSArray *_unseenPeers;	// 40 = 0x28
    NSDictionary *_atomBatches;	// 48 = 0x30
    unsigned long long _atomBatchBytes;	// 56 = 0x38
    NSDictionary *_deletedLocations;	// 64 = 0x40
    unsigned long long _batchSequenceNumber;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000001f162
@property(nonatomic) unsigned long long batchSequenceNumber; // @synthesize batchSequenceNumber=_batchSequenceNumber;
@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) NSDictionary *deletedLocations; // @synthesize deletedLocations=_deletedLocations;
@property(nonatomic) unsigned long long atomBatchBytes; // @synthesize atomBatchBytes=_atomBatchBytes;
@property(retain, nonatomic) NSDictionary *atomBatches; // @synthesize atomBatches=_atomBatches;
@property(retain, nonatomic) NSArray *unseenPeers; // @synthesize unseenPeers=_unseenPeers;
- (id)dictionaryRepresentation;	// IMP=0x001000000001ed4e
- (id)initFromDictionary:(id)arg1;	// IMP=0x001000000001ea2c

@end

