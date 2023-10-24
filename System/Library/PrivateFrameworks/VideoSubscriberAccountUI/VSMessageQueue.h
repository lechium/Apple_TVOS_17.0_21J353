//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol VSMessageQueueDelegate;

__attribute__((visibility("hidden")))
@interface VSMessageQueue : NSObject
{
    id <VSMessageQueueDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_messages;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000018a50
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(nonatomic) __weak id <VSMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)removeAllMessages;	// IMP=0x00000000000189c1
- (void)addMessage:(id)arg1;	// IMP=0x00000000000188a3
- (id)init;	// IMP=0x00000000000187a7

@end

