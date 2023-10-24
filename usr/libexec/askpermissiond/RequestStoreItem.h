//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString, NSURL, RequestLocalizations;

@interface RequestStoreItem : NSObject
{
    NSDate *_createdDate;	// 8 = 0x8
    NSDate *_modifiedDate;	// 16 = 0x10
    NSString *_ageRating;	// 24 = 0x18
    NSString *_approverDSID;	// 32 = 0x20
    NSString *_itemDescription;	// 40 = 0x28
    NSString *_itemIdentifier;	// 48 = 0x30
    NSString *_itemTitle;	// 56 = 0x38
    NSString *_requestIdentifier;	// 64 = 0x40
    NSString *_uniqueIdentifier;	// 72 = 0x48
    RequestLocalizations *_localizations;	// 80 = 0x50
    NSString *_localizedPrice;	// 88 = 0x58
    NSURL *_previewURL;	// 96 = 0x60
    NSString *_productType;	// 104 = 0x68
    NSString *_productTypeName;	// 112 = 0x70
    NSURL *_productURL;	// 120 = 0x78
    NSString *_offerName;	// 128 = 0x80
    NSString *_requesterDSID;	// 136 = 0x88
    NSNumber *_starRating;	// 144 = 0x90
    long long _status;	// 152 = 0x98
    NSString *_thumbnailURLString;	// 160 = 0xa0
    NSString *_requestString;	// 168 = 0xa8
    NSString *_requestSummary;	// 176 = 0xb0
    NSString *_priceSummary;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x002000000001dc4a
@property(retain, nonatomic) NSString *priceSummary; // @synthesize priceSummary=_priceSummary;
- (void);	// IMP=0x001000000001dc15
@property(retain, nonatomic) NSString *requestSummary; // @synthesize requestSummary=_requestSummary;
@property(retain, nonatomic) NSString *requestString; // @synthesize requestString=_requestString;
@property(retain, nonatomic) NSString *thumbnailURLString; // @synthesize thumbnailURLString=_thumbnailURLString;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *starRating; // @synthesize starRating=_starRating;
@property(retain, nonatomic) NSString *requesterDSID; // @synthesize requesterDSID=_requesterDSID;
@property(retain, nonatomic) NSString *offerName; // @synthesize offerName=_offerName;
@property(readonly, nonatomic) NSURL *productURL; // @synthesize productURL=_productURL;
@property(readonly, nonatomic) NSString *productTypeName; // @synthesize productTypeName=_productTypeName;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(retain, nonatomic) NSString *localizedPrice; // @synthesize localizedPrice=_localizedPrice;
@property(retain, nonatomic) RequestLocalizations *localizations; // @synthesize localizations=_localizations;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *approverDSID; // @synthesize approverDSID=_approverDSID;
@property(retain, nonatomic) NSString *ageRating; // @synthesize ageRating=_ageRating;
@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
- (id)description;	// IMP=0x001000000001d99c
- (id)compile;	// IMP=0x001000000001d3bc
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001c910
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000001c5c3
- (id)initWithItemIdentifier:(id)arg1 requestIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 ageRating:(id)arg4 approverDSID:(id)arg5 requesterDSID:(id)arg6 createdDate:(id)arg7 modifiedDate:(id)arg8 itemDesc:(id)arg9 itemTitle:(id)arg10 localizedPrice:(id)arg11 previewURL:(id)arg12 productType:(id)arg13 productTypeName:(id)arg14 productURL:(id)arg15 offerName:(id)arg16 requestString:(id)arg17 requestSummary:(id)arg18 priceSummary:(id)arg19 status:(long long)arg20 starRating:(id)arg21 thumbnailURLString:(id)arg22;	// IMP=0x001000000001c23b

@end

