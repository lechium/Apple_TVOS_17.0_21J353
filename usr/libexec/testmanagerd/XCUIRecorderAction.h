//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, XCElementSnapshot;

@interface XCUIRecorderAction : NSObject
{
    NSMutableArray *_events;	// 8 = 0x8
    XCElementSnapshot *_actionBeganSelectedElementSnapshot;	// 16 = 0x10
    XCElementSnapshot *_actionBeganRootElementSnapshot;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000aba6
@property(retain) XCElementSnapshot *actionBeganRootElementSnapshot; // @synthesize actionBeganRootElementSnapshot=_actionBeganRootElementSnapshot;
@property(retain) XCElementSnapshot *actionBeganSelectedElementSnapshot; // @synthesize actionBeganSelectedElementSnapshot=_actionBeganSelectedElementSnapshot;
@property(retain) NSMutableArray *events; // @synthesize events=_events;
- (id)gestureNamesWaitForTimeInterval:(double *)arg1;	// IMP=0x001000000000a184
- (id)eventTypeNameWaitForTimeInterval:(double *)arg1;	// IMP=0x001000000000a0bc
@property(readonly, getter=isHandEvent) _Bool handEvent;
- (id)init;	// IMP=0x0010000000009fb4

@end

