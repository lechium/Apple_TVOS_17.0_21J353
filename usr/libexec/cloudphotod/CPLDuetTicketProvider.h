//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CPLDuetTicketProviderBudgetDelegate, OS_dispatch_queue;

@interface CPLDuetTicketProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_duetQueue;	// 8 = 0x8
    id <CPLDuetTicketProviderBudgetDelegate> _delegate;	// 16 = 0x10
    NSString *_clientBundlerIdentifier;	// 24 = 0x18
}

+ (id)sharedDuetTicketProvider;	// IMP=0x00200000000f7db1
- (void).cxx_destruct;	// IMP=0x00200000000f8023
@property(readonly, nonatomic) NSString *clientBundlerIdentifier; // @synthesize clientBundlerIdentifier=_clientBundlerIdentifier;
@property(nonatomic) __weak id <CPLDuetTicketProviderBudgetDelegate> delegate; // @synthesize delegate=_delegate;
- (id)duetStatuses;	// IMP=0x00100000000f7fe5
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x00100000000f7fdf
- (void)popSignificantWorkIsPending;	// IMP=0x00100000000f7fd9
- (void)pushSignificantWorkIsPending;	// IMP=0x00100000000f7fd3
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f7eb1
- (id)initWithClientBundlerIdentifier:(id)arg1;	// IMP=0x00100000000f7e1d

@end

