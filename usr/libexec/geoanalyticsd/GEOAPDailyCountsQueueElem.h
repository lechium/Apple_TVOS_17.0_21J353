//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface GEOAPDailyCountsQueueElem
{
    int _countType;	// 16 = 0x10
    NSString *_usageString;	// 24 = 0x18
    NSNumber *_usageBool;	// 32 = 0x20
    NSString *_appId;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000014c00
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, nonatomic) NSNumber *usageBool; // @synthesize usageBool=_usageBool;
@property(readonly, nonatomic) NSString *usageString; // @synthesize usageString=_usageString;
@property(readonly, nonatomic) int countType; // @synthesize countType=_countType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000147ba
- (unsigned long long)hash;	// IMP=0x001000000001473f
- (id)copy;	// IMP=0x00100000000146e0
- (id)initWithType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 createTime:(id)arg5;	// IMP=0x00100000000145db

@end

