//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@protocol ASORemoteContextProvider;

__attribute__((visibility("hidden")))
@interface ASODismissRemoteOverlayOperation : NSOperation
{
    _Bool _isExecuting;	// 8 = 0x8
    _Bool _isFinished;	// 9 = 0x9
    id <ASORemoteContextProvider> _contextProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001eca
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) __weak id <ASORemoteContextProvider> contextProvider; // @synthesize contextProvider=_contextProvider;
- (void)start;	// IMP=0x0000000000001cab
- (void)finishExecuting;	// IMP=0x0000000000001ba8
- (void)cancel;	// IMP=0x0000000000001ae7
- (id)initWithContextProvider:(id)arg1;	// IMP=0x0000000000001a80

@end

