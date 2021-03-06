//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSNestedInspectorSection.h"

#import "MSStylePartInspectorDelegate-Protocol.h"

@class MSBlurInspectorViewController, MSCollapsibleHeaderInspectorItem, MSColorControlsInspectorViewController, MSMultipleBorderInspectorViewController, MSMultipleFillInspectorViewController, MSMultipleInnerShadowInspectorViewController, MSMultipleShadowInspectorViewController, NSArray, NSDictionary, NSString;

@interface MSStyleInspectorSection : MSNestedInspectorSection <MSStylePartInspectorDelegate>
{
    MSCollapsibleHeaderInspectorItem *_headerItem;
    MSMultipleFillInspectorViewController *_fillViewController;
    MSMultipleBorderInspectorViewController *_borderViewController;
    MSMultipleShadowInspectorViewController *_shadowViewController;
    MSMultipleInnerShadowInspectorViewController *_innerShadowViewController;
    MSBlurInspectorViewController *_blurViewController;
    MSColorControlsInspectorViewController *_colorControlsViewController;
    NSArray *_currentControllers;
    NSDictionary *_restorationInfo;
}

@property(retain, nonatomic) NSDictionary *restorationInfo; // @synthesize restorationInfo=_restorationInfo;
@property(retain, nonatomic) NSArray *currentControllers; // @synthesize currentControllers=_currentControllers;
@property(retain, nonatomic) MSColorControlsInspectorViewController *colorControlsViewController; // @synthesize colorControlsViewController=_colorControlsViewController;
@property(retain, nonatomic) MSBlurInspectorViewController *blurViewController; // @synthesize blurViewController=_blurViewController;
@property(retain, nonatomic) MSMultipleInnerShadowInspectorViewController *innerShadowViewController; // @synthesize innerShadowViewController=_innerShadowViewController;
@property(retain, nonatomic) MSMultipleShadowInspectorViewController *shadowViewController; // @synthesize shadowViewController=_shadowViewController;
@property(retain, nonatomic) MSMultipleBorderInspectorViewController *borderViewController; // @synthesize borderViewController=_borderViewController;
@property(retain, nonatomic) MSMultipleFillInspectorViewController *fillViewController; // @synthesize fillViewController=_fillViewController;
@property(retain, nonatomic) MSCollapsibleHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;
- (void).cxx_destruct;
- (void)refreshIfNecessary:(id)arg1;
- (void)sectionWithIdentifierWillCollapse:(id)arg1;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (void)showBorderOptionsAction:(id)arg1;
- (void)showFillOptionsAction:(id)arg1;
- (void)restorePopover;
- (void)closeAnyColorPopoverImmediately:(BOOL)arg1;
- (void)closeAnyColorPopover;
- (void)openPopoverForStylePart:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 preferringNative:(BOOL)arg3;
- (id)views;
@property(readonly, nonatomic) BOOL hasContent;
- (void)updateItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)restoreWithState_ms:(id)arg1;
- (id)viewRestorationState_ms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

