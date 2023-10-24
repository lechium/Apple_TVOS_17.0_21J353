//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSData, NSMutableArray;

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest
{
    NSMutableArray *_resultChangedNotifications;	// 8 = 0x8
    _Bool _wantsChanges;	// 16 = 0x10
    _Bool _moreComing;	// 17 = 0x11
    unsigned long long _resultsLimit;	// 24 = 0x18
    NSData *_resultServerChangeTokenData;	// 32 = 0x20
    NSData *_serverChangeTokenData;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000296a5d
@property(retain, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) NSData *resultServerChangeTokenData; // @synthesize resultServerChangeTokenData=_resultServerChangeTokenData;
@property(nonatomic) _Bool wantsChanges; // @synthesize wantsChanges=_wantsChanges;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) NSArray *resultChangedNotifications; // @synthesize resultChangedNotifications=_resultChangedNotifications;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000296524
- (id)generateRequestOperations;	// IMP=0x00000000002962bf
- (id)requestOperationClasses;	// IMP=0x0000000000296253
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000002961b8
- (id)initWithOperation:(id)arg1 serverChangeTokenData:(id)arg2;	// IMP=0x000000000029611f

@end
