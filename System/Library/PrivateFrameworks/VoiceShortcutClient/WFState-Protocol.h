//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/NSObject-Protocol.h>

@protocol WFState;

@protocol WFState <NSObject>
- (_Bool)canTransitionToState:(id <WFState>)arg1;

@optional
- (void)performAction;
@end

