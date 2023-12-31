//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DCMapsLink, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DCMapsURLGenerator
{
    NSMutableDictionary *_queryDictionary;	// 8 = 0x8
    DCMapsLink *_mapsLink;	// 16 = 0x10
}

+ (id)URLWithMapsLink:(id)arg1;	// IMP=0x006000000002f722
- (void).cxx_destruct;	// IMP=0x000000000002f6f1
@property(readonly, nonatomic) DCMapsLink *mapsLink; // @synthesize mapsLink=_mapsLink;
- (void)setString:(id)arg1 forQueryKey:(id)arg2;	// IMP=0x000000000002f649
- (id)mapType;	// IMP=0x000000000002f58c
- (id)directionsMode;	// IMP=0x000000000002f523
- (void)populateQueryDictionary;	// IMP=0x000000000002f28b
@property(readonly, nonatomic) NSMutableDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
- (id)URL;	// IMP=0x000000000002f1b4
- (id)query;	// IMP=0x000000000002f151
- (id)path;	// IMP=0x000000000002f144
- (id)host;	// IMP=0x000000000002f137
- (id)scheme;	// IMP=0x000000000002f12a
- (id)initWithMapsLink:(id)arg1;	// IMP=0x000000000002f0ba

@end

