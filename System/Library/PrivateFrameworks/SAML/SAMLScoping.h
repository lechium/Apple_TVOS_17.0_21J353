//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SAMLScoping
{
}

+ (id)createElement:(id *)arg1;	// IMP=0x0060000000005f48
@property(readonly, nonatomic) NSArray *idpList;
@property(readonly, nonatomic) NSString *getComplete;
@property(readonly, nonatomic) NSArray *requesterIds;
@property(readonly, nonatomic) NSNumber *proxyCount;
- (void)addRequesterId:(id)arg1;	// IMP=0x0000000000006050

@end

