//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, SCRCTargetSelectorTimer;
@protocol OS_dispatch_queue;

@interface VOTSimpleClickButtonInterceptor
{
    _Bool _clickDown;	// 9 = 0x9
    _Bool _sendEventsThru;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    CDUnknownBlockType _simpleClickHandler;	// 24 = 0x18
    SCRCTargetSelectorTimer *_timer;	// 32 = 0x20
    NSMutableArray *_eventQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000125544
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) SCRCTargetSelectorTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType simpleClickHandler; // @synthesize simpleClickHandler=_simpleClickHandler;
- (void)_drainQueue:(_Bool)arg1;	// IMP=0x00100000001252b4
- (_Bool)touchEventOccurred:(id)arg1 inTVDirectTouch:(_Bool)arg2;	// IMP=0x0010000000125085
- (void)_timerFired;	// IMP=0x0010000000125058
- (void)buttonUpOccurred:(id)arg1;	// IMP=0x0010000000124e99
- (void)buttonDownOccurred:(id)arg1;	// IMP=0x0010000000124d45
- (void)dealloc;	// IMP=0x0010000000124cc0
- (id)initWithThreadKey:(id)arg1 simpleClickHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000124bad

@end

