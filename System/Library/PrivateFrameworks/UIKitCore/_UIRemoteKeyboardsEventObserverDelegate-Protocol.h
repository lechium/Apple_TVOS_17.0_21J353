//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIResponder;

@protocol _UIRemoteKeyboardsEventObserverDelegate <NSObject>
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2 responder:(UIResponder *)arg3;
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2;
- (long long)lastEventSource;
@end

