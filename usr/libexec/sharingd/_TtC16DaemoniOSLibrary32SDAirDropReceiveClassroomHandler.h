//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol SDAirDropAlertManagerDelegate;

@interface _TtC16DaemoniOSLibrary32SDAirDropReceiveClassroomHandler : NSObject
{
    MISSING_TYPE *stateMachine;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *classroomDelegate;	// 24 = 0x18
    MISSING_TYPE *queue;	// 32 = 0x20
    MISSING_TYPE *continuations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000001deaa0
- (id)init;	// IMP=0x00100000001dea40
- (void)finishedEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000001de970
- (void)errorEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000001dda30
- (void)cancelEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000001dd6e0
- (void)progressEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000001dd470
- (void)askEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000001dd450
@property(nonatomic) __weak id <SDAirDropAlertManagerDelegate> classroomDelegate; // @synthesize classroomDelegate;
@property(nonatomic) __weak id <SDAirDropAlertManagerDelegate> delegate; // @synthesize delegate;

@end
