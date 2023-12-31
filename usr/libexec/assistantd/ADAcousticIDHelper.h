//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, SAAISearchCompleted, SAAIStartSession;
@protocol ADAcousticIDHelperDelegate;

@interface ADAcousticIDHelper : NSObject
{
    id <ADAcousticIDHelperDelegate> _delegate;	// 8 = 0x8
    SAAIStartSession *_currentSession;	// 16 = 0x10
    NSMutableSet *_outstandingSearches;	// 24 = 0x18
    SAAISearchCompleted *_completed;	// 32 = 0x20
    _Bool _sessionIsComplete;	// 40 = 0x28
    double _minimumFingerprintDuration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000106860
@property(nonatomic) __weak id <ADAcousticIDHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)failCurrentSession;	// IMP=0x00100000001067e4
- (_Bool)shouldSendFingerprintForDuration:(double)arg1;	// IMP=0x0010000000106777
- (void)handleCommandFailed:(id)arg1;	// IMP=0x00100000001066db
- (void)handleRetrySearch:(id)arg1;	// IMP=0x001000000010664e
- (void)handleSearchCompleted:(id)arg1;	// IMP=0x0010000000106597
- (void)_removeOutstandingSearchForRefId:(id)arg1;	// IMP=0x0010000000106581
- (_Bool)hasRelatedCommandForRefId:(id)arg1;	// IMP=0x00100000001064fa
- (id)cancelSessionCommand;	// IMP=0x0010000000106493
- (id)searchCommandForFingerprintData:(id)arg1 withDuration:(double)arg2;	// IMP=0x0010000000106339
- (id)currentSession;	// IMP=0x001000000010632b
- (_Bool)sessionIsComplete;	// IMP=0x0010000000106322
- (void)startNewAcousticIDSessionWithRequestId:(id)arg1 refId:(id)arg2;	// IMP=0x001000000010620b
- (void)reset;	// IMP=0x00100000001061bd
- (void)_clearOutstandingSearchIds;	// IMP=0x00100000001061a3
- (void)_addOutstandingSearchId:(id)arg1;	// IMP=0x0010000000106149

@end

