//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface GEOAPRRLogQueueElem
{
    NSData *_rrLogData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000151bf
@property(readonly, nonatomic) NSData *rrLogData; // @synthesize rrLogData=_rrLogData;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001506a
- (unsigned long long)hash;	// IMP=0x0010000000014fde
- (id)copy;	// IMP=0x0010000000014fa4
- (id)initWithData:(id)arg1 createTime:(id)arg2;	// IMP=0x0010000000014f08

@end

