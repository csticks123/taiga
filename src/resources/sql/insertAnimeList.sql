INSERT OR REPLACE INTO
  anime_list(
    id,
    media_id,
    progress,
    date_start,
    date_end,
    score,
    status,
    private,
    rewatched_times,
    rewatching,
    rewatching_ep,
    notes,
    last_updated
  )
  VALUES(
    :id,
    :media_id,
    :progress,
    :date_start,
    :date_end,
    :score,
    :status,
    :private,
    :rewatched_times,
    :rewatching,
    :rewatching_ep,
    :notes,
    :last_updated
  )
