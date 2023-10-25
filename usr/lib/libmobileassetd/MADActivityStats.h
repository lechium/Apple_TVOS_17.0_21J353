//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MADActivityStats : NSObject
{
    int _failureResult;	// 8 = 0x8
    unsigned long long _successfulOperations;	// 16 = 0x10
    unsigned long long _successWithIssues;	// 24 = 0x18
    NSString *_firstSuccessIssue;	// 32 = 0x20
    NSString *_lastSuccessIssue;	// 40 = 0x28
    unsigned long long _totalWarnings;	// 48 = 0x30
    NSString *_firstWarningMethod;	// 56 = 0x38
    NSString *_firstWarningMessage;	// 64 = 0x40
    NSString *_lastWarningMethod;	// 72 = 0x48
    NSString *_lastWarningMessage;	// 80 = 0x50
    unsigned long long _allocationFailures;	// 88 = 0x58
    unsigned long long _associateReplyFailures;	// 96 = 0x60
    NSString *_failureResultName;	// 104 = 0x68
    NSString *_failureReason;	// 112 = 0x70
    unsigned long long _additionalFailures;	// 120 = 0x78
    NSString *_firstAdditionalFailure;	// 128 = 0x80
    NSString *_lastAdditionalFailure;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000065f8d
@property(retain, nonatomic) NSString *lastAdditionalFailure; // @synthesize lastAdditionalFailure=_lastAdditionalFailure;
@property(retain, nonatomic) NSString *firstAdditionalFailure; // @synthesize firstAdditionalFailure=_firstAdditionalFailure;
@property(nonatomic) unsigned long long additionalFailures; // @synthesize additionalFailures=_additionalFailures;
@property(retain, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(retain, nonatomic) NSString *failureResultName; // @synthesize failureResultName=_failureResultName;
@property(nonatomic) int failureResult; // @synthesize failureResult=_failureResult;
@property(nonatomic) unsigned long long associateReplyFailures; // @synthesize associateReplyFailures=_associateReplyFailures;
@property(nonatomic) unsigned long long allocationFailures; // @synthesize allocationFailures=_allocationFailures;
@property(retain, nonatomic) NSString *lastWarningMessage; // @synthesize lastWarningMessage=_lastWarningMessage;
@property(retain, nonatomic) NSString *lastWarningMethod; // @synthesize lastWarningMethod=_lastWarningMethod;
@property(retain, nonatomic) NSString *firstWarningMessage; // @synthesize firstWarningMessage=_firstWarningMessage;
@property(retain, nonatomic) NSString *firstWarningMethod; // @synthesize firstWarningMethod=_firstWarningMethod;
@property(nonatomic) unsigned long long totalWarnings; // @synthesize totalWarnings=_totalWarnings;
@property(retain, nonatomic) NSString *lastSuccessIssue; // @synthesize lastSuccessIssue=_lastSuccessIssue;
@property(retain, nonatomic) NSString *firstSuccessIssue; // @synthesize firstSuccessIssue=_firstSuccessIssue;
@property(nonatomic) unsigned long long successWithIssues; // @synthesize successWithIssues=_successWithIssues;
@property(nonatomic) unsigned long long successfulOperations; // @synthesize successfulOperations=_successfulOperations;
- (id)init;	// IMP=0x0000000000065d08

@end
