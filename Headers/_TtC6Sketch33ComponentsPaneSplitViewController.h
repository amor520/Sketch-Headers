//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSplitViewController.h>

@class NSSplitViewItem;

@interface _TtC6Sketch33ComponentsPaneSplitViewController : NSSplitViewController
{
    // Error parsing type: , name: componentsPaneController
    // Error parsing type: , name: libraryListSplitItem
    // Error parsing type: , name: filterBarSplitItem
    // Error parsing type: , name: previewSplitItem
    // Error parsing type: , name: hideSymbolItem
    // Error parsing type: , name: includeHideSymbolView
    // Error parsing type: , name: libraryItemCollapseObserver.storage
    // Error parsing type: , name: previewItemCollapseObserver
    // Error parsing type: , name: configured
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)reflectCurrentPreviewState;
- (void)reflectCurrentLibraryState;
- (void)applyAppearance;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(nonatomic, retain) NSSplitViewItem *hideSymbolItem; // @synthesize hideSymbolItem;
@property(nonatomic, retain) NSSplitViewItem *previewSplitItem; // @synthesize previewSplitItem;
@property(nonatomic, retain) NSSplitViewItem *filterBarSplitItem; // @synthesize filterBarSplitItem;
@property(nonatomic, retain) NSSplitViewItem *libraryListSplitItem; // @synthesize libraryListSplitItem;

@end

