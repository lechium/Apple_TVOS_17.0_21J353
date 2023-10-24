//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol MRDGroupSessionRemoteControlServiceDelegate;

@interface MRDGroupSessionRemoteControlService : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <MRDGroupSessionRemoteControlServiceDelegate> _delegate;	// 16 = 0x10
    NSMapTable *_connections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000062b4b
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMapTable *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) __weak id <MRDGroupSessionRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)session:(id)arg1 didUpdateParticipants:(id)arg2;	// IMP=0x001000000006211a
- (void)manager:(id)arg1 didEndHostedGroupSession:(id)arg2;	// IMP=0x0010000000062098
- (void)manager:(id)arg1 didStartHostedGroupSession:(id)arg2;	// IMP=0x0010000000061fee
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000061f12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
