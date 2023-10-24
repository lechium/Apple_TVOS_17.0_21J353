//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, RequestLocalizations;

@interface ApproverStoreItem : NSObject
{
    _Bool _canSendViaMessages;	// 8 = 0x8
    NSString *_ageRating;	// 16 = 0x10
    NSString *_approverDSID;	// 24 = 0x18
    NSDate *_createdDate;	// 32 = 0x20
    NSDate *_modifiedDate;	// 40 = 0x28
    NSString *_itemIdentifier;	// 48 = 0x30
    NSString *_requestIdentifier;	// 56 = 0x38
    NSString *_uniqueIdentifier;	// 64 = 0x40
    NSString *_itemTitle;	// 72 = 0x48
    NSString *_itemDescription;	// 80 = 0x50
    NSString *_localizedPrice;	// 88 = 0x58
    NSString *_itemBundleID;	// 96 = 0x60
    RequestLocalizations *_localizations;	// 104 = 0x68
    NSString *_offerName;	// 112 = 0x70
    NSString *_productType;	// 120 = 0x78
    NSString *_thumbnailURLString;	// 128 = 0x80
    NSString *_requesterDSID;	// 136 = 0x88
    NSString *_requesterName;	// 144 = 0x90
    NSDictionary *_requestInfo;	// 152 = 0x98
    NSNumber *_starRating;	// 160 = 0xa0
    long long _status;	// 168 = 0xa8
    NSString *_requestString;	// 176 = 0xb0
    NSString *_requestSummary;	// 184 = 0xb8
    NSString *_priceSummary;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0020000000006a3e
@property(readonly, nonatomic) NSString *priceSummary; // @synthesize priceSummary=_priceSummary;
@property(readonly, nonatomic) NSString *requestSummary; // @synthesize requestSummary=_requestSummary;
@property(readonly, nonatomic) NSString *requestString; // @synthesize requestString=_requestString;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *starRating; // @synthesize starRating=_starRating;
@property(retain, nonatomic) NSDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(retain, nonatomic) NSString *requesterName; // @synthesize requesterName=_requesterName;
@property(retain, nonatomic) NSString *requesterDSID; // @synthesize requesterDSID=_requesterDSID;
@property(retain, nonatomic) NSString *thumbnailURLString; // @synthesize thumbnailURLString=_thumbnailURLString;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *offerName; // @synthesize offerName=_offerName;
@property(readonly, nonatomic) RequestLocalizations *localizations; // @synthesize localizations=_localizations;
@property(retain, nonatomic) NSString *itemBundleID; // @synthesize itemBundleID=_itemBundleID;
@property(retain, nonatomic) NSString *localizedPrice; // @synthesize localizedPrice=_localizedPrice;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) _Bool canSendViaMessages; // @synthesize canSendViaMessages=_canSendViaMessages;
@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain, nonatomic) NSString *approverDSID; // @synthesize approverDSID=_approverDSID;
@property(retain, nonatomic) NSString *ageRating; // @synthesize ageRating=_ageRating;
- (id)description;	// IMP=0x00100000000067a8
- (id)compile;	// IMP=0x001000000000618f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000004dd9
- (id)initWithItemIdentifier:(id)arg1 requestIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 date:(id)arg4;	// IMP=0x0010000000004cf1
- (id)initWithRequest:(id)arg1 date:(id)arg2;	// IMP=0x001000000000496d

@end

