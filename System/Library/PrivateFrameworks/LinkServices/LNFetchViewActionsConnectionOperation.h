//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface LNFetchViewActionsConnectionOperation
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_result;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006d700
@property(retain, nonatomic) NSArray *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000006d5cf
- (void)start;	// IMP=0x000000000006d4d6
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006d2e8

@end

