//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LNUpdateAppShortcutParametersOperation
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000071109
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000007102a
- (void)start;	// IMP=0x0000000000070f31
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000070d43

@end

