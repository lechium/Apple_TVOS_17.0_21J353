//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDDatabaseCKOperationCompletionEvent : HMMLogEvent
{
    NSString *_containerIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003003b5
@property(readonly, copy) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x0000000000300331

@end

